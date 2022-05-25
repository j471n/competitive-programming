ll mod(ll a, ll b) {
  if (a % b >= 0) {
    return a % b;
  } else {
    return b + a % b;
  }
}