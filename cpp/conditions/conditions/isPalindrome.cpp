//
//  isPalindrome.cpp
//  conditions
//
//  Created by Sarvar Boltaboyev on 09/10/25.
//

#include <iostream>
#include <stdio.h>
using namespace std;
string convert(string s);
bool isPalindrome(string s) {
    long int n = s.size();
    if (n == 1) { return  true;}
    string converted = convert(s);
    
    int left = 0;
    long int right = converted.size() - 1;
    
    while (left <= right) {
        char ch1 = converted[left];
        char ch2 = converted[right];
        
        if (!isalnum(ch1) || isspace(ch1)) {
            left++;
        }
        
        if (!isalnum(ch2) || isspace(ch2)) {
            right--;
        }
        
        if (ch1 != ch2) {
            return  false;
        }
    }
    
    return true;
}

string convert(string s) {
    string temp;
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (isalnum(s[i])) {
            ch = tolower(ch);
            temp += ch;
        }
    }
    
    return  temp;
}
