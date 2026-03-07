#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            if(buyprice > prices[i]) {
                buyprice = prices[i];
            }
            profit = max(profit, prices[i] - buyprice);
        }

        return profit;
    }
};

int main() {
    Solution obj;
    vector<int> prices;
    int n, choice;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Enter stock prices\n";
        cout << "2. Calculate maximum profit\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter number of days: ";
            cin >> n;

            prices.clear();
            cout << "Enter prices:\n";
            for(int i = 0; i < n; i++) {
                int x;
                cin >> x;
                prices.push_back(x);
            }
            break;

        case 2:
            if(prices.size() == 0) {
                cout << "Please enter prices first.\n";
            } else {
                int result = obj.maxProfit(prices);
                cout << "Maximum Profit: " << result << endl;
            }
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