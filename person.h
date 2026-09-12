#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string> // Added missing header for std::string

// design header file..

class Person
{
public:
    // Constructor declaration
    Person(const std::string &names_param, int age_param);

    // Const member function to print info
    void print_info() const
    {
        std::cout << "Name : " << full_name << " , Age : " << age << std::endl;
    }

    void get_age() const
    {
        std::cout << "Age : " << age << std::endl;
    }
    void get_name() const
    {
        std::cout << "Name : " << full_name << std::endl;
    }

private:
    std::string full_name;
    int age;

public:
    // Static variable declaration (tracks total instances created)
    static int person_count;
};

#endif // PERSON_H
