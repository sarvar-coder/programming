#include <iostream>
using namespace std;
class Human {
public:
    string name;
    string occupation;
    int age;
    
    Human(string name, string occupation, int age) {
        this-> name = name;
        this-> occupation = occupation;
        this-> age = age;
    }
    
    
    void eat() {
        cout << name << " is eating!" << endl;
    }
    
    void walk() {
        cout << name << " is walking!" << endl;
    }
    
    void drink() {
        cout << name << " is drinking!" << endl;
    }
    
    void sleep() {
        cout << name << " is sleeping" << endl;
    }
    
};

int main() {
    
//    Human sarvar{};
//    sarvar.name = "Sarvar";
//    sarvar.occupation = "not occupied";
//    sarvar.age = 18;
    
    Human mom("Nasiba", "Business-Lady", 41);
    
    
    mom.walk();
    mom.eat();
    mom.drink();
    mom.sleep();
}
