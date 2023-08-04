//
//  main.cpp
//  cpp-types-practice
//
//  Created by gssp on 8/4/23.
//

#include <iostream>
//#include <libstdc++>

//class Book {
//    public:
//        std::string title;
//        std::string author;
//        int pages;
//
//    Book() {
//        title = "default";
//        author = "default";
//        pages = 0;
//    }
//
//    Book(std::string aTitle, std::string aAuthor, int aPages) {
//        title = aTitle;
//        author = aAuthor;
//        pages = aPages;
//
//    };
//};

class Student {
    private:
        std::string gender;
    
    public:
        std::string name;
        std::string major;
        double gpa;
    
        Student() {
            name = "unnamed";
            major = "unspecified";
            gpa = 0.0;
//            gender = "unspeified";
            
        }
       
        Student(std::string aName, std::string aGender, std::string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
            setGender(aGender);
        }
        
        void setGender(std::string aGender) {
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
    
    std::cout << studentA.name << std::endl;
//    std::cout << studentA.gender << std::endl;
    std::cout << studentA.major << std::endl;
    std::cout << studentA.gpa << std::endl;
    
    if (studentA.hasHonors()) {
        std::cout << "has honors" << std::endl;
    } else {
        std::cout << "doesn't have honors" << std::endl;
    };
    
    
    std::cout << studentA.hasHonors();
    
    studentA.setGender("female");

//    std::cout << studentAGender << std::endl;
    
    
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
//    std::cout << book1.author << std::endl;
//    Book defaultBook;
//    std::cout << defaultBook.author << std::endl;
    

    
//
//    std::cout << book1.author;
//    std::cout << book2.title;
    
}
