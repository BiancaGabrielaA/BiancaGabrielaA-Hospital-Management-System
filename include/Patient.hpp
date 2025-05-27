#include <cstddef>
#include <string>
#include <vector>
#include "Person.hpp"
#include "MedicalRecord.hpp"
#include "Appointment.hpp"

class Patient : public Person {
    std::string insuranceNumber;
    std::vector<MedicalRecord> medicalhistory;
    std::vector<Appointment> appointments;
    std::vector<std::string> allergies;
};