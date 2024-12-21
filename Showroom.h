#pragma once
#include "Vehicle.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//declare a class called Showroom with private members and public functions
class Showroom {
  private: 
    string name;
    vector<Vehicle> vehicles;
    unsigned int capacity;
    float finalCost;
  public:
    //paramterized constructor for Showroom class with name and capacity
    Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);
    //method to retrieve the list of vehicles in the showroom
    vector<Vehicle> GetVehicleList(); 
    //add vehicle to the showroom
    void AddVehicle(Vehicle v);
    //display inventory of the showroom
    void ShowInventory(); 
    //used to solve and obtain the final cost of the inventory
    float GetInventoryValue();
    //declare number of vehicles publicily
    unsigned int numberOfVehicles;
};
