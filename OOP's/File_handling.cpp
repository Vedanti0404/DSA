#include<bits/stdc++.h>
using namespace std;
int main(){

//--------------------------------------------------------------------WRITE---------------------------------------------------------------------
   //If you want to write in a file that is already present in the secondary memory then first task is to open the file and then write in it.
    
   //class ofstream
//    ofstream fout; 
//    fout.open("newfile.txt"); 
   //fout : object
   //open : member function
   //If the file name is present it will open that file else if not prsent it will create on new file of that name.

//    fout<<"Hello World";

//    fout.close();        
   //close is used so that we can release all the resources that handle the particular file.

//    vector<int> arr(5);

//     cout << "Enter the input: ";
//     for (int i = 0; i < 5; i++)
//         cin >> arr[i];

//     ofstream fout;
//     fout.open("abc.txt");
//     fout<<"Original data\n";
//     for (int i = 0; i < 5; i++) {
//     fout << arr[i] << " ";
//     }

//     fout<<"\nSorted data\n";
//     sort(arr.begin(),arr.end());
//     for (int i = 0; i < 5; i++) {
//     fout << arr[i] << " ";
//     }


ofstream fout;
fout.open("new1.txt");
fout<<"Hello World\n";
fout<<"Hello India\n";
fout<<"Hello Vedanti\n";
fout.close();

ifstream fin;
fin.open("new1.txt");

string line;
while(getline(fin,line)){
    cout<<line<<endl;
}

fin.close();
    return 0;
   }

//--------------------------------------------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------READ------------------------------------------------------------------------
// fstream fin;//For file opening
// fin.open("newfile.txt");
// char c;
// c = fin.get();//reads charachter by character also includes space,etc
// while(!fin.eof()) //eof-end of file .It will return 1 when reached at the end of the file
// {
//     cout<<c;
//    c = fin.get();
// };
// fin.close();

