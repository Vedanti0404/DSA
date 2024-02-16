// #include<bits/stdc++.h>
// using namespace std;

// class Addition{
//     private:
//     int arr[20];

//     public:
//     int numbers(){
//         cout<<"Enter 20 elements "<<endl;
//         for(int i=0;i<20;i++){
//             cout<<"Enter elements "<<i+1<<":"<<endl;
//             cin>>arr[i];
//         }
//     }

//     int print_sum(){
//         int sum=0;
//         for(int i=0;i<20;i++){
//             sum+=arr[i];
//         }
//         return sum;
//     }

// };

// int main(){
//    Addition obj;
//    obj.numbers();
//    int ans=obj.print_sum();
//    cout<<"Sum of the given 20 elements is: "<<ans<<endl;
// return 0;
// }


// Using recursion

#include<bits/stdc++.h>
using namespace std;
void numbers(int arr[],int i){
 if(i<20){
    cout<<"Enter 20 elements"<<endl;
    cout<<"Enter element "<<i+1<<":"<<endl;
    cin>>arr[i];
    numbers(arr,i+1);
 }
}

int print_sum(int arr[],int i){
    if(i==0){
        return arr[i];
    }
    return arr[i]+print_sum(arr,i-1);
}
int main(){
    int arr[20];
    numbers(arr,0);
    int ans=print_sum(arr,19);
    cout<<"Sum of the 20 elements is: "<<ans<<endl;
return 0;
}

