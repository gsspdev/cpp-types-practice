//
//  main.cpp
//  cpp-types-practice
//
//  Created by gssp on 8/4/23.
//

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Student {
    private:
        string gender;
    
    public:
        string name;
        string major;
        double gpa;
    
        Student() {
            name = "unnamed";
            major = "unspecified";
            gpa = 0.0;
//            gender = "unspeified";
            
        }
       
        Student(string aName, string aGender, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
            setGender(aGender);
        }
        
        void setGender(string aGender) {
            gender = aGender;
        };
        
        bool hasHonors() {
            if (gpa >= 3.5){
                return true;
            } else {
                return false;
        }
    };
    
   
};



int main(int argc, const char * argv[]) {
    
    Student studentA("John", "Male", "Computer Science", 3.2);
    
    cout << studentA.name << endl;
//    cout << studentA.gender << endl;
    cout << studentA.major << endl;
    cout << studentA.gpa << endl;
    
    if (studentA.hasHonors()) {
        cout << "has honors" << endl;
    } else {
        cout << "doesn't have honors" << endl;
    };
    
    
    cout << studentA.hasHonors();
    
    studentA.setGender("female");

//    cout << studentAGender << endl;
    
    
    // insert code here...
//    Book book1;
//    book1.title = "Harry Potter";
//    book1.author = "J. K. Rowling";
//    book1.pages = 840;
//
//    Book book2;
//    book2.title = "LOTR";
//    book2.author = "JR Tolkien";
//    book2.pages = 725;
    
//    Book book1("Harry Potter", "JK Rowling", 820);
//    cout << book1.author << endl;
//    Book defaultBook;
//    cout << defaultBook.author << endl;
    

    
//
//    cout << book1.author;
//    cout << book2.title;
    
}
