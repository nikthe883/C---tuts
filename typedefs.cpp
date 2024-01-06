#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;

//typedef std::string text_t;
using  text_t = std::string;

int main(){
    // typedef - reserved keyword used to create an additional name for another data type. Helps with readability
    // replaced with using keyword works better with templates

   text_t name = "Peter";

   std::cout << name;

    return 0;
}