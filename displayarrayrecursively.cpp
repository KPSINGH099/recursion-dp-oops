#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int i,int n){
    if (i==n)return;
  cout<<arr[i]<<" ";
   printarray(arr,i+1,n);
}
void printarrayreverse(int arr[],int n){
    if (n==0)return;
  cout<<arr[n-1]<<" ";
   printarrayreverse(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
  //printarray(arr,0,5);
  printarrayreverse(arr,5);
    return 0;
}