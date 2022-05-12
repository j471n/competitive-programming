inline isPrime(ll num) {
  if (num <= 1)
    return false;
  repe(i, 2, sqrt(num)) {
    if (num % i == 0)
      return false;
  }
  return true;
}