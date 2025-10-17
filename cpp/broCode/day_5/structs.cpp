#include <iostream>
using namespace std;
struct student {
    std::string name;
    double gpa;
    bool enrolled;
};

struct Car {
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);


int main() {
    student sarvar;
    sarvar.name = "Sarvar";
    sarvar.gpa = 4.0;
    sarvar.enrolled = true;

    std::cout << sarvar.name << std::endl;
    std::cout << sarvar.gpa << std::endl;
    std::cout << sarvar.enrolled << std::endl;
    cout<<'\n';
    Car car1;
    Car car2;
    
    car1.model = "Spark";
    car1.year = 2015;
    car1.color = "Gang";
    
    car2.model = "Toyota Higlander";
    car2.year = 2026;
    car2.color = "White";
    
    printCar(car1);
    cout<<'\n';
    printCar(car2);
    
}

void printCar(Car &car) {
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;
}

