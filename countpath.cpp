//memorization
#include<bits/stdc++.h>
using namespace std;
//you need to pass dp vector by refrence using & sign
//array is passed by refrence by default
int countPaths(int n, vector<int> & qb) {
    
    if (n == 0) {
      return qb[n]=1;
    } else if (n < 0) {
      return 0;
    }
    if (qb[n] !=0) {
      return qb[n];
    }
    //we can see number of calls are reduced
 //cout<<//n<<endl;

    int p1 = countPaths(n - 1, qb);
    int p2 = countPaths(n - 2, qb);
    int p3 = countPaths(n - 3, qb);

    qb[n] = p1 + p2 + p3;
    return p1 + p2 + p3;
  }
int main() {

  int n;
  cin >> n;
  //we will first create an array of size n+1 so that we can access all the indexes from 0 to n.
vector<int> qb(n+1);
//qb contains 0 by default
//for(auto x:qb){cout<<x<<" ";}
int a=countPaths(n,qb);
cout<<a<<endl;
 }