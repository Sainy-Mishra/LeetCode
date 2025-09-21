#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    char value;
    
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
    Hero h1;
    h1.setHealth(70);
    h1.setValue('A');
    
    cout<<"The Value is: "<<h1.getValue()<<endl;
    cout<<"The Health is: "<<h1.getHealth()<<endl;
    
    return 0;
}