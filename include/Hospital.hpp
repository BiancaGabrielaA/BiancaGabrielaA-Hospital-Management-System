///Singleton class for the hospital
#include "Patient.hpp"
#include "Doctor.hpp"
#include "Appointment.hpp"
#include <vector>

class Hospital {
private: 
    static Hospital* instance;
    std::vector<Patient> patients;
    std::vector<Doctor> doctors;

    Hospital() {};

public:
    static Hospital* getInstance();
    void addPatient(const Patient& patient);
    void addDoctor(const Doctor& doctor);
    void scheduleAppointment(const Appointment& appointment);

};