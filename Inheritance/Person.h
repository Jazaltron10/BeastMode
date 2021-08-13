#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>

using namespace std;

class Person {
    //Protecting the variables
    protected: 
    string name;
    double height;
    int weight;
    int age;
    string gender;
    string country;
    int YearsOfExperience;

    public:
    // This is the 1st constructor.
    Person(string name) {
        cout << "\nMy name is " << name << " and I am a human being\n";
    }

    // This is the 2nd constructor.
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // This is the 3rd constructor.
    Person(string n, int a, double h, int w, string g, string c) {
        name = n;
        age = a;
        height = h;
        weight = w;
        gender = g;
        country = c;
        introduction();
    }
    
    // A method to introduce the person
    void introduction() {
        cout << "\nHello there friends, my name is " << name << " I am " << age << " years old\n";
    }
    // A Method to change the name and age features of a person object
    void setFeatures(string newName, int newAge) {
        name = newName;
        age = newAge;
    }

    // A Method to change all the features of a person object
    void setFeatures(string newName, int newAge, double newHeight, int newWeight, string newGender, string newCountry) {
        name = newName;
        age = newAge;
        height = newHeight;
        weight = newWeight;
        gender = newGender;
        country = newCountry;
    }

    // a getter method that Displays all of the personal information of a person
    // object
    void getinfo() {
        cout << "\nBelow is the basic info for " << name << "\nName:-> " << name << "\nAge:-> " << age << " years old\nHeight:-> " << height << " m\nWeight:-> " << weight << " kg\nGender :-> " << gender << "\nCountry:-> " << country << "\n";
    }

};



#endif
