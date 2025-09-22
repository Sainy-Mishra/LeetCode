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
};

int main()
{
    Student s1;
    
    cout<<"Everything is working fine";
    
    return 0;
}