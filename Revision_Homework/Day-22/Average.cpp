#include<bits/stdc++.h>
using namespace std;
class Average{
  private:
  int arr[18];
  public:
  void element(){
    cout<<"Enter 18 elements"<<endl;
    for(int i=0;i<18;i++){
        cout<<"Enter elements "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
  }
  double print_avg(){
    int sum=0;
    for(int i=0;i<18;i++){
        sum+=arr[i];
    }
    return sum/18.0;
  }
};
int main(){
    Average obj;
    obj.element();
    double avg=obj.print_avg();
    cout<<"Average of 18 elements is: "<<avg<<endl;
return 0;
}