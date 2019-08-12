// Matthew Young
// Pre-tax payment

/* Summary: This program is made to show how much you will be paid based upon how many hours you have
            worked, pay rate, and overtime hours (over 40) */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double numHours; // Variable for number of hours
double payRate;  // Variable for the pay rate
double payCheck; // Variable for the total paycheck 

int main()
{  //Beginning of Main Function

    cout << "How many hours have you worked? "; // Ask user how many hours they have worked. 
        cin >> numHours; // Have user input number of hours worked. 
    
    cout << "What is your pay rate (dollars per hour)? $"; // Ask user what their hourly pay rate is. 
        cin >> payRate;  // Have user input their hourly pay rate. 
        
     if (numHours > 40) { // "If" statement to show summary of total hours, overtime hours and pay rate.
        cout << "Total: " << numHours << " total hours, " << (numHours - 40) << " overtime hours and ";
        cout << "$" << fixed << setprecision(2) << payRate << "/hour" << endl; // Output summary and totals. 
        
    }
    
    else { // "Else" statement for summary if no overtime hours worked. 
        cout << "Total: " << numHours << " hours and "; // Show a summary of total hours and pay rate. 
        cout << "$" << fixed << setprecision(2) << payRate << "/hour" << endl; /* Input symbols for pay rate
                                                                                  and set decmials. */
        }
    
    if (numHours > 40) { // "If" statement for overtime hours. Number of hours over 40
    payCheck = ( (payRate * 1.5) * (numHours - 40) ) + (40 * payRate); /* Takes total hours and subtracts 40 to
                                                                          get the number of hours overtime and 
                                                                          multiplies it by 1.5 for time-and-a-half.
                                                                          Then add 40 times the pay rate to get the 
                                                                          total amount made. */
    }
    
    else { 
        payCheck = payRate * numHours; /* "Else" statement for pay check. Has no overtime hours
                                           Multiples pay rate by number of hours worked. */
        }
    
    cout << " " << endl; // Insert space between input and output
    cout << setfill('-'); // Insert top border for output. 
    cout << setw(34) << " " << endl; // Top border for output.
    cout << setfill('.'); // Insert dots to organize output. 
    cout << "- " << "Amount Before Taxes:" << setw(3) << right << "$" << payCheck << " -" << endl; // Show and align ouput for Amount before taxes. 
    cout << setfill('-') << setw(34) << " " << endl; // Bottom border for output. 
    
    return 0;

    
} // End of Main Function
