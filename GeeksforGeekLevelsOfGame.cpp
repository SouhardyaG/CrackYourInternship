//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int maxLevel(int h,int m)
        {
            // code here
            memset(dp, -1, sizeof(dp));
            return determiner(h,m)-1;
        }
        int dp[1001][1001];
        int determiner(int h, int m){
            if(h <= 0 || m <=0){
                return 0;
            }
            if(dp[h][m] != -1){
                return dp[h][m];
            }
            
            int s = determiner(h-2, m-8)+2;
            int t = determiner(h-17, m+7)+2;
            
            return dp[h][m] = max(s, t);
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    Solution a;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        cout<<a.maxLevel(h,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends
