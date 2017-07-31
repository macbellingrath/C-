#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin >> n;

  vector<int> v;
  int x;
  while (cin >> x) {
    v.push_back(x);
  }
  int swapCount = 0;
  for (int i = 0;i < n; i++) {
    for (int j = 0; j < n - 1; j ++) {
      if (v[j] > v[j + 1]) {
        swap(v[j], v[j+1]);
        swapCount++;
      }
    }
  }

  cout << "Array is sorted in " << swapCount << " swaps." << endl;
  cout << "First Element: " << v.front() << endl;
  cout << "Last Element: " << v.back() << endl;

  return 0;
}
