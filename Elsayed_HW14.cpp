/*  Author: Walid Elsayed
    Title: Temperature Converter
    Purpose: To convert celsius to fahrenheit or fanhrenheit to celsius within a range of numbers
    Date: 11/07/2022
*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  char choice; 
  double starttemp;
  double endtemp;
  double result;

  cout << fixed << showpoint << setprecision(1);

  cout << "Enter f (or F) to convert Fahrenheit to Celsius";
  cout << " or c (or C) to convert Celsius to Fahrenheit: ";
  cin >> choice;

  if(choice == 'f' || choice == 'F'){
    
    cout << "Enter Starting Temperature: ";
    cin >> starttemp;
    cout << endl << "Enter Ending Temperature: ";
    cin >> endtemp;
    cout <<"Fahrenheit  Celsius" << endl;


    while(starttemp < (endtemp + 1)){
    cout << starttemp << "    " << (starttemp-32)/1.8 << endl;
    starttemp++;
  }
  return 0; 
  }
  
if(choice == 'c' || choice == 'C'){
    cout << "Enter Starting Temperature: ";
    cin >> starttemp;
    cout <<  endl << "Enter Ending Temperature: ";
    cin >> endtemp;
    cout << "Celsius  Fahrenheit" << endl;
    while (starttemp < (endtemp + 1)){
        cout << starttemp << "    " << (starttemp * 1.8) + 32 << endl;
        starttemp ++;
    }
    return 0;
  }

 if(choice != 'f' || choice != 'F' || choice != 'c' || choice != 'C'){
    cout << "Invalid Entry!" << endl;
    return 0;
 }
 if(starttemp >= endtemp){
    cout << "Sorry, incorrect values." << endl;
    return 0;
  }
   

    return 0;
}