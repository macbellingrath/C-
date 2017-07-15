#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
bool check_range(T value, T min, T max) {
    return (value >= min) && (value <= max);
}

int main() {
  int N;
   cin >> N;
    // If n  is odd, print Weird
  if (N % 2 != 0) {
    cout << "Weird" << endl;
    // If n is even and in the inclusive range of  to , print Not Weird
  } else if (check_range(N, 2, 5)) {
    cout << "Not Weird" << endl;
  } else if (check_range(N, 6, 20)) {
    cout << "Weird" << endl;
  } else if (N >= 20) {
    cout << "Not Weird" << endl;
  }

  return 0;
}
