#include<iostream>
using namespace std;
int count(int a){
    int n,flag=0;
    n=a;
    while(n!=0){
        n=n/10;
        flag++;
    }
    return flag;
}
int main(){
    int n;
    cout<<"enter the number to count  "<<endl;
    cin>>n;
    int coun = count(n);

    cout<<"the numer of digits in the number will be"<<endl;
    cout<<coun;

return 0;
 }