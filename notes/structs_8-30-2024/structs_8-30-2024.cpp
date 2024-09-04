#include <iostream>
using namespace std;

// background
// UC Student, creating structs to storing students information

// int main(){
//     std::string stu_name = "Lanny";
//     std::string major = "CS";
//     float gpa = 4.0;
// }

// Then this would continue per each student, but not efficient for endless amounts of students

// Abstraction - general models of something. Includes only general characteristics of an object

// primitive types....
// int,
// float,
// char,
// double,
// long

// Creating struct for studen

struct address {
    string addressline1;
    string addressline2;
    string city;
    string state;
    int zip;
};

struct student{
    std::string stu_name;
    std::string major;
    float gpa;
    address home_address;
};

int main(){
    student m123 = {
        "Lanny",
        "CS",
        4.0,
        // not real address
        {
            "619 E 4th St",
            "",
            "Spencerville",
            "Ohio",
            45887
        }
    };

    student m456 ={
        "Lanny",
        "CS",
        4.0
    };

    // Example used to check if structs are equal?? probably a better way to iterate through struct
    if (m123.stu_name == m456.stu_name && m123.major == m456.major && m123.gpa == m456.gpa){
        std::cout << "True" << std::endl;
    }

    student student_array[2] = {
        m123,
        m456
    };

    cout << student_array[0].home_address.addressline1;

    student m123 = {
        "Lanny",
        "CS",
        4.0
    };

    student *m456 = nullptr;
    
    // m456 = &m123;

    // using arrow operator to access a pointer's host structure's data rather than a dot operator. (-> vs .)
    // std::cout << m456->stu_name << std::endl;

    student m789;
    std::string name = "Oakman";
}