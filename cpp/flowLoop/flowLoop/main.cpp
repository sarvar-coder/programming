//
//  main.cpp
//  flowLoop
//
//  Created by Sarvar Boltaboyev on 10/10/25.
//

#include <iostream>

void Log(const char*  message) {
    std:: cout << message << std::endl;
}

int main(int argc, const char * argv[]) {
    
    for (int i = 0, n = 5; i < n; i++) {
        Log("Hello world");
    }
    
    return 0;
}
