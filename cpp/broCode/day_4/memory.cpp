#include <iostream> 
using namespace std; 

int main() { 

    int *pNum = NULL; 
    cout << pNum << endl;  // address of initial null pNum
    // cout << *pNum << endl; // value of null pNum at address (*) is used look value at this address.
    pNum = new int;   // allocate new memory for pNum size of integer which is 4 bytes; 
    cout << pNum << endl; 
    cout << *pNum << endl; 

    *pNum = 21; 
    cout << *pNum << " is located at this " << pNum << " address in computer memory." << endl;
    delete pNum;

    
}