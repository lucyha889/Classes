#pragma once
#include <vector>
#include <string>
using namespace std;

//Declare a class called Vehicle with private members and public functions
class Vehicle {
  private: 
    string make;
    string model;
    unsigned int year;
    float price;
    unsigned int mileage;
  public:
    Vehicle(); //default constructor which initializes Vehicle object with default values
    Vehicle(string make, string model, int year, float price, int mileage); //paramterized constructor which initializes Vehicle object with provided values in private member
    void Display() const; //display results of the Vehicle with const so it doesn't modify the object 
    string GetYearMakeModel(); //return a string to make Year Make Model statement
    float GetPrice() const; //return price of the vehicle
};