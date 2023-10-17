#include<iostream>
using namespace std;
int fibo(int n){
     if(n==1 || n==2) return 1;  // base condition
     return fibo(n-1) + fibo(n-2);   // call 
int main(){
   int n;
   cout<<"enter number as per your choice: ";
   cin>>n;
   cout<<endl;
   cout<<fibo(n);
}
