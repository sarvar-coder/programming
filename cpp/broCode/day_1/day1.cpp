#include <iostream> 
using namespace std;

namespace first{ 
    int x1 = 1;
}

namespace second{ 
    int x1 = 2;
}

int main() { 

    int x = 5; 
    std::cout << x << '\n';

    int y = 60; 
    std::cout << x * y << '\n'; 

    char character = 'A'; 
    std::cout << character << '\n';
    // string 
    std::string name = "Sarvar"; 
    std::string mom = "Nasiba";

    std::cout << name << " is son of " << mom << '\n';
    // const
    const std::string api_key = "kegier9834390[eiuvoi]"; 
    const double pi = 3.1456; 
    const int sin90 = 1; 

    // namspace 
    using namespace first;
    // using namespace second; 

    cout << x1 << '\n';

}