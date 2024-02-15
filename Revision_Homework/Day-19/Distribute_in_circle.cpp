#include<bits/stdc++.h>
using namespace std;
class circular{
    public:
    int circle(int a,int b,int c){
        return (a+c-1)%b;
    }

};
int main(){
    circular obj;
    int a=2;
    int b=5;
    int c=1;

int ans=obj.circle(a,b,c);
cout<< "The position where the " << a << "th item will be delivered: " << ans<<endl;


return 0;
}