#include <iostream>
using namespace std;

int main() {

    int row_num;
    cout << "Podaj liczbe wierszy: ";
    cin >> row_num;
    cout << "Trojkat:" << endl;

    for (int n = 1; n <= row_num; n++) {

        for (int r = 1; r < row_num - n + 1; r++)
            cout << "  ";

        int val = 1;
        for (int r = 1; r <= n; r++) {
            cout << val << "   ";

            val = val * (n - r) / r;
        }
        cout << endl;
    }

    return 1;
}