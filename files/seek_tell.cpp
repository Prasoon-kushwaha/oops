#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("example.txt");

    // Writing some data to the file
    outFile << "Hello, World!";

    // Move the put pointer to the 6th byte position in the file
    outFile.seekp(5);

    // Write data starting from the 6th byte
    outFile << "ABC";

    // Close the file
    outFile.close();

std::ofstream outFile1("example1.txt");

    // Writing some data to the file
    outFile1 << "Hello, World!";

    // Get the current position of the put pointer
    std::streampos position = outFile1.tellp();

    // Output the current position
    std::cout << "Current position of put pointer: " << position << std::endl;

    // Close the file
    outFile1.close();



    return 0;
}
