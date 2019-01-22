#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int n; cin >>n;
    float arr_1[n] , arr_2[n];
    for (int i=0;i<n;i++){
        int num; cin >> num;
        arr_1[i] = num;
    }
    float sum_weights=0;
    for (int i=0;i<n;i++){
        int num; cin >> num;
        arr_2[i] = num;
        sum_weights += num;
    }
    float ans=0;
    for (int i=0;i<n;i++){
        ans += arr_1[i] * arr_2[i];
    }
    float result = ans / sum_weights;
    cout << std::fixed << std::setprecision(1)<< result;
    return 0;
}
