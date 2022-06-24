#include <iostream>
using namespace std;
int main()
{
    int number,i = 1,count = 0;
    cout << "輸入正整數";
    cin >> number;
    cout << "下列為" << number << "的質因數 :" << "\n";
    for (int i = 2; i < number + 1; i++) {
        if (number % i == 0) {
            int j = 0;
            for (int x = 2; x < i; x++) {
                if (i % x == 0) {
                    j++;
                    break;
                }
            }
            if (!j) {
                count++;
                cout << i << ",";
            }
        }
    }
    cout << "\n總共有" << count << "個\n";
    return 0;
}

