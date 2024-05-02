#include <iostream>
#include <vector>
#include <stdexcept>

template<typename T>
class MyVector {
private:
    T* elements;
    size_t capacity;
    size_t size;

public:
    // Constructor
    MyVector() : capacity(10), size(0) {
        elements = new T[capacity];
    }

    // Destructor
    ~MyVector() {
        delete[] elements;
    }

    // Method to add elements to the vector
    void push_back(const T& element) {
        if (size == capacity) {
            // Double the capacity if the vector is full
            capacity *= 2;
            T* newElements = new T[capacity];
            for (size_t i = 0; i < size; ++i) {
                newElements[i] = elements[i];
            }
            delete[] elements;
            elements = newElements;
        }
        elements[size++] = element;
    }

    // Method to get the size of the vector
    size_t getSize() const {
        return size;
    }

    // Method to access elements of the vector by index
    T& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return elements[index];
    }
};

int main() {
    // Creating a MyVector of integers
    MyVector<int> intVector;

    // Adding elements to the vector
    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);

    // Printing the size of the vector
    std::cout << "Size of intVector: " << intVector.getSize() << std::endl;

    // Accessing and modifying elements of the vector
    intVector[1] = 10;

    // Printing all elements of the vector
    std::cout << "Elements of intVector: ";
    for (size_t i = 0; i < intVector.getSize(); ++i) {
        std::cout << intVector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
