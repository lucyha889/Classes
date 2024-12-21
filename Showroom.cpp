#include "Showroom.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//parameterized constructor for Showroom class with name and capacity
Showroom::Showroom(string name, unsigned int capacity) {
  this->name = name;
  this->capacity = capacity;
}
//method to retrieve the list of vehicles in showroom
vector<Vehicle> Showroom::GetVehicleList() {
  return vehicles;
}
//method to add vehicles to the showroom
void Showroom::AddVehicle(Vehicle v) {
  if (numberOfVehicles == capacity) { //used to check whether or not the showroom is full
    cout << "Showroom is full! Cannot Add " << v.GetYearMakeModel() << endl;
  }
  else {
    vehicles.push_back(v); //adds a new vehicle and increments the number
    numberOfVehicles++;
  }
}
//display inventory of vehicles
void Showroom::ShowInventory() {
  if (vehicles.empty()) {//check whether or not the showroom is empty of vehicles. Reference for .empty() function: https://cplusplus.com/reference/vector/vector/empty/
    cout << name << " is empty!" << endl;
  }
  else {
    cout << "Vehicles in " << name << endl;
    for (const auto& vehicle : vehicles) { //iterate and display vehicle info
      vehicle.Display();
    }
  }
}
//used to solve for overall price of the inventory
float Showroom::GetInventoryValue() {
  for (const auto& vehicle : vehicles) {
    finalCost += vehicle.GetPrice(); //adds price of current vehicle to final cost of the inventory
  }
  return finalCost;
}