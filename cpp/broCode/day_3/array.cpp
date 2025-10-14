#include <iostream> 
using namespace std; 
int main() { 

    int size;
    cout << "How many friedns do you have? Enter: "; 
    cin >> size;
    string names[size];
    int index = 0;
     
    while (index < size)
    {
        cout<< "Enter you friend's name: ";
        cin>>names[index];

        index++;
    }

    for(int i = 0; i < size; i++) { 
        cout << i + 1 << ". " << names[i] << endl; 
    }
    cout << "Great. it turns out you are friendly!";
    
    
}