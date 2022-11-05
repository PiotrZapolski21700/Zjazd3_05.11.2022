#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
    char x;
    cout << "Postaæ równania kwadratowego: ax?+bx+c=0" << endl;
    cout << "Podaj liczby A,B i C:" << endl;
    cout << "A:" << endl;
    cin >> a;
    cout << "B:" << endl;
    cin >> b;
    cout << "C:" << endl;
    cin >> c;
    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << endl << "x1 = " << x1;
        cout << endl << "x2 = " << x2;
    }
    else if (d == 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        cout << endl << "x = " << x1;
    }
    else {
        cout << endl << "Rownanie nie ma miejsc zerowych";
    }

    return 0;
}