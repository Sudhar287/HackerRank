class Matrix {
    
    public:
    
    vector<vector<int>> a;
    
    // public:
    
    Matrix operator+(const Matrix &o){
        Matrix ans;
        int r = this->a.size();
        int c= this->a[0].size();
        // int i,j;
            
        for (int i =0; i<r; i++){
            int num;
            vector<int> pre_sum;

            for (int j=0; j<c; j++){
                num = this->a[i][j] + o.a[i][j];
                pre_sum.push_back(num);
            }
        ans.a.push_back(pre_sum);
        
        }

        return ans;
    }
};