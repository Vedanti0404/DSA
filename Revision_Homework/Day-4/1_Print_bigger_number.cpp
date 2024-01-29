#include<bits/stdc++.h>


using namespace std;

class Bigger{
    private:
        int *num1;
        int *num2;
    public:
        Bigger(int num1, int num2){ 
            this->num1=new int(num1);
            this->num2=new int(num2);
        }
        int print_bigger(int num1, int num2)
        {
           int max = (num1>num2)?num1:num2;
        }
        ~Bigger(){  
            delete num1;
            delete num2;
        }
};

int main(){
    int a = 10;
    int b = 6;
    Bigger *obj =  new Bigger(a,b); 
    cout<<obj->print_bigger(a,b); 
    delete obj;
    
    return 0;

}