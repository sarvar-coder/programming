#include <iostream> 
using namespace std; 

int main () { 

    char op; 
    double number1;
    double number2;

    cout << "********** Calculator **********" << endl; 
    cout << "Which operation do you want? (+, -, *, /): "; 
    cin >> op;

    cout << "Great Enter yout first number: ";
    cin >> number1; 

    cout << "Enter your second number: "; 
    cin >> number2;

    double result; 

    switch (op) 
    {
    case '+':
        result = number1 + number2;
        break;
        case '-': 
        result = number1 - number2; 
        break;
        case '*':
        result = number1 * number2;
        break;
        case '/': 
        if (number2 == 0 || number1) {
             cout << "zero is neither can not be divided or divider." << endl;;
             break;
        }
        result = number1 / number2;
        break;
    default:
        break;
    }
    cout << "Your result is " << result << endl;
    

}
