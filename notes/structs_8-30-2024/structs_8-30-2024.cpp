#include <iostream>

// background
// UC Student, creating structs to storing students information

int main_first_case(){
    std::string stu_name = "Lanny";
    std::string major = "CS";
    float gpa = 4.0;
}

// Then this would continue per each student, but not efficient for endless amounts of students

// Abstraction - general models of something. Includes only general characteristics of an object

// primitive types....
// int,
// float,
// char,
// double,
// long

// Creating struct for student
struct student{
    std::string stu_name;
    std::string major;
    float gpa;
};

int main(){

    student M123 = {
        "Lanny",
        "CS",
        4.0
    };

    std::cout << M123.stu_name << std::endl;
}