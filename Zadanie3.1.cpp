#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        if (Console.KeyAvailable && Console.ReadKey(true).Key == ConsoleKey.t)
        {
            break;
        }

        cout << Console.ReadKey(true).Key;
    }
}
