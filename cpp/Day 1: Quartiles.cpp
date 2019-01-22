#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
int main() {
    int n; cin >> n;
    int my_arr[n];
    for (int i=0;i<n;i++){
        // int num; cin >> num;
        // my_arr[i]=num;
        cin >> my_arr[i];
    }
    int q1,q2,q3,n_subarray;
    // float median;
    
    sort(my_arr, my_arr+n);
    
    int offset =0;
    
    if (n%2 == 0){
        q2 = (my_arr[n/2]+my_arr[n/2-1]) / 2.0;
        // n_subarray = n/2 -1;
        n_subarray = n/2;
    }
    else{
        q2 = my_arr[n/2];
        n_subarray = n/2;
        offset = 2;
    }
    
    // cout << n_subarray/2 << endl;
    
    if (n_subarray %2 == 0){
        q1 = (my_arr[n_subarray/2]+my_arr[n_subarray/2-1]) / 2.0;
        q3 = (my_arr[n_subarray/2 + n_subarray] + my_arr[n_subarray/2 + n_subarray -1 +offset]) / 2.0;
    }
    else {
        q1 = my_arr[n_subarray/2];
        q3 = my_arr[n_subarray/2 + n_subarray];
    }
    
    cout << q1 << endl << q2 <<endl<< q3 << endl;
    
}
*/

int median_finder(int a[], int n_subarray){
    
    if (n_subarray % 2 == 0){
        return (a[n_subarray/2]+a[n_subarray/2-1])/2.0;
    }
    else {
        return a[n_subarray/2];
    }
    
}


int main(){
    int n; cin >> n;
    int my_arr[n];
    int q1,q2,q3;
    
    for (int i=0;i<n;i++){
        cin >> my_arr[i];
    }
    sort (my_arr,my_arr+n);
    if (n%2 ==0){
        q1 = median_finder(my_arr,n/2);
        q2 = median_finder(my_arr,n);
        q3 = median_finder(my_arr,n/2 +n);
        
    }
    else{
        q1 = median_finder(my_arr,n/2);
        q2 = median_finder(my_arr,n);
        q3 = median_finder(my_arr,(n/2)+n+1);
        
    }
    
    cout << q1 <<endl<< q2 << endl<< q3;
    
    return 0;
}
// @CodeMechanix CodeMechanix  https://github.com/CodeMechanix/10-Days-of-Statistics-HackerRank/blob/master/Day%201%20Quartiles.cpp

