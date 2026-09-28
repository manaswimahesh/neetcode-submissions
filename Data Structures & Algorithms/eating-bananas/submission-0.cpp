class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int final = right;

        while(left<=right){
            int mid = left + (right-left)/2;

            long long total=0;

            for(int p : piles)  total+=ceil((double)p/mid);

            if( total<=h ){
                final = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }

        }

        return final;
    }
};
