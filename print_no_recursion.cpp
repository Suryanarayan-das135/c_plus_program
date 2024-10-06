#include<bits/stdc++.h>
using namespace std;
//this is one way to print
/*int printno(int i,int n){
    if(i>n)
      return 0;
      cout<<i<<endl;
      printno(i+1,n);
}*/
//this is second way to print
int printno1(int i,int n){
    if(i<1)
    return 0;
    printno1(i-1,n);
    cout<<i<<endl;
}
int main(){
    int  n;
    cout<<"enter the value of n:";
    cin>>n;
    // printno(1,n);
    printno1(n,n);
    return 0;
}
