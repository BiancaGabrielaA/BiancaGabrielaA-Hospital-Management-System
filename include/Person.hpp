#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {

    std::string id;
    std::string name;
    std::string address;
    std::string phone;
    std::string email;
    std::string gender;
    std::string dateOfBirth;

    Person(std::string id, std::string name, std::string address, std::string phone, std::string email, std::string gender, std::string dateOfBirth);
    ~Person();
};

#endif