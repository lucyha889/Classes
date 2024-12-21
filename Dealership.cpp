#include "Dealership.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//parameterized constructor defined that initializes the name and capacity of dealership
Dealership::Dealership(string name, unsigned int capacity) {
  this->name = name;
  this->capacity = capacity;
}

//add a showroom to the dealership
void Dealership::AddShowroom(Showroom s) {
  //check whether number of showroos is greater than the capacity
  if (showrooms.size() >= capacity) {
    cout << "Dealership is full, can't add another showroom!" << endl;
  }
  else {
    showrooms.push_back(s); //add showrooms to the list
  }
}

//solve for average of all prices of vehicles in dealership
float Dealership::GetAveragePrice() {
  if (showrooms.empty()) { //check to see if no showroom exists
    return 0;
  }
  else { 
    //initialize total price and number of valid prices so it won't retrieve incorrect results from previous function calls
    float finalCost = 0.0;
    unsigned int numValues = 0;
    for (Showroom& s : showrooms) { //iterate through each Showroom object in showrooms vector for the dealership
      for (Vehicle& v : s.GetVehicleList()) { //iterate through each vehicle object by the GetVehicleList() function that retrieves the list of vehicles in showroom
        finalCost += v.GetPrice(); //add vehice price to final cost
        numValues++; //increment valid prices in dealership
      }
    }
    averagePrice = finalCost / numValues; //find average price by dividing final cost by number of valid prices
    return averagePrice;
  }
}
//display inventory of all showrooms in dealership
void Dealership::ShowInventory() {
  if (showrooms.empty()) { //if no showroom, display the dealership empty with its name
    cout << name << " is empty!" << endl;
  }
  else {
    for (Showroom& s : showrooms) { //iterate through each showroom to display its inventory
      s.ShowInventory();
      cout << endl;
    }
  }
  //display average car price in dealership
  cout << "Average car price: $" << GetAveragePrice();
}