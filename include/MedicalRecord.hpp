#ifndef MEDICALRECORD_HPP
#define MEDICALRECORD_HPP

#include <string>

class MedicalRecord {
    std::string id;
    std::string patientId;
    std::string doctorId;
    std::string diagnosis;
    std::string treatment;
};

#endif 
