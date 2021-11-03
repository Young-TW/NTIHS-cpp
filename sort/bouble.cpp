#include <iostream>
using namespace std;

int main(){
    int array[10];

    for (int i=0;i<10;i++){
        cout << "input num" << i+1 << " : \n";
        cin >> array[i];
    }

    cout << "排序前\n";
    for(int i=9;i>0;i--){
        cout << array[i] << ", ";
    }

    int reg = 0;
    for(int i=9;i>0;i--){
        for (int j=1;j<=i;j++){
            if (array[j] > array[j-1]){
                reg = array[j];
                array[j] = array[j-1];
                array[j-1] = reg;
            }
        }
    }

    cout << "\n排序後\n";
    for(int i=9;i>0;i--){
        cout << array[i] << ", ";
    }

    return 0;
}