#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;

    cout << "Podaj liczb� x:" << endl;
    cin >> x;

    cout << "Podaj liczb� y:" << endl;
    cin >> y;

    cout << x << " + " << y << " = ";
    printf("%.2f", x + y);
    cout << endl;
    cout << x << " - " << y << " = ";
    printf("%.2f", x - y);
    cout << endl;
    cout << x << " * " << y << " = ";
    printf("%.2f", x * y);
    cout << endl;
    cout << x << " / " << y << " = ";
    printf("%.2f", x / y);
    cout << endl;

    return 0;
}