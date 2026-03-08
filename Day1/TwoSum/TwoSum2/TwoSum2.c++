#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;

        while (l < r) {
            int sum = nums[l] + nums[r];

            if (sum == target) {
                return {l + 1, r + 1}; // 1-based index
            }
            else if (sum < target) {
                l++;
            }
            else {
                r--;
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums;
    int n, target, choice;
    Solution obj;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Enter Sorted Array\n";
        cout << "2. Find Two Sum\n";
        cout << "3. Display Array\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter number of elements: ";
            cin >> n;

            nums.clear();
            cout << "Enter sorted elements:\n";
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

            cout << "Enter target: ";
            cin >> target;

            {
                vector<int> result = obj.twoSum(nums, target);

                if(result.empty())
                    cout << "No pair found\n";
                else
                    cout << "Indices (1-based): " << result[0] << " " << result[1] << endl;
            }
            break;

        case 3:
            cout << "Array: ";
            for(int x : nums)
                cout << x << " ";
            cout << endl;
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}