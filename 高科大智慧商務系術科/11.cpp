#include <iostream>
using namespace std;

int main() {
    int month, day;
    cin >> month >> day;
    if (month == 1 && day >= 21 || month == 2 && day <= 18) {
        cout << "Aquarius" << endl;
    } else if (month == 2 && day >= 19 || month == 3 && day <= 20) {
        cout << "Pisces" << endl;
    } else if (month == 3 && day >= 21 || month == 4 && day <= 20) {
        cout << "Aries" << endl;
    } else if (month == 4 && day >= 21 || month == 5 && day <= 21) {
        cout << "Taurus" << endl;
    } else if (month == 5 && day >= 22 || month == 6 && day <= 21) {
        cout << "Gemini" << endl;
    } else if (month == 6 && day >= 22 || month == 7 && day <= 22) {
        cout << "Cancer" << endl;
    } else if (month == 7 && day >= 23 || month == 8 && day <= 23) {
        cout << "Leo" << endl;
    } else if (month == 8 && day >= 24 || month == 9 && day <= 23) {
        cout << "Virgo" << endl;
    } else if (month == 9 && day >= 24 || month == 10 && day <= 23) {
        cout << "Libra" << endl;
    } else if (month == 10 && day >= 24 || month == 11 && day <= 22) {
        cout << "Scorpio" << endl;
    } else if (month == 11 && day >= 23 || month == 12 && day <= 21) {
        cout << "Sagittarius" << endl;
    } else if (month == 12 && day >= 22 || month == 1 && day <= 20) {
        cout << "Capricorn" << endl;
    }
    return 0;
}
