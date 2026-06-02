class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=-1, a=0;
        for(int i =0 ; i < nums.size() ; i++){
            if(nums[i] == 1 ) a++;
            else a=0;
            if(max<a) max=a; 
        }
        return max;
    }
};