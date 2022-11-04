#include <iostream>
using namespace std;

/***********************************************************************************************
 Here I am demonstrating a very basic approach to OOP
 
 In this program, I have created a class(Student) with some data members(Name, cls, academics)
 and member functions{print_student_info(), update_info()}
 and initialized an object(student) using a constructor.
 ***********************************************************************************************/

class Student
{
    
public:
    //Data members
    string Name; int cls; string academics;
    
    //Defining and declaring a constructor
    Student(string N, int c,string aca)
    {
        Name = N;
        cls = c;
        academics = aca;
    }
    
    //Member functions
    void print_student_info()   //Member function 1
    {
        cout << "Student's name: " << Name << endl;
        cout << Name << " is studying in class: " << cls << endl;
        cout << Name << "'s academic record: " << academics << endl;
    }

    void update_info(int clas, string acad)    //Member function 2
    {
        cls = clas;
        academics = acad;
    } 
};

int main()
{
    //instanstiating an object(student) of class(Student) using a constructor
    Student student = Student("Rohit", 10, "Good"); 
    
    //Printing student's information using a function from class Student
    cout << "Values of Student1 before modification\n\n";
    student.print_student_info(); cout << "\n\n";
    
    //Modifying student's information using a function from class Student
    student.update_info(12, "Average");
    cout << "Values of Student1 after modification\n\n";
    student.print_student_info();
    
    return 0;
}
