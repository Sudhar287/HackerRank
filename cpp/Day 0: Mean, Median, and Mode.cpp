#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;


int main() {
    
    int  n; cin >> n;
    // vector<int> v1;
    int my_arr[n];
    float sum=0;
    for (int i=0; i<n; i++){
        int num; cin >> num;
        my_arr[i]=num;
        sum += num;
    }
    
    float mean = sum / n;
    
    std::sort(my_arr,my_arr+n);
    
    // cout << my_arr[1];
    float median;
    
    if (n%2 == 0){
        median = (my_arr[n/2]+my_arr[n/2-1]) / 2.0;
    }
    else{
        median = my_arr[n/2];
    }

    int number_checking_currently = my_arr[0];
    int mode = number_checking_currently;
    int count_number = 1;
    int count_mode = 1;

    for (int i =1 ; i< n; i++){

        if (my_arr[i] == number_checking_currently){
            count_number += 1;
        }
        else {

            if (count_number > count_mode){
                count_mode = count_number;
                mode = number_checking_currently;
            }
            number_checking_currently = my_arr[i];
            count_number = 1;
        }
    }

    mode = (count_number > count_mode) ? number_checking_currently : mode; 

    std::cout << mean << endl << median << endl << mode;
    
    return 0;
}
