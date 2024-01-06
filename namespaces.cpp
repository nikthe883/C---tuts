#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    
    // Namespace - solution for preventing name conflicts in large project. Everything needs to have its own name
    //using namespace fist - using the particular namespace 

    using namespace std; //better and safer
    using std::cout;
    using std::string;

    int x = 0;

    cout << x;
    cout << first::x;
    cout << second::x;

    return 0;
}