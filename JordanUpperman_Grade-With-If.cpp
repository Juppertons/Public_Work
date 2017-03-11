/*
Author: Jordan Upperman
Date: 3/1/17
Version: 0.1
Description: Determines Grade with IF Statements
*/
#include <iostream>
using namespace std; //Prevents STD's

int main () // Main Function
{
  int grade; // Sets storage

 cout << "Enter your grade as a number. " << endl  //Prompt
            << "After entering press return. " << endl;   //Prompt

  cin >> grade; // User input

  if (grade > 90)
    cout << "You Received an A" << endl; //A Condition

  if (grade > 80 && grade < 90)
    cout << "You Received a B" << endl; //B Condition

  if (grade > 70 && grade < 80)
    cout << "You Received a C" << endl; //C Condition

  if (grade > 60 && grade < 70)
    cout << "You Received a D" << endl; //D Condition

  if (grade < 60)
    cout << "You Received an F" << endl; //F Condition





  cout << "Congratulations!" << endl;
  return 0; //Terminate
}
