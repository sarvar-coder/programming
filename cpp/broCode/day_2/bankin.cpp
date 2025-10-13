#include <iostream> 

void showBalance(double balance);
double deposit(); 
double withdraw(double amount);

int main() { 
    double balance = 0; 
    int choice;

    std:: cout << "1. Show balance" << std:: endl; 
    std:: cout << "2. Deposit" << std:: endl;
    std:: cout << "3. Withdraw" << std:: endl;
    std:: cout << "0. Exit" << std:: endl;
    std:: cout << "Choose your choice";
    std::cin>>choice;

    switch (choice) {
    case 1 :
        std:: cout << balance << std:: endl;
        break;
        case 2: 
        balance += deposit(); 
        break;
        case 3: 
        std:: cout << "Enter how much do you want to take?" << std::endl;
        double amount; 
        std::cin >> amount;
        balance -= withdraw(amount); 
        break; 
    default:
        break;
    }

    std:: cout << "Thank you for banking with us." << std:: endl;


    return 0;
}

void showBalance(double balance) { 
    std:: cout << balance << std:: endl; 
}

double deposit() { 
    return 100.0;
}

double withdraw(double amount) { 
    return amount;
}
