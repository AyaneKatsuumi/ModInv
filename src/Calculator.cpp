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

long long Calculator::modinv_old(long long a, long long mod)
{
  return modpow(a, mod-2, mod);
}

long long Calculator::modinv(long long a, long long mod)
{
  long long x, y;
  Calculator::extended_gcd(a, mod, &x, &y);
  if(x < 0) x += mod;
  return x;
}

long long Calculator::extended_gcd(long long a, long long b, long long* x, long long* y)
{
  if(b == 0)
  {
    *x = 1;
    *y = 0;
    return a;
  }
  long long d = extended_gcd(b, a%b, y, x);
  *y -= a/b * (*x);
  return d;
}
