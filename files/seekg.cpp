#include <iostream>
#include <fstream>

int main() {
    std::ifstream inFile("example.txt");

    // Move the get pointer to the 6th byte position in the file
    inFile.seekg(5);

    // Read a character from the current position
    char ch;
    inFile >> ch;
    std::cout << "Character at position 5: " << ch << std::endl;

    // Get the current position of the get pointer
    std::streampos position = inFile.tellg();
    std::cout << "Current position of get pointer: " << position << std::endl;

    // Close the file
    inFile.close();

    return 0;
}
