/*
Author: Jordan Upperman
Date: 2/23/17
Version: 0.1
Description: Prints a receipt for a transaction
*/
#include <iostream>
#include <iomanip> // for setprecision()
#include <string>

using namespace std;


int main ()
{
  int partNumber;  //Set Integer
  int quantity;  //Set Integer
  float unitPrice;  //Set Decimal
  float totalPrice;  //Set Decimal
  string CompName;  //Set String
  string RepName;  //Set String
  string Date;  //Set String
  string title;  //Set String


  cout << "What is the name of the representative placing the order? " << endl; //Prompts Name
  getline (cin, RepName); //Sets Value for Representative name

  cout << "What is the name of the company? " << endl; //Prompts name of company
  getline (cin, CompName); //Sets value for Company Name

  cout << "What is the date of the order? " << endl; //Prompts Name
  getline (cin, Date); //Outputs Name

  cout << fixed << showpoint << setprecision(2); //set up how number will be displayed

  cout << "Enter the title for this execution. " << endl;  // Prompt
  getline (cin, title);

  cout << "Enter part number (Must be between 0 and 999) : " << endl;  // Prompt
  cin >> partNumber;
  if (partNumber > 999  || partNumber < 0){ //Allows a Second chance
    cout << "Invalid Part Number, Please try again" << endl;
    cout << "Enter part number (Must be between 0 and 999) : " << endl;  // Prompt
  cin >> partNumber;}


  cout << "Enter the quantity of this part ordered (Limit 100):  " << endl;  // Prompt
  cin >> quantity;
  if (quantity < 0 || quantity > 100){ //Allows a Second Chance
    cout << "Invalid Quantity, Please try again" << endl;
    cout << "Enter the quantity of this part ordered (Limit 100):  " << endl;  // Prompt
  cin >> quantity;}


   cout << "Enter the unit price for this part: " << endl;  // Prompt
   cin >> unitPrice;

   totalPrice = quantity * unitPrice;

   cout << "Order Title:         " << title << endl
        << "Company:             " << CompName << endl
        << "Representative:      " << RepName << endl
        << "Part Number:         " << partNumber << endl
        << "Quantity:            " << quantity << endl
        << "At:                  $" << unitPrice << " each" << endl
        << "Total Cost:          $" << totalPrice << endl
        << "Date of order:       " << Date << endl;  //Outputs a receipt
   if (quantity < 0 || quantity > 100 || partNumber > 999  || partNumber < 0) //Lets you know if yhe
    cout << "Invalid Quantity and/or Part Number, Please check again" << endl;

  return 0;
}
