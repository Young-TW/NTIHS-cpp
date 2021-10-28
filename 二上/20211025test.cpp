/*
 * 20211025 考試題目
 * 名字:王晨洋
 * 座號:5
 * 班級:資二乙
 */

#include <iostream>
#define PI 3.14159

using namespace std;

class Circle{
private:
    float radius;

public:
    Circle(float radius){
        cout << "建構子設定半徑\n";
        this -> radius = radius;
    }

    ~Circle(){
        cout << "解構子";
    }

    void Radius(){
        cout << "半徑 = " << radius << endl;
    };

    void Circumference(){
        cout << "圓周長 = " << (2*radius*PI) << endl;
    };

    void Area(){
        cout << "圓面積 = " << (PI*radius*radius) << endl;
    };
};

int main() {
    cout << "請輸入半徑=";
    float userInput;
    cin >> userInput;
    Circle MyCircle = Circle(userInput);
    MyCircle.Radius();
    MyCircle.Circumference();
    MyCircle.Area();

    return 0;
}