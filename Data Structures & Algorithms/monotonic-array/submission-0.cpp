class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int mi=0, md=0;
        if(nums.size()==1) return true;
        for(int i=1; i<nums.size() ; i++){
            if(nums.at(i-1)<=nums.at(i)) mi++;
            if(nums.at(i-1)>=nums.at(i)) md++;


        }

        if(mi==nums.size()-1) return true;
        else if(md==nums.size()-1) return true;
        else return false;
    }
};