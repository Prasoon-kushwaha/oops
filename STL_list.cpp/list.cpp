#include <iostream>
#include <list>
#include <algorithm> // For std::sort
#include <cassert>   // For assert

using namespace std;

// Custom exception class for empty list
class EmptyListException : public exception {
    virtual const char* what() const throw() {
        return "List is empty.";
    }
};

// Linked list class using std::list
template<typename T>
class LinkedList {
private:
    list<T> data;

public:
    // Method to add an element at the end of the list
    void push_back(const T& value) {
        data.push_back(value);
    }

    // Method to reverse the order of elements in the list
    void reverse() {
        data.reverse();
    }

    // Method to sort the list elements
    void sort() {
        data.sort();
    }

    // Method to remove consecutive duplicate elements
    void unique() {
        data.unique();
    }

    // Method to check whether the list is empty
    bool empty() const {
        return data.empty();
    }

    // Method to get the number of elements in the list
    size_t size() const {
        return data.size();
    }

    // Method to clear all the values from the list
    void clear() {
        data.clear();
    }

    // Method to merge two sorted lists
    void merge(LinkedList& other) {
        data.merge(other.data);
    }

    // Method to display all elements of the list
    void display() const {
        if (empty()) {
            throw EmptyListException();
        }
        for (const auto& item : data) {
            cout << item << " ";
        }
        cout << endl;
    }
};

int main() {
    LinkedList<int> myList;

    // Test push_back
    myList.push_back(5);
    myList.push_back(2);
    myList.push_back(7);
    myList.push_back(5);

    // Test display
    cout << "Original list: ";
    myList.display();

    // Test reverse
    myList.reverse();
    cout << "Reversed list: ";
    myList.display();

    // Test sort
    myList.sort();
    cout << "Sorted list: ";
    myList.display();

    // Test unique
    myList.unique();
    cout << "List with consecutive duplicates removed: ";
    myList.display();

    // Test empty and size
    cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << endl;
    cout << "Size of the list: " << myList.size() << endl;

    // Test clear
    myList.clear();
    cout << "Cleared list: ";
    try {
        myList.display();
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }

    // Test merge
    LinkedList<int> otherList;
    otherList.push_back(3);
    otherList.push_back(9);
    otherList.push_back(1);
    otherList.sort();
    cout << "Other list: ";
    otherList.display();

    myList.merge(otherList);
    cout << "Merged list: ";
    myList.display();

    return 0;
}
