/*台南高工
 *資訊一乙
 *05
 *王晨洋
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,x1,x2,f,g,i;
    while (cin >> a >> b >> c){
        f = (b*b)-(4*(a*c));
        g = sqrt(f);
        x1 = ((-b)+g)/(2*a);
        x2 = ((-b)-g)/(2*a);
        if (f > 0){
            cout << "\n相異實根\nx1=" << x1 << " , x2=" << x2 << endl;
        }
        else if (f == 0){
            cout << "\n相等實根\n" << x1 << endl;
        }
        else{
            i = sqrt(-f)/(2*a);
            cout << "\n共軛虛根\n";
            cout << "x1=" << -f/(2*a) << " + " << i << "i\n";
            cout << "x2=" << -f/(2*a) << " - " << i << "i\n\n";
        }
    }
    return 0;
}