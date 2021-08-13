#include <iostream>
#include <string>
#include "Person.h"
#define nline = "\n";


class SoftwareEngineer : public Person {
    //private variables that can only be accessed within this class
    private:
    string specialization;
    string role;
    string company;
    string salary;
    string level;
    
    public:
    // The 1st Constructor
    SoftwareEngineer(string Oname) : Person(Oname){
        
        cout<<"\nMy name is " << Oname << " and I am a SoftwareEngineer";
    }

    // The 2nd Constructor
    SoftwareEngineer(): SoftwareEngineer("female", "Janet Doe", 25, "Web", "Front-End Engineer", "IBM", "$100,000", "L5", 5) {
        // This constructor just calls the Third Constructor
        // All be it with default values for the object created.
        // Bio();
    }

    // The 3rd Constructor
    SoftwareEngineer(string Ogender, string Oname, int Oage, string Ospecialization, string Orole, string Ocompany,
            string Osalary, string Olevel, int OYearsOfExperience):Person(Oname, Oage){ 
        // calling the constructor of the superclass
        // protected variable from superclass being accessed from the superclass by subclass
        gender = Ogender;
        YearsOfExperience = OYearsOfExperience;
        // private variable in the subclass being accessed within subclass
        specialization = Ospecialization;
        role = Orole;
        company = Ocompany;
        salary = Osalary;
        level = Olevel;
        // calling a bio method for any object created with this constructor
        // Bio();
    }

    // The Bio Method
    void Bio() {
            // checking the gender of the objects before executing this method
            if (gender == "male") {
                cout<< "\n" << name <<" is a "<< role << " at " <<company<<", he has over " << YearsOfExperience << " years of experience buildin and maintaining applications for the " << specialization << " ecosystem \nIn all his years at "<< company << ", " << name <<  " has risen to the level of " << level << " within the company's ranks." << "\nHe is admired by his coworkers for his strong leadershi and technical skills, and because of how valuable he is to " << company << " his total yearly compensation is about "<< salary << "." << "\nFor the past " << (YearsOfExperience - 3) << " years he has been focused on contributing to open source projects an mentoring young developers";
            } else {
                cout<<"\n"<< name <<" is a "<< role << " at " <<company<<", she has over " << YearsOfExperience << " years of experience buildin and maintaining applications for the " << specialization << " ecosystem \nIn all her years at "<< company << ", " << name <<  " has risen to the level of " << level << " within the company's ranks.\nShe is admired by her coworkers for her strong leadershi and technical skills, and because of how valuable she is to " << company << " her total yearly compensation is about "<< salary << "." << "\nFor the past " << (YearsOfExperience - 3) << " years she has been focused on helping young female developer navigate the industry";
            }
        }

    void getinfo() {
        cout << "\n\nThis is " << company << "s Info For "<< name << "\nName:-> "  << name << "\nAge:-> " << age <<"\nGender:-> " << gender << "\nSpecialization:-> " << specialization << "\nRole:->  "<< role << "\nCompany:-> " << company << "\nSalary:-> " << salary << "\nLevel:-> " << level <<"\nYears Of Experience:-> " << YearsOfExperience << "\n";
    }

    void Value(){
        cout<<"\nIn the field of Software Engineering a software engineer that specializes in " << specialization << ", in the role of "<< role << " \nHas the ability to create and maintain incredibly complex software applications, and that's why companies like "<< company << " value people like " << name << "\n";
    }
    // A Setter method used to set the state of a newly created object
    void setFeatures(string newGender, string newName, int newAge, string newSpecialization, string newRole,
            string newCompany, string newSalary, string newLevel, int newYearsOfExperience) {
        // calling the setFeatures method of the superclass
        Person::setFeatures(newName, newAge);
        // changing the variables of the superclass with the super keyword
        gender = newGender;
        YearsOfExperience = newYearsOfExperience;
        // changing the properties of the subclass with the this keyword
        specialization = newSpecialization;
        role = newRole;
        company = newCompany;
        salary = newSalary;
        level = newLevel;
    }

    void testingsuper() {
        // only possible because base class variables are protected and not private
        // This is how we replicate the super keyword in C++
        Person::name = "James Cameron";
        Person::height = 1.82;
        Person::weight = 81;
        Person::country = "Canada";
        Person::getinfo();
        name = "Kylian Romario";
        getinfo();
        // this throws an error because the variable company does not exist in the superclass
        // Person::company = "jaha";
    }
};
