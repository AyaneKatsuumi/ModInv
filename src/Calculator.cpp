#include "../header/Calculator.hpp"

long long Calculator::modpow(long long a, long long n, long long mod)
{
  long long res = 1;
  while (n > 0)
  {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

long long Calculator::modinv(long long a, long long mod)
{
  return modpow(a, mod-2, mod);
}
