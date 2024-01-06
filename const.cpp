#include <iostream>

int main(){
    // adds data security 
    // you can not change const vars.

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    
    std::cout << circumference << " cm";

    return 0;
}