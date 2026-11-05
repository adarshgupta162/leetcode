class Solution {
public:
    int titleToNumber(string columnTitle) {
        reverse(columnTitle.begin(),columnTitle.end());
        int n = columnTitle.size();
        int i = 0;
        int ans = 0;
        while(i<n){
            int temp = int(columnTitle[i]-'A'+1);
            
            ans += temp*pow(26,i);
            i++;
        }
        return ans;
    }
};