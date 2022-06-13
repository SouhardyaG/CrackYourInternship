class Solution {
public:
    string removeBackspaces(string& a){
        int n = a.size();
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != '#') {
                a[idx] = a[i];
                idx++;
            }
            else if (a[i] == '#' && idx >= 0) {
                idx--;
            }
            if (idx < 0)
                idx = 0;
        }
        return a.substr(0, idx);
    }
    
    bool backspaceCompare(string s, string t){
        if(removeBackspaces(s) == removeBackspaces(t)){
            return true;
        }
        return false;
    }
};


// 114 / 114 test cases passed.
// Status: Accepted
// Runtime: 2 ms
// Memory Usage: 6.2 MB
