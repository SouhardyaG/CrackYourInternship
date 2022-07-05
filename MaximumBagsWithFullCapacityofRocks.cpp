class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> diff;
        int count = 0;
        for(int i = 0; i < capacity.size(); i++){
            diff.push_back(capacity[i] - rocks[i]);
        }
        sort(diff.begin(), diff.end());
        for(int i = 0 ; i < diff.size(); i++){
            if(additionalRocks >= diff[i]){
                additionalRocks -= diff[i];
                count++;
            }
        }
        return count;
    }
};



// 79 / 79 test cases passed.
// Status: Accepted
// Runtime: 184 ms
// Memory Usage: 89.5 MB
