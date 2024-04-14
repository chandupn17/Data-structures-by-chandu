#include<iostream>
using namespace std;
int main(){
 /* to print like this --
    *
   ***
  *****
 *******
*********
5*/

int i,n=5,k=0;
for(i=1; i<=n;i++){
    for(int j=i;j<=n-1;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<"\n";
    k++;
}
cout<<k;
return 0;
}