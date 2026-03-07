#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        return st.size() != nums.size();
    }
};

int main() {
    Solution sol;
    int choice;
    do {
        cout << "\n--- Duplicate Checker Menu ---\n";
        cout << "1. Check for duplicates\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int n;
                cout << "Enter the number of elements: ";
                cin >> n;

                vector<int> nums(n);
                cout << "Enter " << n << " elements: ";
                for(int i = 0; i < n; i++) {
                    cin >> nums[i];
                }

                if(sol.containsDuplicate(nums))
                    cout << "The array contains duplicates.\n";
                else
                    cout << "The array does NOT contain duplicates.\n";
                break;
            }
            case 2:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while(choice != 2);

    return 0;
}