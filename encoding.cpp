#include <bits/stdc++.h>
using namespace std;
void printencoding(string ques,string ans)
{
if(ques.size()==0){
    cout<<ans<<endl;
    return;
}else if(ques.size()==1){
    char ch=ques[0];
    if(ch=='0'){return;}
    else{
        int chv=ch-'0';
        char code =(char)('a'+chv-1);
         cout<<ans+code<<endl;
    }
}
//2 ya jyada size h
else{
    //ek bar ek character le k call kr rahe h
char ch=ques[0];
string roq=ques.substr(1);
    if(ch=='0'){return;}
    else{
        int chv=ch-'0';
        char code =(char)('a'+chv-1);
       printencoding(roq,ans+code);
    }
//ek bar do character le k call kr rahe h
string ch12=ques.substr(0,2);
string roq12=ques.substr(2);
int ch12v=stoi(ch12);
if(ch12v<=26){
        
        char code =(char)('a'+ch12v-1);
       printencoding(roq12,ans+code);
    }
}

}


int main()
{
printencoding("123","");
return 0;
}
