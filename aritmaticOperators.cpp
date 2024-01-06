#include <iostream>

int main(){

int students = 20;

//addition
students += 2;
students++; // increment with one

//substraction
students -= 2;
students--;

//multiplication
students*= 2;

//division
students /= 2;

int remainders = students % 3;


std::cout << remainders;;

return 0;
}