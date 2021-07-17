#include <iostream>
#include <string>
#include "Header.h"
#include "Methods.cpp"




int main(){
// This is an object being created from the Vehicle Class
Vehicle Volkswagen("Volkswagen", "Tiguan", "Blue", "SUV", "2021", "184 hp @ 4400 rpm", "114 mph", "221 lb-ft @1600 rpm", "$40,485");
// Calling the various instance methods for this object
    Volkswagen.getSpecs();
    Volkswagen.getColorOptions();


// This is an object being created from the Vehicle Class
Vehicle Bugatti("Bugatti", "Chiron", "1479 hp @ 6700 rpm", "261 mph", "1180 lb-ft @ 2000rpm");
// Calling the various instance methods for this object
    Bugatti.setProps("Dark Blue", "Super Sports","2021", "$3,710,850");
    Bugatti.getSpecs();
    Bugatti.getprice();


// This is an object being created from the Vehicle Class
Vehicle Lamborghini("Lamborghini", "Aventador SVJ roadster", "Blue", "Super Sports", "2020","759 hp @ 8500 rpm", "217 mph", 
"531 lb-ft @ 6750 rpm", "$584,061");
// Calling the various instance methods for this object
    Lamborghini.getSpecs();
    Lamborghini.getColorOptions();


// This is an object being created from the Vehicle Class
Vehicle Chevrolet("Chevrolet", "Corvette Stingray Z51", "495 hp @ 6450 rpm", "184 mph", "470 lb-ft @ 5150 rpm");
// Calling the various instance methods for this object
    Chevrolet.setProps("Yellow","Sports","2020","$88,310");
    Chevrolet.getSpecs();
    Chevrolet.getModelYear();


// This is an object being created from the Vehicle Class
Vehicle RollsRoyce("Rolls-Royce", "Cullinan", "Black", "High-End Luxury SUV", "2019", "563 hp @ 5000 rpm",
"151 mph", "627 lb-ft @ 1600rpm", "$410,575");
// Calling the various instance methods for this object
    RollsRoyce.getSpecs();
    RollsRoyce.getprice();
    RollsRoyce.getColorOptions();
    RollsRoyce.getModelYear();


return 0;
}