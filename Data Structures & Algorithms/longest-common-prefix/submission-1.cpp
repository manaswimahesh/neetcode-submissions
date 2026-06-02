class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,n=strs[0].size(); char c;
        for( i=0 ; i<n ; i++){
            c = strs[0][i];
            for(int j=1 ; j <strs.size() ; j++){
                //if(c!=strs[j][i]) break;
                if (i >= strs[j].size() || strs[j][i] != c) 
                    return strs[0].substr(0, i);
            }
        }

        return strs[0].substr(0,i);
        
    }
};