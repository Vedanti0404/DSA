#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int n){
        arr=new int[n];
        front=rear=-1;
        size=n;
    }

    bool IsEmpty(){
        return front==-1;
    }
    bool IsFull(){
        return (rear+1)%size==front;
    }
    void push(int x){
       if(IsEmpty()){
           front=rear=0;
           arr[0]=x;
           cout << "Pushed: " << x << endl;
           
       }
       else if(IsFull()){
           cout<<"Queue Overflow"<<endl;
           return;
       }
       else{
           rear=(rear+1)%size;
           arr[rear]=x;
           cout << "Pushed: " << x << endl;

       }
    }

    void pop(){
        if(IsEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else if(front==rear){
             cout << "Popped: " << arr[front] << endl;
            front=rear=-1;
        }
        else{
            cout << "Popped: " << arr[front] << endl;
            front=(front+1)%size;
        }
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);


    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    
return 0;
}