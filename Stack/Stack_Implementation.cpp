#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
    public:
    bool flag;
    Stack(int s){
        size=s;
        top=-1;
        arr=new int [s];
        flag=1;
    }
   
   //Push

void push(int val){
    if(top==size-1){
        cout<<"Stack Overflow";
        return;
    }

    else{
        top++;
        arr[top]=val;
        cout<<"Pushed "<<val<<" in stack";
        flag=0;
    }
}

//POP

void pop(){
    if(top==-1){
        cout<<"Stack Underflow";
        return;
    }

    else{
        top--;
        if(top==-1)
        flag=1;
    }
}

//Peek

int peek(){
    if(top==-1){
        cout<<"Stack is empty";
        return -1;
    }

    else{
        return arr[top];
    }
}

//IsEmpty

bool IsEmpty(){
    return top==-1;
    }

//IsSize

int isSize(){
    return top+1;
}
};
int main(){
  Stack s(5);
  s.push(5);
 

return 0;
}

