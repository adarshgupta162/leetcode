class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> arr;
        int fact = 1;

        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
            if (i < n) fact *= i;
        }
        k--;
        string s="";
        while(arr.size()!=0){
            int index = k/fact;
            s += to_string(arr[index]);
            arr.erase(arr.begin() + index);
            if(arr.size()==0) break;
            k%= fact;
            fact/= arr.size();
        }
        return s;
    }
};