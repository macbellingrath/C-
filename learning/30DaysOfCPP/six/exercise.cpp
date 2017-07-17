#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   int numberOfCases;
   cin >> numberOfCases;

   for (int i = 1; i <= numberOfCases; i ++) {
      string s;
      cin >> s;

      string evens = "";
      string odds  = "";

      for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
          evens += s[i];
        } else {
          odds  += s[i];
        }
      }

      cout << evens + " " + odds << endl;
   }

    return 0;
}
