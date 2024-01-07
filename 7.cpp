#include <iostream>
#include <string>

using namespace std;
class String {
private:
    string str;

public:
    
    String(const string& s) : str(s) {}

    
    void display() const {
        cout << "String: " << str << endl;
    }

    
    String join(const String& other){
        return String(str + other.str);
    }
};

int main() {
   
    String string1("Hello");
    String string2(" World!");

    
    string1.display();
    string2.display();

  
    String joinedString = string1.join(string2);

    
    cout << "Joined String: ";
    joinedString.display();

    return 0;
}
