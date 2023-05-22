#include <iostream>
using namespace std;

int main()
{
    int s;
    cout << "Enter side: ";
    cin >> s;

    for (int i = 1; i <= s; i++)
    {
        cout << "";
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "";
        }
    }
    return 0;
}