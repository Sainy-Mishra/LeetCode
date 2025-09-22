#include <bits/stdc++.h>
using namespace std;

//Encapsulation done below
class Student{
    private:
        string name;
        int rno;
        int age;
        
    public:
        int getAge(){
            return this->age;
        }
        string getName(){
            return this->name;
        }
        int getRno(){
            return this->rno;
        }
        
        void setAge(int age){
            this->age=age;
        }
};

//Inheritance done below
class Boy:public Student{
    void print(){
        cout<<"Its a boy."<<endl;
    }
};

int main()
{
    Boy B1;
    B1.setAge(40);
    
    cout<<"Age is: "<<B1.getAge()<<endl;
    
    return 0;
}