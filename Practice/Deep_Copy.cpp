#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    char value;
    char *name;
    
    Hero() {
        name = new char[100];
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
};

int main()
{
    Hero h1;
    char name[10]="Sainy";
    h1.setName(name);
    h1.setValue('A');
    h1.setHealth(90);
    h1.print();
    
    Hero h2(h1);
    h2.print();
    
    h1.name[0]='T';
    h1.print();
    
    h2.print();
    return 0;
}