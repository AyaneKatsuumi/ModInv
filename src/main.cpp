#include <iostream>
#include "../header/Calculator.hpp"

using namespace std;

int main()
{
  int mod = 3;
  cout << "-----< Calculation of modular inverses >-----" << endl;
  cout << "Enter a prime number as the mod: ";
  try
  {
    cin >> mod;
  }
  catch(exception& e)
  {
    cout << endl << "something went wrong. :'(" << endl;
    cout << e.what();
  }
  cout << endl;

  for(int i = 1; i < mod; i++)
  {
    cout << i << " 's inv: " << Calculator::modinv(i, mod) << endl;
  }
}
