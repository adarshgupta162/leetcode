class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int k =n;

        for(int i = 0; i < k ;i++){
            n ^= i;
            n ^= nums[i];
        }

        return n;
    }
};