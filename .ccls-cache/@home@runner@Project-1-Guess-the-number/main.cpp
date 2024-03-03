#include <iostream>
#include <random> //testing idea of using 2 digit random number instead of 1. Must include this to 


/*- 0 to 99
-3 different numbers 
  - 3 chances to guess the number. 
  Every time they guess the number correctly, we will add 1 point to their score. They need at least 2 points to win the game. 
  At the end we will display their score and say “Congratulations, you won” or “Good try! Better luck next time!” 
  -“hint.” This hint will tell the user if they need to guess higher or lower to be able to guess the number correctly. 
  - Game rules will be displayed in the beginning of the game. 
  -In between the numbers changing, we will display the current score, remind them that they need 2 points to win, and ask them if they want to continue. 
  -We will use asterisks (*), dashes, and spaces to produce a pretty output to keep the player engaged.*/

int main() {

using std::cout;
using std::cin;

// Seed the random number generator. 
  std::random_device rd;
  std::mt19937 gen(rd());


  // Define the distribution for two-digit numbers
  std::uniform_int_distribution<int> distribution(0, 99);

  
  // Generate 3 random numbers
  //int random_number = distribution(gen);
//int random_number2 = distribution(gen);
//int random_number3 = distribution(gen);
int guess{0};

  //variables
  std::string rules; 

//Intro
cout << "*************************************************************************\n";
cout << "                           GUESS THE NUMBER\n";
cout << "*************************************************************************\n";
  cout <<"\n";
  cout <<"\n";
  cout << "Welcome to Guess the Number! See game rules? Rules? (Y/N) "; 
  cin >> rules;

  if (rules == "Y" || rules == "y") { //covers both Y and y. proud of this :3
    cout << " \n" << "*************************************************************************\n" << "\n"<< "⦿ We will give you 3 opportunities to guess the number correctly.\n" << "⦿ The number will range from 0 to 99.\n" <<"⦿ Every correct guess gets you 1 point.\n⦿ You need 2 points to win.\n⦿ The number will change after every round. \n⦿ Hints will be offered.\n \n" ;
  } else if (rules == "N" || rules == "n") {
  cout << "\n"<< "Too cool for rules... we like that.\n";
}
  
cout << "Are you ready (Y/N)? ";
cin >> rules; 

if (rules == "Y" || rules == "y") {
  cout << "\n  Good luck!\n";

// coding game with this section bc user answered yes that they were ready to play. game play depends on this answer.

  int random_number = distribution(gen);
  cout << "Guess the number: ";
  cin >> guess; 

  if (guess != random_number){
    cout << "Nope, thats not it! Would you like a hint? (Y/N) ";
    cin >> rules;
        if (rules == "Y" || rules == "y") {
              if (guess > random_number){
                cout << "Hint: Your guess is too high...\n\n";
              } else if (guess < random_number) {
                cout << "Hint: Your guess is too low...\n\n";
              }
          
        }
        
  } else if (guess == random_number) {
    cout << "You win!";
  }

  cout << "Guess the number: ";
  cin >> guess; 

  if (guess != random_number){
    cout << "Nope, thats not it! Would you like a hint? (Y/N) ";
    cin >> rules;
        if (rules == "Y" || rules == "y") {
              if (guess > random_number){
                cout << "Hint: Your guess is too high...\n\n";
              } else if (guess < random_number) {
                cout << "Hint: Your guess is too low...\n\n";
              }

        }

  } else if (guess == random_number) {
    cout << "You win!";
  }


  cout << "Last chance... Guess the number: ";
  cin >> guess; 


  if (guess != random_number){
    cout << "Nope, thats not it! Would you like a hint? (Y/N) ";
    cin >> rules;
        if (rules == "Y" || rules == "y") {
              if (guess > random_number){
                cout << "Hint: Your guess is too high...\n\n";
              } else if (guess < random_number) {
                cout << "Hint: Your guess is too low...\n\n";
              }

        }

  } else if (guess == random_number) {
    cout << "You win!";
  }





  
} else if (rules == "N" || rules == "n") {
  cout << "Okay, bye!"; //no game play if user is not ready to play
}
  
  
}