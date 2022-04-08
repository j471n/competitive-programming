// The function runs recursive in nature to return GCD
ll gcd(ll a, ll b) {
  if (a == 0)  // If a becomes zero
    return b;  // b is the GCD
  if (b == 0)  // If b becomes zero
    return a;  // a is the GCD

  if (a == b)  // The case of equal numbers
    return a;  // return any one of them

  if (a > b)  // if a is greater subtract b
    return gcd(a - b, b);
  return gcd(a, b - a);  // otherwise subtract a
}