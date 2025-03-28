#include <iostream>
using namespace std;

void binary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        cout << ((n & (1 << i)) ? 1 : 0);
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    binary(n);
    return 0;
}
