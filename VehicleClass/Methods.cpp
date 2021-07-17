#include <iostream>
#include <string>
#include "Header.h"


void Vehicle::setProps(string c, string t, string y, string p){
    Color = c;
    Type = t;
    Year = y;
    Price = p;
}
void Vehicle::arrival(string h,string s, string q){
Hp = h;
Speed = s;
Torque = q;

cout << "\nThis is the " << Name << " " << Model << " and it is a beast of a car with at least " << h << " and a topspeed of " << s << " it also has a torque of " << q << endl;
}


void Vehicle::getSpecs(){
cout << "\nThis is the " << Name << " " << Model << " And the specs of this vehicle are\nName :-> " << Name << "\nModel :-> " << Model << "\nColor :-> " << Color << "\nType :-> " << Type << "\nYear :-> " << Year << "\nHorsePower :-> " << Hp << "\nSpeed :-> " << Speed << "\nTorque :-> " << Torque << "\nPrice :-> " << Price << "\n";
}    

void Vehicle::getprice(){
cout << "\nThe price of this car is :-> " << Price << "\n";
} 


void Vehicle::getColorOptions(){
cout << "\nThe " << Name << " " << Model << " is a beautiful car that comes in " << Color << " by default, but you can also get it in Aquagreen, Charcoal, Pink and any other color of your choosing\n";
}


void Vehicle::getModelYear(){
cout << "\nThe " << Name << " " << Model << "" << Name << " " << Model << " is an extremely sought after " << Type << " vehicle that was made in the year " << Year << "\n";
}