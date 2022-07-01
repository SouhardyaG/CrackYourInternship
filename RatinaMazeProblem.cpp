// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    void dfs(int row, int col, vector<vector<int>> &m, int n, string op, vector<string> &ans){
        if(row < 0 || col < 0 || row >= n || col >= n || m[row][col] != 1){
            return;
    }
    if(row == n-1 && col == n-1){
        ans.push_back(op);
        return;
    }
    m[row][col] = 0;
    dfs(row+1, col, m, n, op+'D', ans);
    dfs(row-1, col, m, n, op+'U', ans);
    dfs(row, col+1, m, n, op+'R', ans);
    dfs(row, col-1, m, n, op+'L', ans);
    
    m[row][col] = 1;
}
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        if(m[0][0] == 0 || m[n-1][n-1] == 0){
            return {"-1"};
        }
        vector<string> ans;
        string op = "";
        dfs(0, 0, m, n, op, ans);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
