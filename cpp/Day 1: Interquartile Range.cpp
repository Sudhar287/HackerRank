#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Box{
    int ele;
    int count;
};

bool boxer(Box const & lhs, Box const & rhs){
    return lhs.ele < rhs.ele;
}

int main(){
    int n; cin >> n;
    float q1, q3;
    vector <Box> boxes;
    
    for (int i=0;i<n;i++){
        boxes.push_back(Box());
        cin >> boxes[i].ele;
    }
    for (int i=0;i<n;i++){
        cin >> boxes[i].count;
    }
    
    sort (boxes.begin(),boxes.end(),&boxer);
    
    vector <int> cumm_vector;
    // arr[0] = boxes[0].count;
    cumm_vector.push_back(boxes[0].count);
    for (int i=1;i<n;i++){
        // arr[i] = boxes[i].count + arr[i-1];   
        cumm_vector.push_back(boxes[i].count + cumm_vector[i-1]);
        // cout << cumm_vector[i] <<endl;
    }
    int n_cumm = cumm_vector.back();
    
    // cout << n_cumm;
    
    int pos_q1, pos_q3;
    int offset_q1=0,offset_q3=0;
    
    if (n_cumm%2 == 0){
        pos_q1 = (n_cumm/2) /2;
        offset_q1 = - 1;
        pos_q3 = n_cumm/2 + pos_q1 + offset_q1;
        offset_q3 = 1;
        
    }
    else{
        pos_q1 = (n_cumm/2 -1)/2;
        pos_q3 = (n_cumm/2 + 1 + n_cumm) /2;
    }
    
    // cout << pos_q1;
    
    std::vector<int>::iterator low1,low2;
    int val1=0,val2=0,val3=0,val4=0,index;
    
    if (n_cumm%2 == 0){
    
    low1=std::lower_bound (cumm_vector.begin(), cumm_vector.end(), pos_q1 + offset_q1);
    int index = std::distance(cumm_vector.begin(), low1);
    val1 = boxes[index].ele;
        
    low2 = std::lower_bound (cumm_vector.begin(), cumm_vector.end(), pos_q1);
    int index2 = std::distance(cumm_vector.begin(), low2);
    if (std::find(cumm_vector.begin(), cumm_vector.end(), pos_q1) != cumm_vector.end()){
        index2 = index2 + 1;
        val2 = boxes[index2].ele;
        }
    
    q1 = (val1 + val2 )/2;
    
        
    
    // cout << pos_q3;   
        
    low1=std::lower_bound (cumm_vector.begin(), cumm_vector.end(), pos_q3 + offset_q3);
    index = std::distance(cumm_vector.begin(), low1);
        
    // cout << index;
    
    if (std::find(cumm_vector.begin(), cumm_vector.end(), pos_q3+offset_q3) != cumm_vector.end()){
        index = index + 1;
}
        
    val1 = boxes[index].ele;
    // cout << "suddhu";
        
    // }
    // index = std::distance(cumm_vector.begin(), low1);
    // val1 = boxes[index].ele;
        
    // cout << pos_q3;
        
    low2 = std::lower_bound (cumm_vector.begin(), cumm_vector.end(), pos_q3);
    index2 = std::distance(cumm_vector.begin(), low2);
    // cout << index;
        
    if (std::find(cumm_vector.begin(), cumm_vector.end(), pos_q3) != cumm_vector.end()){
        index2 = index2 + 1;
        // cout << "suddhu";
    }
     val2 = boxes[index2].ele;
    // cout << index2;
    // }
    
        // cout << val1 << endl << val2;
    
    q3 = (val1 + val2 )/2;
            
    }
    // if (pos_q1 == )
    // // val_2=
    // }
    // cout << typeid(low - cumm_vector.begin()).name();
    
    // cout << low - cumm_vector.begin() << endl;
    
    // int index = std::distance( cumm_vector.begin(), low);
    
    // cout << val1 << endl << val2 << endl;
    
    
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    
    cout << q3-q1;
    
    
    return 0;
}

/*
int main() {
    int n; cin >>n;
    int arr[n];
    vector <Box> boxes;
    for (int i=0;i<n;i++){
        boxes.push_back(Box());
        cin >> boxes[i].ele;
    }
    for (int i=0;i<n;i++){
        // boxes.push_back(Box());
        cin >> boxes[i].count;
    }
    // for (int i=0;i<n;i++){
    //     cout << boxes[i].ele;
    // }
    
    sort (boxes.begin(),boxes.end(),&boxer);
    
    // for (int i=0;i<n;i++){
    //     cout << boxes[i].ele <<  " "<< boxes[i].count <<endl;
    // }
    
    arr[0] = boxes[0].count;
    for (int i=1;i<n;i++){
        arr[i] = boxes[i].count + arr[i-1];   
        cout << arr[i] <<endl;
    }
    
    // int n_subarray = n/2;
    
    int ix_to_find = n/2;? // will get from previous code
    
    int in_min = 0;
    int in_max = n; // n should be only for that half
    int ix_got = n+n;
    int offset = 1;
    int q1;
        
    while (ix_to_find != ix_got){
        int ix_got = (in_min + in_max)/2;
        offset ++;
        if (arr[ix_got] > ix_to_find){
            ix_max = ix_got - 1;
        }
        else{
            ix_min = ix_got + 1;
        }
        if ()
        if (ix_min == ix_max){
            if (ix_to_find > arr[ix_min]) {
                q1 = boxes[offset].ele;     
            }
            else {
                q1 = boxes[offset-1].ele;
            }
            break;
        }
        
    }
    
    if (n%2){
        
    }
    else{
        
    }
    

    return 0;
}

*/