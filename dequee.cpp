#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(2);
     dq.push_back(1);
     for(int x:dq){
        cout<<x<<" ";
     }
     cout<<endl;
     dq.pop_back();
     dq.pop_front();
      for(int x:dq){
        cout<<x<<" ";
     }
     cout<<endl;
     cout<<dq.size();
    return 0;
}