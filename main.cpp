#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream reader;
    std::string address;
    std::string index, p, n, g;
    std::cout << "Enter the path to the file using a double backslash: ";
    std::cin >> address;
    reader.open(address, std::ios::binary);
    while (!reader.eof()) {
        reader >> index /*>> p >> n >> g;*/;
        std::cout << index.substr(0)/* << " " << p << " " << n << " " << g << " "*/;
    }

}
