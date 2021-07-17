#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>

using namespace std;

class Vehicle{
    private:
    string Name, Model, Color, Type, Year, Hp, Speed,Torque, Price;
    
    public:
        // First constructor Using some of the instance state and an instance method
    Vehicle(string n, string m, string h, string s, string q) {
        Name = n;
        Model = m;
        arrival(h, s, q);
    }
      // Second constructor Using the instance states
    Vehicle(string n, string m, string c, string t, string y, string h, string s, string q, string p) {
        Name = n;
        Model = m;
        Color = c;
        Type = t;
        Year = y;
        Hp = h;
        Speed = s;
        Torque = q;
        Price = p;
    }
    
    // Instance Methods
    // Setter Method
    void setProps(string c,string t, string y, string p);
    void arrival(string h,string s, string q);
    // Getter Method
    void getSpecs();
    void getprice(); 
    void getColorOptions();
    void getModelYear(); 
};










#endif
