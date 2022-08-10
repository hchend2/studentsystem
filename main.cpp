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
        void setLastName(string lastName) {
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
        void setAge(int age) {
            this->age = age;
        }
        int getAge() {
            return  age;
        }
};

int main() {
  

    Student student;
    cout << endl;
    student.setFirstName("herve");
    student.setLastName("Chendjou");
    student.setAge(30);
    cout << "First name: " << student.getFistName() << endl;
    cout << "Last name: " << student.getLastName() << endl;
    cout << "Age: " << student.getAge() << endl;
}