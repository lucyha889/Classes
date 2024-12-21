#pragma once
#include "Showroom.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//declare a class called Dealership with private members and public functions
class Dealership {
private:
  string name;
  vector<Showroom> showrooms;
  unsigned int capacity;
  float averagePrice;
  unsigned int numValues;
  float finalCost;
public:
  //paramterized constructor for Dealership class with assigned name and capacity number
  Dealership(string name = "Generic Dealership", unsigned int capacity = 0);
  //add a showroom to the dealership
  void AddShowroom(Showroom s);
  //obtain average price of all vehicles in the dealership
  float GetAveragePrice();
  //display inventory of vehicles in showroom like how it was done in Showroom.h
  void ShowInventory();
};