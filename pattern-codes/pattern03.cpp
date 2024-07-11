#include <iostream>
using namespace std;
int main()
{
    int i, j, k = 0, n = 5;
    for (i = 1; i <= n; i++)
    {

        
        for (j = 1; j <= i ; j++)
        {
            cout << j;
            k++;
        }
        cout << "\n";
    }
    return 0;
}