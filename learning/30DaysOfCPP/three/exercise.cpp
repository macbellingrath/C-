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
  string phrase;

  cin >> N;

  if (N % 2 != 0) {
    phrase = "Weird";
  } else if (check_range(N, 2, 5)) {
    phrase = "Not Weird";
  } else if (check_range(N, 6, 20)) {
    phrase = "Weird";
  } else if (N >= 20) {
    phrase = "Not Weird";
  }

  cout << phrase << endl;

  return 0;
}
