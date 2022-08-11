#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Student {

    private:
        string firstName;
        string lastName;
        string university;
        string college;
        string major;
        int age;
    
    public:
        void setLastName(string lastName) { // set last name here...
            this->lastName = lastName;
        }
        string getLastName() { // get last name and return it...
            return lastName;
        }
        void setFirstName(string firstName) { // set first name here...
            this->firstName = firstName;
        }
        string getFistName() { // get first name and return it...
            return  firstName;
        }
        void setAge(int age) { // set age here...
            this->age = age;
        }
        int getAge() { // get age and return it ...
            return  age;
        }
        void setUniversity(string university) { // set university here...
            this->university = university;
        }
        string getUniversity() { // get university and return it...
            return university;
        }
        void setCollege(string college) { // set college here...
            this->college = college;
        }
        string getCollege() { // get college and return it...
            return college;
        }
        void setMajor(string major) { // set major here...
            this->major = major;
        }
        string getMajor() { // get major and return it...
            return major;
        }

// default constructor ...
    Student() {
        lastName = "Chendjou";
        firstName = "Herve";
        age = 30;
        university = "UIC";
        college = "College of Engineering";
        major = "CS-Software Engineering";
    }
};

int main() {
  

    Student student;
    cout << endl;
    // student.setFirstName("herve");
    // student.setLastName("Chendjou");
    // student.setAge(30);
    cout << "First name: " << student.getFistName() << endl;
    cout << "Last name: " << student.getLastName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "University: " << student.getUniversity() << endl;
    cout << "College: " << student.getCollege() << endl;
    cout << "Major: " << student.getMajor() << endl;
}