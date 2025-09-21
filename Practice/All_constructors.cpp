#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    char value;
    
    //default constructor
    Hero(){
        cout<<"constructor called!"<<endl;
    }
    
    //parameterized constructor
    Hero(int health, char value){
        this->health=health;
        this->value=value;
    }
    
    //copy constructor
    Hero(Hero &temp){
        cout<<"Copy constructor called "<<endl;
        this->health=temp.health;
        this->value=temp.value;
    }
    
    int getHealth(){
        return health;
    }
    
    char getValue(){
        return value;
    }
    
    void setHealth(int h){
        health=h;
    }
    
    void setValue(int v){
        value=v;
    }
    
    void print(){
        cout<<health<<endl;
        cout<<value<<endl;
    }
};

int main()
{
    //object made statically
    Hero h1;
    
    //object made dynamically 
    Hero *h2=new Hero();
    
    //object for parameterized constructor
    Hero h3(70, 'A');
    h3.print();
    
    //copy constructor
    Hero h4(h3);
    h4.print();
    
    return 0;
}