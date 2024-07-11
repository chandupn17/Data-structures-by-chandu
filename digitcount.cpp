#include<iostream>
using namespace std;
int countdigit(int n)
{
    int flag=0;
    while(n>0)
    {
        n=n/10;
        flag++;

    }
    return flag;
}
int main(){
int n;
cout<<"enter the digit to count "<<endl;
cin>>n;
int value =countdigit(n);
cout<<value;
return 0;
}