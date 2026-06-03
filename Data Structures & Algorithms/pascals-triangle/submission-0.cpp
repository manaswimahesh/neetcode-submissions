class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a(numRows);
        if(numRows>=1) a[0].push_back(1);
        if (numRows>=2) {
            
            a[1].push_back(1);
            a[1].push_back(1);
        }
        if(numRows>=3){
            for(int i=2 ; i<numRows ; i++){
                a[i].push_back(1);
                
                
                for(int j=1;j<i ; j++){
                    a[i].push_back(a[i-1][j-1] + a[i-1][j]);

                }
                a[i].push_back(1);
        }

        }

        return a;


        
    }
};