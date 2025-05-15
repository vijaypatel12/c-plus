#include <iostream>
using namespace std;

// Class Definition
class Addition {
private:
    int a, b;  // Data members

public:
    // Function to input numbers
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    // Function to perform addition
    void add() {
        int sum = a + b;
        cout << "Sum = " << sum << endl;
    }
};

// Main Function
int main() {
    Addition obj;     // Creating object of class
    obj.getData();    // Taking input using object
    obj.add();        // Performing addition using object
    return 0;
}
