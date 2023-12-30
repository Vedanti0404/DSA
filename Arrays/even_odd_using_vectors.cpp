#include<bits/stdc++.h>
using namespace std;
void even_odd(vector<int>v){
    vector<int> even;
    vector<int> odd;
   for(int i=0;i<v.size();i++){
    if(v[i]%2==0)
    {
        even.push_back(v[i]);
    }
    else{
        odd.push_back(v[i]);
    }
   }
   cout<<"Even Number: ";
   for(int i=0;i<even.size();i++){
   cout<<even[i]<<" "; 
}
cout<<"Odd Number: ";
   for(int i=0;i<<odd.size();i++){
   cout<<odd[i]<<" "; 
}
}
int main(){

    vector<int> v; 
    cout << "Enter the values of array: ";
    for (int i = 0; i < v.size(); i++) {
        int num;
        cin>>num;
        v.push_back(num);
    }

   
    even_odd(v);
return 0;
}