#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << 0 << endl;
    for (int i = 1; i < n; i++)
    {
        int s = 0;
        if (i % 2 == 0)
        {
            cout << 1;
            s = 0;
        }
        else
        {
            cout << 0;
            s = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            if (s == 0)
            {
                cout << s;
                s = 1;
            }
            else
            {
                cout << s;
                s = 0;
            }
        }
        cout << endl;
    }
    return 0;
}