#include <iostream>
using namespace std;

class Stove {
private:
    int temprature = 0;
    
public:
    
    int getTemprature() {
        return temprature;
    }
    
    void setTemprature(int temprature) {
        this-> temprature = temprature;
    }
    
    
};

int main() {
    Stove stove;
//    stove.temprature = 1000000000;
    cout << stove.getTemprature() << endl;
    stove.setTemprature(-90);
    cout << stove.getTemprature() << endl;
}

