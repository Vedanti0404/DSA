//Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.

#include<iostream>

#include<bits/stdc++.h>


using namespace std;

class Print{

    private:
        string *s;// not complete dynamic, but chalel
        // dynamic
        // const char* s; dont use in strings....it's complicated. keep it static, kahi nahi hot

    public:
        //constructor
        Print(string s){
            this->s = new string(s);
        }
        // resolution use...just declare the function here
        string line_print(string); 
        /*here look i have not used variable, because while declaring the function just mentioning the input data type is also enough becuse we can give the name of the input parameter for the function later while defining the function below. */
        ~Print(){
            delete s;
        }

};
//function declared here
string Print::line_print(string s){
  return ("you can concat and return too! "+s);
}

int main(){

    const char* s = "6x3";
    Print *obj = new Print(s);
    cout<<obj->line_print(s);

    delete obj; //hope you learned a lot. I know this takes time. But remember "Good things take Time! ".
    return 0;

}