#include <iostream>
using namespace std;
int main()
{
    int number,i = 1,count = 0;
    cout << "��J�����";
    cin >> number;
    cout << "�U�C��" << number << "����]�� :" << "\n";
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
    cout << "\n�`�@��" << count << "��\n";
    return 0;
}

