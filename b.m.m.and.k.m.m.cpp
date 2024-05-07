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
    int greatest_common_divisor = a;
    int least_common_multiple = (num1 * num2) / greatest_common_divisor;
    cout << "Greatest Common Divisor: " << greatest_common_divisor << endl;
    cout << "Least Common Multiple: " << least_common_multiple << endl;
    return 0;
}