// Calculating a report
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
  double principal, rate, interest;
  int timesCompounded;

  cout << "Enter the principal amount: $";
  cin >> principal;
  cout << "Enter the interest rate (as a percentage): ";
  cin >> rate;
  cout << "Enter the number of times interest is compounded per year: ";
  cin >> timesCompounded;
  
  interest = principal * (pow((1 + (rate / 100) / timesCompounded), timesCompounded) - 1);
 
  cout << "\nInterest Rate: " << fixed << setprecision(2) << rate << "%" << endl;
  cout << "Times Compounded: " << timesCompounded << endl;
  cout << "Principal: $" << fixed << setprecision(2) << principal << endl;
  cout << "Interest: $" << fixed << setprecision(2) << interest << endl;
  cout << "Amount in Savings: $" << fixed << setprecision(2) << (principal + interest) << endl;

  return 0;
}