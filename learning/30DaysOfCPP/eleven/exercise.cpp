//
//  main.cpp
//  hourglass
//
//  Created by Mac Bellingrath on 7/23/17.
//  Copyright © 2017 Mac Bellingrath. All rights reserved.
//

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

/*
 Given 6 x 6 2D array, find and print max hourglass value.
 constraints: -9 <= x <= 9
 */
int main() {

    vector<vector<int>> arr(6, vector<int>(6));
    for (int i = 0;i < 6; i++) {
        for (int j = 0;j < 6; j++) {
            cin >>arr[i][j];
        }
    }

    vector<int> sum(16);
    int hourglass = 0;
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j ++) {
            sum[hourglass] = arr[i][j] +
            arr[i][j+1] +
            arr[i][j+2] +
            arr[i+1][j+1] +
            arr[i+2][j] +
            arr[i+2][j+1] +
            arr[i+2][j+2];

            hourglass++;
        }
    }

    sort(sum.begin(), sum.end());
    cout << sum[15];

    return 0;
}
