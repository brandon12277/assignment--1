#include <iostream>
#include <string>

using namespace std;


class Base {
public:
   
    Base(const string& message) : message(message) {
        cout << "Base Parameterized Constructor called with message: " << message << endl;
    }

   
    Base(const Base& other) {
        message = other.message;
        cout << "Base Copy Constructor called with message: " << message << endl;
    }
    virtual ~Base() {
        cout << "Base Virtual Destructor called for message: " << message << endl;
    }

protected:
    string message;
};


int main() {
    cout << "Creating Base object d1:" << endl;
    Base d1("Hello, from Base!");

    cout << "\nCreating another Base object d2 and copying d1 into it:" << endl;
    Base d2 = d1;

    cout << "\nExiting the program, causing destructors to be called." << endl;

    return 0;
}
