#include <iostream>
using namespace std;
int main()
{
    int s, e;
    cout << "Enter Start Range : ";
    cin >> s;
    cout << "Enter End Range : ";
    cin >> e;
    bool prime = false;

    for (int i = s; i <= e; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = true;
                break;
            }
        }
        if (prime == false && i != 0)
        {
            cout << i << " ";
        }
        prime = false;
    }
    cout << endl;

    return 0;
}