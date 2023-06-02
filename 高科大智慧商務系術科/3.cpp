#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int power;
    cin >> power;
    double summer = 0, non_summer = 0;

    vector<int> breakpoints = {0, 120, 330, 500, 700};
    vector<double> summer_price = {2.10, 3.02, 4.39, 4.97, 5.63};
    vector<double> non_summer_price = {2.10, 2.68, 3.61, 4.01, 4.50};

    for (int i = breakpoints.size() - 1; i >= 0; i--) {
        if (power > breakpoints[i]) {
            summer += (power - breakpoints[i]) * summer_price[i];
            non_summer += (power - breakpoints[i]) * non_summer_price[i];
            power = breakpoints[i];
        }
    }

    cout << "Summer months:" << fixed << setprecision(2) << summer << endl;
    cout << "Non-Summer months:" << fixed << setprecision(2) << non_summer << endl;
    return 0;
}