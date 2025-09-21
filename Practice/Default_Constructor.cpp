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
};

int main()
{
    //object made statically
    Hero h1;
    
    //object made dynamically 
    Hero *h2=new Hero();
    
    
    return 0;
}