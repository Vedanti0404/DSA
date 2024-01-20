#include<bits/stdc++.h>
using namespace std;
//Student
class Student{
  public:
  void print(){
    cout<<"I am a student\n";
  }
};
//male
class Male{
    public:
    void Maleprint(){
        cout<<"I am a Male\n";
    }
};
//female
class Female{
    public:
    void Femaleprint(){
        cout<<"I am a Female\n";
    }
};
//boy
class Boy: public Student,public Male{
    public:
    void Boyprint(){
        cout<<"I am a Boy\n";
    }
};
//girl
class Girl: public Student,public Female{
    public:
    void Girlprint(){
        cout<<"I am a Girl\n";
    }
};

int main(){
    Girl G1;
    G1.Girlprint();
    Boy B1;
    B1.Maleprint();
return 0;
}