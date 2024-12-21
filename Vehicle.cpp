#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std; 

//default constructor that initializes Vehicle object with default values for the class
Vehicle::Vehicle() {
  make = "COP3503";
  model = "Rust Bucket";
  year = 1900;
  price = 0;
  mileage = 0;
}
//parameterized constructor with assigned values
Vehicle::Vehicle(string make, string model, int year, float price, int mileage) {
  this->make = make;
  this->model = model;
  this->year = year;
  this->price = price;
  this->mileage = mileage;
}
//displays the Vehicle's information in details
void Vehicle::Display() const {
  cout << year << " " << make << " " << model << " $" << price << " " << mileage << endl;
}

//returns a string containing the converted int of the vehicle's year, make, and model
string Vehicle::GetYearMakeModel() { //convert int to string of the year with to_string method: https://cplusplus.com/forum/beginner/259451/
  string s = to_string(year) + " " + make + " " + model;
  return s;
}

//returns the price of the vehicle
float Vehicle::GetPrice() const {
  return price;
}