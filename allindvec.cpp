#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &vect)
   {   cout<<"Even elements are: ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }

void allIndi(int arr[],int i,int n,int val,vector<int> & ans){
cout<<"calling for i="<<i<<endl;
if(i==n)return;
if(arr[i]==val)ans.push_back(i);
allIndi(arr,i+1,n,val,ans);
}

int main(){
    int arr[]={-1,-1,2,788,8,-1,8,-1,0};
vector<int> v;
allIndi(arr,0,9,-1,v);
print_vector(v);
    return 0;
}