class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size()-1;

        int mid;

        while(left<=right){
            mid = left+(right-left)/2;

            if ((mid - 1 < 0 || nums[mid - 1] != nums[mid]) &&
                (mid + 1 == nums.size() || nums[mid] != nums[mid + 1])) {
                return nums[mid];
            }



            if(nums[mid]==nums[mid+1] && nums[mid]!=nums[mid-1]){
                if((right-mid+1)%2==0){
                    right = mid-1;
                }

                else{
                    left = mid+2;
                }

            }


            else if((nums[mid]==nums[mid-1] && nums[mid]!=nums[mid+1])){

                if((mid-1-left)%2==0){
                    left = mid +1;
                }

                else{
                    right = mid-2;
                }
            }


            else{

                return nums[mid];

            }

        }

        return nums[mid];

        
    }
};