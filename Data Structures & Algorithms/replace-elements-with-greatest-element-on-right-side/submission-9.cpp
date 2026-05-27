class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int i;

        vector<int> ans(arr.size());

        for (i = 0; i < arr.size() - 1; i++) {
            ans[i] = *max_element(arr.begin() + i + 1, arr.begin() + arr.size());
        }

        ans[i] = -1;

        return ans;
    }
};
