#include <iostream>

int main(){

    int x; // declaration
    x = 10; // assignment
    int y = 6;

    std:: cout << x << "\n";
    std:: cout << y << "\n";
    std:: cout << x + y << "\n";

    // integers
    int age = 29;

    // doubles with decimap point up to 15 digits
    double price = 5.60666666666666;

    // float up to 7 digits
    float test = 1.12345678;
    std:: cout << test << "\n";


    // single character
    char grade = 'A';
    std:: cout << grade << "\n";

    //boolean (true, false)
    bool student = true;
    bool forSale = false;
    std:: cout << student << "\n";

    // string 
    std::string name = "Peter";
    std:: cout << name << "\n";
    std:: string food = "Banana";

    std:: cout << "Hello " << name << " Do you like " << food << "\n"; 


    return 0;
}