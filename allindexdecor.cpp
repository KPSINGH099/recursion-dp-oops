#include<bits/stdc++.h>
using namespace std;
void allindexDECord(int arr[],int i,int n,int val){
   if (i==n ){return;}
   if(arr[i]==val)cout<<i<<" ";
  allindexDECord(arr,i+1,n,val);
   
}

int main(){
    int arr[]={-1,-1,4,788,8,8,8,10,2};
  //printarray(arr,0,5);
  allindexDECord(arr,0,8,-1);

    return 0;
}