#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"hii";
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
//array to maintain index

//const long int N=1e6+2;  format is not working in current version of 
//compiler
//const long int N=100000;   this is max limit long int can have in compiler
const long  int N=100000;
int idx[N];
for(int i=0;i<N;i++)
{
    idx[i]=-1;
    }
int minindex=INT_MAX;
//traverse index array
for(int i=0;i<n;i++)
{
    if(idx[arr[i]]!=-1)
{minindex=min(minindex,idx[i]);}
else{
    idx[arr[i]]=i;
}
}
if(minindex==INT_MAX){
    cout<<"-1"<<endl;
}else{
    cout<<minindex+1<<endl; 
}
    return 0;
}