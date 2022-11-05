#include <iostream>

using namespace std;

int main()
{
    string key;
    while (key != "t")
    {
        cout << "Podaj znak: ";
        cin >> key;
        cout << key << endl;
    }

    return 0;
}