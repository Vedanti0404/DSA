//Two numbers are given, print their product


#include<bits/stdc++.h>


using namespace std;

class Product{
    private:
        int *num1;
        int *num2;
    public:
        Product(int num1, int num2){ // constructor to allocate  BOTH MEMORY AND VALUE.
            this->num1=new int(num1);
            this->num2=new int(num2);
        }
        int print_product(int num1, int num2)
        {
            return num1*num2; // try to IMPLEMENT THIS TYPE OF FUNCTION (WR WP).
        }
        ~Product(){ //destructor that will delete every DYNAMIC MEMORY  
            delete num1;
            delete num2;
        }
};

int main(){
    int a = 10;
    int b = 6;
    Product *user =  new Product(a,b); // this will allocate memory and value for constructor created above.
    cout<<user->print_product(a,b); // printing it directly because the function is returning a PRODUCT.
    delete user;
    
    return 0;

}