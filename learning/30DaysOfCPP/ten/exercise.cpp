#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  vector<int> v;
  int n;
  cin >> n;

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
      j++;
      m = max(m, count);
    }
  }

  cout << m << endl;
  return 0;
}
