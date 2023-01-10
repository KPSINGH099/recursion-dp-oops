#include<bits/stdc++.h>
using namespace std;
void lastindexOF(int arr[],int n,int val){
   
    if (n<0 ){return;}
   if(arr[n-1]==val)cout<<n-1<<" ";
  lastindexOF(arr,n-1,val);
   
}

int main(){
    int arr[]={-1,-1,4,788,8,8,8,10,2};
  //printarray(arr,0,5);
  lastindexOF(arr,8,-1);

    return 0;
}