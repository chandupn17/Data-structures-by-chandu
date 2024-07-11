#include<iostream>
using namespace std;
int main(){
 /* to print like this --
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
5*/

int i,n=10,k=0;
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
cout<<"-------- \n";
int s=0;

for( i=1;i<=n;i++){
    for(int j=1; j<=i-1;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*(n-i)+1;j++){
        cout<<"*";
        
    }
    cout<<"\n"; 
    s++;
}
cout<<s;
return 0;
}