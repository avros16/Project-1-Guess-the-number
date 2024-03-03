#include <iostream>
#include <random> //testing idea of using 2 digit random number instead of 1. Must include this to 


int main() {

using std::cout;
using std::cin;

// Seed the random number generator. 
  std::random_device rd;
  std::mt19937 gen(rd());


  // Define the distribution for two-digit numbers
  std::uniform_int_distribution<int> distribution(10, 99);

  
  // Generate a random number
  int random_number = distribution(gen);
}