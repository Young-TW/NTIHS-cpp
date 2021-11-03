#include <iostream>
using namespace std;

int main() {
    int array[10];

    for (int i=0;i<10;i++){
        cout << "input num" << i+1 << " : \n";
        cin >> array[i];
    }

    cout << "排序前\n";
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }

    int reg;
    for(int i=0;i<10;i++){
        int min = i;
        for(int j=i+1;j<10;j++){
            if(array[j]<array[min]){
                min = j;
            }
        }
        if (min != i){
            reg = array[i];
            array[i] = array[min];
            array[min] = reg;
        }
    }

    cout << "\n排序後\n";
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }

    return 0;
}