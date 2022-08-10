#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Student {

    private:
        string firstName;
        string lastName;
        int age;
    
    public:
        void setLatName(string lastName) {
            this->lastName = lastName;
        }
        string getLastName() {
            return lastName;
        }
        void setFirstName(string firstName) {
            this->firstName = firstName;
        }
        string getFistName() {
            return  firstName;
        }
};

int main() {
  cout << "Hello World!" << endl;
}