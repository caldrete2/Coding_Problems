class Solution {
public:
    
    void transpose(vector<vector<int>>& m, int sz) {
        int temp = 0;
        
        for(int i=0; i<sz; i++) {
            for(int j=i; j<sz; j++) {
                temp = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = temp;
            }
        }        
    }
    
    void mirror(vector<vector<int>>& m, int sz) {
        int temp = 0;
        
        for(int i=0; i<sz; i++) {
            for(int j=0; j<sz/2; j++) {
                temp = m[i][j];
                m[i][j] = m[i][sz-j-1];
                m[i][sz-j-1] = temp;
            }
        }
    }
    
    void rotate(vector<vector<int>>& m) {
        transpose(m, m.size());
        mirror(m, m.size());
        
         for(int i=0; i<m.size(); i++) {
            for(int j=0; j<m.size(); j++) {
              cout << m[i][j] << " ";
            }
             cout << endl;
        } 
    }
};
