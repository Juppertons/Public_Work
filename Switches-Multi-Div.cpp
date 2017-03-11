/*
Author: Jordan Upperman
Date: 3/1/17
Version: 0.1
Description: Add/divide/subtract/multiplication
*/

#include <iostream> //Allows input/output
using namespace std; // Prevents spread of STDs

int main ()
{
  char  letter; //Makes storage for Selection of function
  double  first; //Make storage for first number
  double  second;   // Make storage for second number
  double  answer; //Make storage for answer

/*  TO DO: MODIFY THE PROGRAM TO ACCEPT INPUT FOR MULTIPLICATION AND DIVISION */
 cout <<                    "Enter an A for addition." << //Prompt
                    endl << "Enter an M for multiplication." << //Prompt
                    endl << "Enter an S for subtraction."  << //Prompt
                    endl << "Enter a D for division."  << endl << //Prompt
                    endl << "Press return. " << endl <<  //Prompt
                    endl << "Enter a Q to quit." << endl << endl; //Prompt
  cin >> letter;  // User chooses operation
  while (letter != 'Q' && letter != 'q') //Loops until User quits
  {
    cout << endl <<"Enter numbers separated by return." << endl << endl; //Prompt

    cin  >> first  >> second; //User chooses numbers

    switch (letter)
    {
      case 'A' :
      case 'a' : answer = (first + second);  // Selects process addition as chosen by user
                 cout << endl << first  << " + "  << second
                 << " is "  << answer  << endl << endl;
                 break; //Ends case statement

      case 'S' :
      case 's' :    answer = (first - second);  // Selects process subtraction as chosen by user


		     cout << endl << first << " - "  << second
			    << " is "  << answer  << endl << endl;
		     break; //Ends case statement

      case 'M' :
      case 'm' :  answer = (first * second);  //Selects process multiplication as chosen by user
		     cout << endl << first << " * "  << second
			    << " is "  << answer  << endl << endl;
		     break; //Ends case statement

     case 'D' :
     case 'd' :   answer = (first / second);  //Selects process division as chosen by user
		     cout << endl << first << " / "  << second
			    << " is "  << answer  << endl << endl;
		     break; //Ends case statement
    }
    cout << endl << "Enter an A for addition." << //Prompt
                    endl << "Enter an M for multiplication." << //Prompt
                    endl << "Enter an S for subtraction."  << //Prompt
                    endl << "Enter a D for division."  << endl << //Prompt
                    endl << "Press return. " << endl <<//Prompt
                    endl << "Enter a Q to quit." << endl << endl; //Prompt

       cin  >> letter;  //User chooses new process
  }
  return 0;
}
