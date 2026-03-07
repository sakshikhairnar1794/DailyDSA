#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j] && (j - i) <= k){
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution obj;
    vector<int> nums;
    int n, k, choice;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Enter array\n";
        cout << "2. Check nearby duplicate\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter number of elements: ";
            cin >> n;

            nums.clear();
            cout << "Enter elements:\n";
            for(int i = 0; i < n; i++){
                int x;
                cin >> x;
                nums.push_back(x);
            }
            break;

        case 2:
            cout << "Enter value of k: ";
            cin >> k;

            if(obj.containsNearbyDuplicate(nums, k))
                cout << "Nearby duplicate exists\n";
            else
                cout << "No nearby duplicate found\n";
            break;

        case 3:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while(choice != 3);

    return 0;
}