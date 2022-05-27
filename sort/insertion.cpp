#include <iostream>
using namespace std;

int main(){
    int array[10];

    for (int i=0;i<10;i++){
        cout << "input num" << i+1 << " : \n";
        cin >> array[i];
    }

    cout << "排序前\n";
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }

    int reg, key;
    for(int i=0; i<10;i++){ // range to sorted
        key = array[i];
        reg = i;
        while(reg > 0 && array[reg-1] > key){ // range to value
            array[reg] = array[reg-1];
            reg--;
        }
        array[reg] = key;
    }

    cout << "\n排序後\n";
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }

    return 0;
}