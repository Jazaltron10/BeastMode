#include <iostream>
#include <string>
#include <vector>
#include<iomanip>
#include "Person.h"
#include "Doctor.h" 
#include "SoftwareEngineer.h" 
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
    

                // Section for the SoftwareEngineer Class
                // string gender, string name, int age, string specialization, string role,
                // string company, string salary, string level
                SoftwareEngineer WebDeveloper =  SoftwareEngineer("female", "Maya Kricko", 27, "Web DevelopMent","Front-End Engineer", "Google", "$658,962", "L7", 10);
                // WebDeveloper.getinfo();
                // WebDeveloper.Value();

                
                SoftwareEngineer MobileDeveloper = SoftwareEngineer();
                MobileDeveloper.setFeatures("male", "Cristiano Ronaldo", 32, "Apple IOS", "Mobile Developer", "Apple", "$258,962", "ICT 3", 5);
                // MobileDeveloper.Bio();
                // MobileDeveloper.getinfo();
                // MobileDeveloper.Value();
                // Person MobileDeveloper = SoftwareEngineer();
                // ((SoftwareEngineer) MobileDeveloper).setFeatures("male", "Cristiano Ronaldo", 32, "Apple IOS", "Mobile Developer", "Apple", "$258,962", "ICT 3", 5);
                // ((SoftwareEngineer) MobileDeveloper).Bio();
                // ((SoftwareEngineer) MobileDeveloper).getinfo();
                // ((SoftwareEngineer) MobileDeveloper).Value();*/
                SoftwareEngineer CloudEngineer =  SoftwareEngineer("male", "Mike Ross", 45, "Azure Cloud","Cloud Architect", "Microsoft", "$872,650", "Partner", 15);
                // CloudEngineer.getinfo();

                SoftwareEngineer TestingEngineer =  SoftwareEngineer("female", "Jasmine Neutron", 37, "Software Testing","QA Engineer", "Facebook", "$396,802", "E5", 7);
                // TestingEngineer.getinfo();

                SoftwareEngineer AutomationEngineer =  SoftwareEngineer("male", "Jake Sully", 29, "AWS Cloud","DevOps Engineer", "Netflix", "$506,788", "Senior Software Engineer", 10);
                // AutomationEngineer.getinfo();
                // AutomationEngineer.testingsuper();
                
                // Using A vector to Manipulate all created Objects
                vector<SoftwareEngineer> SWE = vector<SoftwareEngineer>();
                SWE.push_back(WebDeveloper);
                SWE.push_back(MobileDeveloper);
                SWE.push_back(CloudEngineer);
                SWE.push_back(TestingEngineer);
                SWE.push_back(AutomationEngineer);
                int count = 0;
                string tab = "\t";
                for(SoftwareEngineer item : SWE) {
                    count++;
                    cout << "\n" << setw(10) << " Engineer " << count;
                    item.Bio();
                    item.getinfo();
                    if(count == 1 || count == 2) {
                        item.Value();
                    }
                    if(count == 5){
                        item.testingsuper();
                    }
                }

    return 0;
}