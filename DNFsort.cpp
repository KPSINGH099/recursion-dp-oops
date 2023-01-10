#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int * b){
    int temp;
    temp=*a;
    *a=*b;
    *b=*a;
}
void dnfsort(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;        }
    }
}
int main(){
int arr[]={0,0,0,1,1,1,2,2,2,0,0,1,2,0,2,2,2};
dnfsort(arr,12);
for(auto x:arr){
    cout<<x<<" "<<endl;
}
    return 0;
}