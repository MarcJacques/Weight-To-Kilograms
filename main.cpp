#include <iostream>
using namespace std;

int main() 
{

  double pounds, kilograms;
  //ask user for weight
  cout << "Enter weight in pounds" << endl;
  cin >> pounds;
  
  //convert lbs to kgs
  kilograms = pounds/2.2;

  cout << "Your weight in kilograms is " << kilograms << endl;
  return 0;
    
}