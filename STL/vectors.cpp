#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v;
//Pushing elements in the vector.   
   v.push_back(5);
   v.push_back(4);
   v.push_back(3);
   v.push_back(8);
   v.push_back(6);
   for (int i = 0; i < v.size(); i++) {
        cout<< v[i] << " ";
    }

//     v.clear();
//     cout<<endl;
// cout << "Vector after clear: "<<endl;
//     for (int i : v) {
//         cout << i << " ";
//     }



// v.erase(v.begin()+3);
//  cout<<endl;
// cout << "Vector after erasing: ";
//     for (int i : v) {
//         cout << i << " ";
//     }
   


// v.pop_back();   
// cout<<endl;
// cout << "Vector after pop operation: ";
//     for (int i : v) {
//         cout << i << " ";
//     }



// cout<<endl;

// cout<<v.front()<<endl;

// cout<<v.back()<<endl;

// cout<<v.empty()<<endl;

// cout<<v.at(2)<<endl;

//cout<<binary_search(v.begin(),v.end(),13)<<endl;

//cout<<find(v.begin(),v.end(),6)-v.begin()<<endl;


// auto maximum=max_element(v.begin(),v.end());
// int maxi= *maximum;
//         cout<<"Maximum element: "<<maxi<<endl;



// auto minimum=min_element(v.begin(),v.end());
// int mini= *minimum;
//         cout<<"Minimum element: "<<mini<<endl;        
  
// vector<int> v = {2, 4, 6 ,8, 10, 2, 6};
//  for (int i : v) {
//         cout << i << " ";
//     }
//cout<<endl;

// int Count=count(v.begin(), v.end(), 2);
// cout<<"Count: " <<Count<<endl;
// return 0;


// auto lowerB=lower_bound(v.begin(), v.end(), 8);
// cout << "Lower bound: " << *lowerB <<endl;

// auto upperB=upper_bound(v.begin(), v.end(), 4);
// cout << "Upper bound: " << *upperB <<endl;

// sort(v.begin(),v.end());
// cout << "Sorted vector in ascending order : ";
//     for (int i : v) {
//     cout << i << " "<<endl;
//     }
   

// sort(v.begin(),v.end(),greater<int>());
// cout << "Sorted vector in descending order: ";
//     for (int i : v) {
//     cout << i << " "<<endl;
//     }




        return 0;
}


