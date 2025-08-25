class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, zeros = 0, maxlen = 0;
        
        while (r < nums.size()) {
            if (nums[r] == 0) zeros++;

            while (zeros > k) {  // shrink the window
                if (nums[l] == 0) zeros--;
                l++;
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};
