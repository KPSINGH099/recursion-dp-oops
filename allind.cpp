#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &vect)
   {   cout<<"Even elements are: ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }

//fsf=foundsofar

vector<int> allindexINCord(int arr[],int i,int n,int val,int fsf){
  vector<int>v;
   if (i==n ){return   v;}
   if(arr[i]==val){
allindexINCord(arr,i+1,n,val,fsf+1);
 
   v.push_back(i);
   }
  else{
     allindexINCord(arr,i+1,n,val,fsf);
   
  }
   
}

int main(){
    int arr[]={-1,-1,4,788,8,8,8,10,2};
  //printarray(arr,0,5);
vector<int> v= allindexINCord(arr,0,9,8,0);
print_vector(v);
    return 0;
}