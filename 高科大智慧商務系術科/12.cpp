#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int a = num / 1000;
    int b = num / 100 % 10;
    int c = num / 10 % 10;
    int d = num % 10;
    a = (a + 7) % 10;
    b = (b + 7) % 10;
    c = (c + 7) % 10;
    d = (d + 7) % 10;
    int temp = a;
    a = c;
    c = temp;
    temp = b;
    b = d;
    d = temp;
    cout << a << b << c << d << endl;
    return 0;
}