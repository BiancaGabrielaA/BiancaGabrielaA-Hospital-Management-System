#include "Person.hpp"
#include "Appointment.hpp"
#include <vector>

class Doctor : public Person {
    std::string specialization;
    std::vector<Appointment> appointments;
};

