class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nums1Idx;
        for (int i = 0; i < nums1.size(); i++) {
            nums1Idx[nums1[i]] = i;
        }

        vector<int> res(nums1.size(), -1);

        for (int i = 0; i < nums2.size(); i++) {
            if (nums1Idx.find(nums2[i]) == nums1Idx.end()) {
                continue;
            }
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    int idx = nums1Idx[nums2[i]];
                    res[idx] = nums2[j];
                    break;
                }
            }
        }
        return res;
    }
};