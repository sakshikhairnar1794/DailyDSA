#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    vector<int> nums;
    int n, target, choice;
    Solution obj;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Enter Array\n";
        cout << "2. Find Two Sum (Optimal)\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter number of elements: ";
            cin >> n;

            nums.clear();
            cout << "Enter elements:\n";
            for(int i = 0; i < n; i++) {
                int x;
                cin >> x;
                nums.push_back(x);
            }
            break;

        case 2:
            if(nums.empty()) {
                cout << "Array not entered!\n";
                break;
            }

            cout << "Enter target value: ";
            cin >> target;

            {
                vector<int> result = obj.twoSum(nums, target);

                if(result.empty()) {
                    cout << "No pair found\n";
                }
                else {
                    cout << "Indices: " << result[0] << " and " << result[1] << endl;
                }
            }
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