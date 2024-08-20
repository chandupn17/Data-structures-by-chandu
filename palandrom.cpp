#include<iostream>
using namespace std;
int revers(int x){
    int l,rev=0;
    while(x!=0){
        l=x%10;
        rev=(rev*10)+l;
        x=x/10;
    }
    return rev;

}
int main(){

int dig,re_dig;
cout<<"enter the number to check it is palandrom or not "<<endl;
cin>>dig;
 re_dig =revers(dig);
cout<<"the number reverse "<<dig<<endl;
cout<<"the number after reverse "<<re_dig<<endl;
if(dig==re_dig){
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"the given number is palandrom number"<<endl;
}else{
     cout<<endl;
    cout<<endl;
    cout<<endl;
   cout<<"the given number is NOT a palandrom number"<<endl; 
}
return 0;
 }