#include <iostream>
using namespace std;
int main()
{
  char c='P';
  int lc, uc;
  // evaluates to 1 (true) if c is a lowercase vowel
  lc = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  // evaluates to 1 (true) if c is an uppercase vowel
  uc = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
  // evaluates to 1 (true) if either lc or uc is true
  if (lc || uc)
    cout << c << " is a vowel.";
  else
    cout << c << " is a consonant.";
  return 0;
}