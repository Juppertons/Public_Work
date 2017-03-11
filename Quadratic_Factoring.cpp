/*
Jordan Upperman
1/27/2017
Version 0.1
Factors a single variable quadratic
Limited to decimal form (Can not output radicals or fractions)
*/
#include <iostream> // Allows communication between program and input/output devices
#include <string>  // Allows string variables/manipulation
#include <iomanip>
#include <cmath> // Allows math functions

using namespace std; //Prevents spread of STDs

int main() //Declare main function
{
 cout << "Assuming the form 'Ax^2 + Bx + C' " << endl
      << "Enter the following variables " << endl;
    double a = 0;
    cout << "A: ";
    cin >> a;

    double b = 0;
    cout <<"B: ";
    cin >> b;

    double c = 0;
    cout <<"C: ";
    cin >> c;

   double high = (double)( -1 * (( -1 * b) + sqrt(pow(b,2)-(4 * a * c)))/( 2 * a ));
   cout << "(x + " << high << ")" << endl;
   double low = (double)( -1 * (( -1 * b) - sqrt(pow(b,2)-(4 * a * c)))/( 2 * a ));
   cout << "(x + " << low << ")" << endl;
   return 0;
}
