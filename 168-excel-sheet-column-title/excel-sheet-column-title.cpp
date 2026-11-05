class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans ="";
        while(columnNumber>0){
            columnNumber--;
            int temp = columnNumber%26;
            ans += char('A'+temp);
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};