inline bool contains(string s, char c) {
  rep0(i, len(s)) {
    if (s[i] == c)
      return true;
  }
  return false;
}