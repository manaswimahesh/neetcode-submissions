class Solution {
public:
    int arrangeCoins(int num) {
        long long mid,coins;
        long long left = 1, right = num;
        while(left<=right){
            mid = left + (right-left)/2 ;
            coins = (mid*(mid+1))/2;
            if (coins <= num) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }


        }

        return right;
    }
};