//Two numbers are given a and b, print a-b

#include<bits/stdc++.h>


using namespace std;

class Difference{
    private:
        int *a;
        int *b;
    public:
        //constructor
        Difference(int a,int b){
        this->a = new int(a);
        this->b = new int(b);
        }
        //method with reference
        int print_difference(int &a, int &b){
            return a-b;
        }
        //destructor
        ~Difference(){
            delete a;
            delete b;
        }

};

int main(){

    //create    STATCIC      object
    int a = 10;
    int b = 6; // can be user input also (cout<<"Enter 2 value"; cin>>a>>b;)
    Difference user(a,b); // this time normal (so that we dont forget how to declare normal ones)
    cout<<user.print_difference(a,b)<<endl;

    // no "delete user" as the object is static and would be deleted by compiler itself.

    // see experiment your coding skills while solving EASY questions, so that you can focus on problem solving while solving difficult questions. Hope you use OOPS concepts well.


    return 0;

}