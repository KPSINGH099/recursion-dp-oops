#include<bits/stdc++.h>
using namespace std;
class base{
public:
void greet(){
cout<<"hello"<<endl;
}
};
class derived:public base{
    public:
    void greet(){
      cout<<"namastey"<<endl;  
    }
};
int main(){
/*base1 b;
b.greet();*/
derived d;
d.greet();
    return 0;
}