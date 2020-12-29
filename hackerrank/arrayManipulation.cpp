long arrayManipulation(int n, vector<vector<int>> q) {
    vector<int> data(n, 0);
    
    for(auto a: q) {
        data[a[0]-1] += a[2];
        data[a[1]] += a[2]*-1; 
    }
    
    long sum = 0, max = 0;
    
    for(auto e: data) {
        sum += e;
        
        if(sum > max)
            max = sum;    
    }
    
    return max;
}
