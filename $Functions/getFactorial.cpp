ll getFactorial(ll num) {
  if (num == 1) {
    return num;
  }
  return num * getFactorial(num - 1);
}