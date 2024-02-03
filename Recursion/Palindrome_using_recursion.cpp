#include<bits/stdc++.h>
using namespace std;
string palindrome(string s,int start,int end){
    if(start>=end){
        return "Palindrome";
    }
    if(s[start]!=s[end]){
        return "Not a Palindrome";
    }
    else
    return palindrome(s,start+1,end-1);

}
int main(){
    string s="nayan";
    cout<<palindrome(s,0,4);
return 0;
}