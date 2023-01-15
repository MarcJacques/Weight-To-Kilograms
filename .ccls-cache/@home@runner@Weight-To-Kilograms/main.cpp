#include <iostream>
using namespace std;

int main() 
{

  double weight, kilograms;
  //ask user for weight
  cout << "What is your weight?" << endl;
  cin >> weight;
  
  //convert lbs to kgs
  kilograms = 2.2 * weight;

  cout << "Your weight in kilograms is " << kilograms << endl;
  
}