class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        vector<vector<int>>&  s = stockPrices;
        if(s.size() == 1){
            return 0;
        }
        sort(s.begin(), s.end());
        int ans = 0; 
        int n = s.size();
        for(int i = 2; i < n; i++){
            long long a = s[i][1] - s[i-1][1];
            long long b = s[i][0] - s[i-1][0];
            long long c = s[i-1][1]  - s[i-2][1];
            long long d = s[i-1][0] - s[i-2][0];
            
            if(a * d == b * c){
                continue;
            }
            ans++;
        }
        return ans+1;
    }
};


// 82 / 82 test cases passed.
// Status: Accepted
// Runtime: 877 ms
// Memory Usage: 100.8 MB
