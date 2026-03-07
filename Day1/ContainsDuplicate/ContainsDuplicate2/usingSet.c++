#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {

            if(i > k) {
                st.erase(nums[i - k - 1]);
            }

            if(st.find(nums[i]) != st.end()) {
                return true;
            }

            st.insert(nums[i]);
        }

        return false;
    }
};

int main() {
    Solution obj;
    vector<int> nums;
    int n, k, choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Enter Array\n";
        cout << "2. Check Nearby Duplicate\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter number of elements: ";
            cin >> n;

            nums.resize(n);

            cout << "Enter elements:\n";
            for(int i = 0; i < n; i++) {
                cin >> nums[i];
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
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while(choice != 3);

    return 0;
}