#include <iostream>
#include <iomanip>
#include <limits>
#include <math.h>

using namespace std;

int main() {
  // Read three lines of input
  double mealCost;
  int tipPercent;
  int taxPercent;

  // read in meal cost
  string l1;
  getline(cin, l1);
  mealCost = stod(l1);

  // read in tip percent
  string l2;
  getline(cin, l2);
  tipPercent = stoi(l2);

  // read in tax percent
  string l3;
  getline(cin, l3);
  taxPercent = stoi(l3);

  // calculate tip
  double tipAmount = mealCost * tipPercent / 100;
  // calculate tax
  double tax = mealCost * taxPercent / 100;
  // calculate entire meal cost 
  double totalCost = mealCost + tipAmount + tax;

  // Print The total meal cost is totalCost dollars., where totalCost is the rounded integer result of the entire bill (mealCost with added tax and tip).
  cout << "The total meal cost is ";
  cout << round(totalCost);
  cout << " dollars." << endl;

  return 0;
}
