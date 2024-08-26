#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Number of Element : ";
    cin >> n;
    int num[n];
    cout << "Enter " << n << " Element : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int sum;
    cout << "Enter Sum : ";
    cin >> sum;
    int s1, s2;
    bool res = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num[i] + num[j] == sum)
            {
                s2 = num[i];
                s1 = num[j];
                res = true;
                break;
            }
                }
    }
    if (res == true)
    {
        cout << s1 << " " << s2;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}