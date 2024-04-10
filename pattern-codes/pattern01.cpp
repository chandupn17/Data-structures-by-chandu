#include <iostream>
using namespace std;
int main()
{
    /*
to print the pattern like this 
@
@@
@@@
@@@@
@@@@@
@@@@@@
@@@@@@@
@@@@@@@@
@@@@@@@@@
@@@@@@@@@@
-----------
@@@@@@@@@@
@@@@@@@@@
@@@@@@@@
@@@@@@@
@@@@@@
@@@@@
@@@@
@@@
@@
@
10+10*/
    int i, j, f = 0, f1 = 0, n = 10;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "@";
        }
        cout << endl;
        f += 1;
    }
    cout << "-----------";
    cout << endl;

    for (i = n; i >= 1; i--)
    {
        for (j = i; j>= 1; j--)
        {
            cout << "@";
        }
        cout << endl;
        f1 += 1;
    }
    cout <<f<< "+"<< f1;
    return 0;
}