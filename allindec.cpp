#include<bits/stdc++.h>
using namespace std;
struct allindec
{
   vector<int> vi;
};

void allindexDECord(int arr[],int i,int n,int val){
    //allindec vi;
   if (i==n ){return;}
   if(arr[i]==val)allindec.vi.push_back(i);
  allindexDECord(arr,i+1,n,val);
   
}

int main(){
    int arr[]={-1,-1,4,788,8,8,8,10,2};
  //printarray(arr,0,5);
  allindexDECord(arr,0,8,-1);

  for(auto a:  allindec.vi){
    cout<<a<<" ";
  }
return 0;
}