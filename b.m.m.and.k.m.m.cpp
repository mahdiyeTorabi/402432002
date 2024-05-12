#include <iostream>
using namespace std;
int main()
 {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int a = num1, b = num2;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    int b.m.m = a;
    int k.m.m = (num1 * num2) / b.m.m;
    cout << "b.m.m: " << b.m.m << endl;
    cout << "k.m.m: " << k.m.m << endl;
    return 0;
}