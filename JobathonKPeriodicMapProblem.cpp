int n = s.size(); 
        int block_size = __gcd(n, k); 
        map<char,int> mpp; 
        for(auto it : s) {
            mpp[it]++; 
        }
        int noOfBlocks = n / block_size; 
        for(auto it : mpp) {
            // can be individually divided in each block 
            // equally 
            if(it.second % noOfBlocks != 0) {
                return "-1"; 
            }
        }
 
        // s + s + s -> ans
 
        // i just create one s, and then add it noOfBlocks time 
        string ss = ""; 
        for(auto it : mpp) {
            char c = it.first; 
            // 9 / 3 = 3 times 
            int howManyTimes = it.second / noOfBlocks;
            while(howManyTimes--) {
                ss += c; 
            }
        }
        string ans = ""; 
        while(noOfBlocks--) {
            ans += ss; 
        }
        return ans; 
