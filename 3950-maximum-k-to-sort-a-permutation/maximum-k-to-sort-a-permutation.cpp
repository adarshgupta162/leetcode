class Solution {
public:
    int sortPermutation(vector<int>& nums) {

        vector<int> temp = nums;
        sort(begin(temp), end(temp));
        if (nums == temp)
            return 0;
        int n = nums.size();
        int res = INT_MAX ;

        for ( int i=0; i<n; i++){
            if(nums[i]!= i){
                res = res&nums[i];
            }
        }
        return res;
    //     int i = 0, j = n - 1;
    //     int maxi = -1, mini = n;

    //     while (i < n) {
    //         if (nums[i] != i) {
    //             mini = min(mini, nums[i]);
    //         }
    //         i++;
    //     }
    //     while (j >= 0) {
    //         if (nums[j] != j) {
    //             maxi = max(maxi, nums[j]);
    //         }
    //         j--;
    //     }

    //     int k = mini & maxi;
    //     return k;


    }
};