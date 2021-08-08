#include <iostream>
#include <string>
#include "Person.h"
#include "Doctor.h"
using namespace std;




int main(){
    // Section for the Base Person Class:
    // name , age
    Person African = Person("Cyprian Ekwensi", 60);
    African.introduction();
    African.setFeatures("Chinua Achebe", 26, 1.87, 82, "male", "Nigeria");
    African.introduction();
    African.getinfo();

    // String name, int age, double height, int weight, String gender, String
    // country
    Person European = Person("Jack Grealish", 30, 1.83, 79, "male", "England");
    European.getinfo();

    Person Asian("Uzumaki Himawari", 22, 1.58, 63, "female", "Japan");
    Asian.getinfo();

    Person SouthAmerican("Isabela Gomez", 19, 1.62, 70, "female", "Brazil");
    SouthAmerican.getinfo();

    Person NorthAmerican("Bruce Wayne", 39, 1.66, 80, "male", "America");
    NorthAmerican.getinfo();

    // Section For Doctor Class:
    // name, age, medicalField, employer, qualification, residency,
    // YearsOfExperience
    Doctor Surgeon =  Doctor("female", "Arabella Torres", 45, "Surgery", "Hospital", "M.D. and MCAT", "Yes", 15);
    Surgeon.getinfo();

    Doctor Cardiologist =  Doctor("male", "Dernis Boyle", 35, "Cardiology", "Armed Services", "M.D., MCAT and D.O.", "Yes", 12);
    Cardiologist.getinfo();

    Doctor Dentist =  Doctor("male", "Sterling Archer", 30, "Orthodontics", "Private Practice","DAT, DDS and DMD", "No", 7);
    Dentist.getinfo();

    Doctor Podiatrist =  Doctor("female", "Nalini Vishwakumar", 29, "Dermatology", "Community Health Clinic", "MCAT, GRE and DPM", "Yes", 9);
    Podiatrist.getinfo();

    Doctor Pharmacist =  Doctor("female", "Rainbow Johnson", 36, "Psychopharmacotherapy", "Pharmaceutical company", "PCAT and Pharm.D.", "No", 11);
    Pharmacist.getinfo();
    

    return 0;
}