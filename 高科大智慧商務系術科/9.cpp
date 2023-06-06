#include <iostream>
using namespace std;

int main() {
    int arr1[6];
    int arr2[6];
    for (int i=0; i<6; i++) {
        cin >> arr1[i];
    }

    for (int i=0; i<6; i++) {
        cin >> arr2[i];
    }

    for (int i=0; i<6; i++) {
        cout << (arr1[i] + arr2[i])%2 << " ";
    }

    return 0;
}