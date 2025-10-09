//
//  main.cpp
//  HelloWorld
//
//  Created by Sarvar Boltaboyev on 08/10/25.
//

#include <iostream>
using namespace std;
void Log(const char* message);
int multiply(int a, int b);
//int binarySearch(vector<)
//
int main() {
    float annualSalary;
    cout << "Enter your annual salary";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    float tenYears = annualSalary * 10;
    cout << "You earn " << tenYears << " dollars in 10 years" << endl;
    
//     data types
    int integer = 1232434;
    char character = 'a';
    bool isRich = false;
    float height = 180.9;
    string sth = "eiu";
    
}
