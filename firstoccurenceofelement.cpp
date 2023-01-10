#include<bits/stdc++.h>
using namespace std;
int prinfirstindex(int arr[],int i,int n,int val){
    if (i==n && arr[i]==val){return i;}
    if (i==n && arr[i]!=val){return -1;}
   int idxinsmallarray=prinfirstindex(arr,i+1,n,val);
 int curval=arr[i];
    if(curval==val)return i;
   else return idxinsmallarray; 
}

int main(){
    int arr[]={-99,4,788,8,10,2};
  //printarray(arr,0,5);
  int max=prinfirstindex(arr,0,5,2);
  cout<<max;
    return 0;
}