#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Given a base-10 integer, n, convert it to binary (base-2).
Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.
Constraints: 1 <= n <= 10^6
*/

int main() {
  int n;
  cin >> n;

  vector<int> v;
  // convert base-10 integer to binary, base=2
  while (n > 0) {
    int r = n%2;
    v.push_back(r);
    n = n/2;
  }

  int m = 0;
  for (int i = 0; i < v.size(); i++) {
    int j = i;
    int count = 0;
    while (v[j] == 1) {
      count++;
      j++; // potentially out of bounds? or does line 30 already handle this?
      m = max(m, count);
    }
  }

  cout << m << endl;
  return 0;
}
