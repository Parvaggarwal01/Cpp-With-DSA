#include <iostream>
using namespace std;

class Hero {
    private:
    int health;

    //properties
    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Simple Constructor" << endl;
        name = new char[100];
    }

    // Parameterised Constructor
    Hero(int health){
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    // copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) +  1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    // Destructor
    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main(){

    cout << Hero::random() << endl;


    // cout << Hero::timeToComplete << endl;

    // Hero a;
    
    // cout << a.timeToComplete << endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;




    // // static
    // Hero a;

    // // dynamic
    // Hero *b = new Hero();
    // delete b;




    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7] = "Parv";
    // hero1.setName(name);

    // hero1.print();


    // // use default copy constructor
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name = "Rohit";
    // hero1.print();
    // hero2.print();




    // Hero mahesh(70, 'C');
    // mahesh.print();
    
    // Hero R(mahesh);
    
    // R.print();




    // object created succesfully
    // Hero suresh(10);  // Added a default value for the health parameter in the constructor//+

    // cout << "Address of suresh " << &suresh << endl;
    // suresh.print();

    //dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();




    // static allocation
    // Hero a;
    // a.setHealth(70);
    // a.setLevel('B');

    // cout << "Level is " << a.level << endl;
    // cout << "Health is " << a.getHealth() << endl;

    // // dynamic allocation
    // Hero *b = new Hero;
    // b->setLevel('A');
    // b->setHealth(80);
    // cout << "Level is " << (*b).level << endl;
    // cout << "Health is " << (*b).getHealth() << endl;


    // cout << "Level is " << b->level << endl;
    // cout << "Health is " << b->getHealth() << endl;

    
    //creation of object
    // Hero ramesh;
    // cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

    // cout << "Ramesh Health is " << ramesh.getHealth() << endl;


    // ramesh.setHealth(70);
    // ramesh.level = 'A';


    // cout << "Health is: " << ramesh.getHealth() << endl;
    // cout << "Level is: " << ramesh.level << endl;

    


}