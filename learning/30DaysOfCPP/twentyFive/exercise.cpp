#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int x) {
  int val = x;
  for (int i = 2; i <= val/i; i++) {
    if (val%i == 0) val = 1;
  }
  return val != 1;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (isPrime(x)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }
  }

    return 0;
}
