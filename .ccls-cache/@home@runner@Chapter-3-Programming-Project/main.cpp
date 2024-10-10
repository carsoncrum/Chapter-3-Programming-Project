// Calculating number of ingredients needed
#include <iostream>
using namespace std;

int main()

{
  // Original amounts
  double sugar = 1.5;
  double butter = 1;
  double flour = 2.75;
  int cookiesPerRecipe = 48;

  int desiredCookies;
  cout << "How many cookies do you wish to make? ";
  cin >> desiredCookies;
  
  double sugarPerCookie = sugar / cookiesPerRecipe;
  double butterPerCookie = butter / cookiesPerRecipe;
  double flourPerCookie = flour / cookiesPerRecipe;
  
  double totalSugar = sugarPerCookie * desiredCookies;
  double totalButter = butterPerCookie * desiredCookies;
  double totalFlour = flourPerCookie * desiredCookies;
  
  cout << "You will need:" << endl;
  cout << totalSugar << " cups of sugar" << endl;
  cout << totalButter << " cups of butter" << endl;
  cout << totalFlour << " cups of flour" << endl;


  return 0;
}