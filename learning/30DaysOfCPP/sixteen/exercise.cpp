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
#include <unordered_map>

int main(){
    std::string S;
    std::cin >> S;
    try {
     int x = std::stoi(S);
     std::cout << x << std::endl;
    } catch (std::invalid_argument&e) {
        std::cout << "Bad String" << std::endl;
    }
    return 0;
}
