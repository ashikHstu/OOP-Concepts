/*
A constructor is a special member function of a class that is automatically called when an object is created.

Its main job: initialize the object

🔹 Key Properties
Same name as the class
No return type (not even void)
Automatically called
Can be overloaded

What is a Destructor?

A destructor is a special member function that is automatically called when an object is destroyed.

Its main job: clean up resources (memory, files, etc.)

🔹 Key Properties
Same name as class but with ~ (tilde)
No return type
No parameters
Only one destructor per class (no overloading)
Called automatically when object goes out of scope

*/
#include <iostream>
using namespace std;
// With constructor Overloading
class Student
{
    public:
    string name;
    int age;

    Student() // Default constructor
    {
      cout<<"Default constructor called."<<endl;
      name = "Unknown";
      age = 0;
    }
    Student(string name,int age) // Parametarized constructor
    {
        cout<<"Parametarized Constructor"<<endl;
        this->name = name;
        this->age =  age;
    }

    Student(Student &s) // Copy Constructor
    {
        cout<<"Copy constructor called."<<endl;
        name = s.name;
        age = s.age;
    }
    ~Student()
    {
        cout<<"Destructor called for student: "<<name<<", age: "<<age<<endl;
    }
};

int main()
{
    Student s1;
    Student s2("Ashik",22);
    Student s3=s2;
    s3.age=33;
    cout<<s3.name<<": "<<s3.age<<endl;
}

/*
Output: 
Default constructor called.
Parametarized Constructor
Copy constructor called.
Ashik: 33
Destructor called for student: Ashik, age: 33
Destructor called for student: Ashik, age: 22
Destructor called for student: Unknown, age: 0

*/

/*
Key Interview Points
Constructor initializes → Destructor cleans
Automatically called (no manual call needed)
Destructor follows LIFO order
Essential for resource management (RAII)
*/