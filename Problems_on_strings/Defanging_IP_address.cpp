#include<bits/stdc++.h>
using namespace std;
class IP{
 public:
 string defangIPadd(string s){
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            ans+="[.]";
        }
        else{
            ans+=s[i];
        }
    }
    return ans;
 }
};
int main(){
   IP object;
   cout<<"Enter IP address: ";
   string n;
   cin>>n;
   string defang=object.defangIPadd(n);
   cout<<"Defanged IP address is: "<<defang<<endl;
   
return 0;
}