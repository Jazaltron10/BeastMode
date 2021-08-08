#include <iostream>
#include <string>
#include <cctype>
#include "Person.h"
#define nline = "\n";
class Doctor: public Person{
    private:
    string medicalField;
    string employer;
    string qualification;
    string residency;
    int YearsOfExperience;

    public:
    // The 1st Constructor
    Doctor(string name) :Person(name){
        cout << "\nMy name is "<< name <<" and I am a Medical Doctor";
    }

    // The 2nd Constructor
    Doctor(string Ogender, string Oname, int Oage, string DmedicalField, string Demployer, string Dqualification,
            string Dresidency, int DYearsOfExperience):Person(Oname, Oage){
        
        gender = Ogender;// protected variable from superclass
        YearsOfExperience = DYearsOfExperience;
        medicalField = DmedicalField;
        employer = Demployer;
        qualification = Dqualification;
        residency = Dresidency;
        // calling a method that prints out a brief bio for any doctor object created
        // with this constructor
        Bio();
    }
    // The Bio Method
    void Bio() {
        if (gender.compare("female") == 0) {
            cout << "\nDr " << name << " is one of the top medical doctors in the country, specializing in the field of " << medicalField<< "\nDr " << name << " has over " << YearsOfExperience << " years of experience in this field and has won several awards as well as met and exceeded several qualifications including "<< qualification << "\nDr " << name << " is " << age << " years old with no plans on retiring anytime soon. The " << employer << " She works for are eager to extend Dr " << name << "'s contract for the for seeable future" << "\nShe has participated and contributed to a lot of groundbreaking research in the field of "
            << medicalField << "\nHer medical Journals have literally formed the foundation for a lot of amazing discoveries in the last "<< (YearsOfExperience - 3) << " years";
        } else {
            cout << "\nDr " << name << " is one of the top medical doctors in the country, specializing in the field of " << medicalField << 
            "\nDr " << name << " has over " << YearsOfExperience << " years of experience in this field and has won several awards as well as met and exceeded several qualifications including " << qualification << "\nDr " << name << " is " << age << " years old with no plans on retiring anytime soon. The " << employer << " he works for are eager to extend Dr " << name << "'s contract for the for seeable future" << 
            "\nHe has participated and contributed to a lot of groundbreaking research in the field of " << medicalField;
        }
    }
    //A getter method that displays the general infor of a Doctor 
    void getinfo() {
        cout << "\nThis is the Company Info For Doctor "<< name << "\nName:-> " << name << "\nAge:-> " << age<< "\nMedical Field:-> " << medicalField << "\nEmployer:-> " << employer << "\nQualification:->"<< qualification << "\nResidency :-> " << residency << "\nYears Of Experience:-> " << YearsOfExperience << "\n";
    }

    void giveDiagnosis() {
        cout << "\nBased on all the test carried out i am glad to tell you that you are 100% healed";
    }

    // This is a Setter Method for changing the variables of any of the objects since they are private
    void setFeatures(string newGender, string newname, int newage, string newmedicalField, string newemployer, string newqualification, string newresidency, int newYearsOfExperience) {
        Person::setFeatures(newname, newage);
        gender = newGender;
        YearsOfExperience = newYearsOfExperience;
        medicalField = newmedicalField;
        employer = newemployer;
        qualification = newqualification;
        residency = newresidency;
    }
    
};






