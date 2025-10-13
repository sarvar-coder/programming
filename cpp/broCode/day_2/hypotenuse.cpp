#include <iostream>
#include <cmath>
using namespace std; 

int main() { 

    // hypotenuse 
    double a; 
    double b; 
    cout << "Enter number for a: " ;
    cin >> a;
    cout << "Enter number for b: " ;
    cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2)); 

    cout << "C equals to " << c << endl;



}