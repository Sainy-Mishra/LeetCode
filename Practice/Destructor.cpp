#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    char value;
    char *name;
    
    Hero() {
        name = new char[100];
        cout<<"Constructor Called! "<<endl;
    }
    
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+ 1];
        strcpy(ch,temp.name);
        this->name=ch;
        
    }
    
    void print(){
        cout<<"Health is: "<<this->health<<endl;
        cout<<"Level is: "<<this->value<<endl;
        cout<<"Name is: "<<this->name<<endl;
    }
    
    int getHealth(){
        return health;
    }
    
    char getValue(){
        return value;
    }
    
    char getName(){
        return *name;
    }
    
    void setHealth(int h){
        health=h;
    }
    
    void setValue(int v){
        value=v;
    }
    
    void setName(char name[]){
        strcpy(this->name,name);
    }
    
    ~Hero(){
        cout<<"Destructor Called! "<<endl;
    }
};

int main()
{
    Hero h1;
    Hero *h2=new Hero();
    delete h2;

    return 0;
}