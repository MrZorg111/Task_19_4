#include <iostream>
#include <fstream>
#include <string>


int main() {
    std::ifstream reader;
    std::string address;
    std::string index(4,0);
    std::cout << "Enter the path to the file using a double backslash: ";
    std::cin >> address;
    reader.open(address, std::ios::binary);
    if(!reader.eof()) {
        reader >> index;
    }
    if (index[0] == -119 && index.substr(1, 3) == "PNG") {
        std::cout << "This is file PNG.";
    }
    else {
        std::cout << "This is file not PNG.";
    }
}
