#include<iostream>

using namespace std;

// non pointer, non reference function
// void swap_num(int a, int b){
//     swap(a,b); //copy of a nd b are swapped
//     a = a+10;
// }

//pointer function
// void swap_num(int *a, int *b)
// {
//     swap(*a,*b);
// }

// reference function
void swap_num(int &a, int &b)
{
    swap(a,b);
}

int main(){
    int a = 10;
    int b = 20;
    cout<<"og: "<<a<<" "<<b<<endl;
    swap_num(a, b);
    cout<<"after: "<<a<<" "<<b<<endl;
}