/*
Author: Jordan Upperman
Date: 3/1/17
Version: 0.1
Description: Determines Grade With Switch Statements
*/

#include <iostream> //Allows access to input/output devices
using namespace std; //Prevents the spread of STDs

int main () //Declares main function
{
  int grade; //Sets address for integer storage
  int simpGrade; //Sets address for integer storage

  while (simpGrade > 10 || simpGrade < 0) //Restricts user from advancing with unsupported grade values
  {
       cout << "Enter your grade as a number without decimals." << endl  //Prompt
            << "If you scored above 100% just put 100." << endl  //Prompt
            << "After entering press return. " << endl;   //Prompt

  cin >> grade; // Allows user input of real grade

  simpGrade = grade / 10; // Converts grade to a scale from one to ten

if (simpGrade > 10) // Prevents unsupported grade values
    cout << endl << "Please round down to 100." << endl << endl; //Error explanation

if (simpGrade < 0) // Prevents unsupported grade values
    cout << endl << "You entered a score less than 0, please correct this." << endl << endl;  //Error explanation
  }

  switch (simpGrade) //Required switch
{
    case 10 : cout << "You Received an A" << endl; //Grade Case
    break;  //Ends case statement

    case 9 : cout << "You Received an A" << endl; //Grade Case
    break;  //Ends case statement

    case 8 : cout << "You Received a B" << endl; //Grade Case
    break;  //Ends case statement

    case 7 : cout << "You Received a C" << endl; //Grade Case
    break;  //Ends case statement

    case 6 : cout << "You Received a D" << endl; //Grade Case
    break;  //Ends case statement

    case 5 : cout << "You Received an F" << endl;  //Grade Case
    break;  //Ends case statement

    case 4 : cout << "You Received an F" << endl; //Grade Case
    break;  //Ends case statement

    case 3 : cout << "You Received an F" << endl; //Grade Case
    break;  //Ends case statement

    case 2 : cout << "You Received an F" << endl; //Grade Case
    break;  //Ends case statement

    case 1 : cout << "You Received an F" << endl; //Grade Case
    break;  //Ends case statement

    case 0 : cout << "You Received an F" << endl; //Grade Case
    break;  //Ends case statement


}
  cout << "Congratulations!" << endl;  //Closing Statement
  return 0;
}
