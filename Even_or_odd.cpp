/*
Author: Jordan Upperman
Date: 2/1/17
Version: 0.1
Description: In Class project 2*/
// evenodd.cpp
#include <iostream> // allows program to perform input and output

using namespace std;
int main()
{
   int number; // integer read from user

   cout << "Enter an integer: "; // prompt
   cin >> number; // read an integer from user

   // using modulus operator
   if ( number % 2 == 0 )
      cout << number << " is even" << endl;

   if ( number % 2 != 0 )
      cout << number << " is odd" << endl;

   return 0; // indicate successful termination

} // end main
