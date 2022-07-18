class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>output_arr;
        
        for(int i =0 ; i < nums.size()-2; i++){
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                int low = i+1;
                int high = nums.size() - 1;
                int remainsum = 0 - nums[i];
                
                while(low < high){
                    if(nums[low] + nums[high] == remainsum){
                        vector<int> triplet = {nums[i], nums[low], nums[high]};
                        output_arr.push_back(triplet);
                        while(low < high && nums[low] == nums[low+1]){
                            low++;
                        }
                        while(low < high && nums[high] == nums[high-1]){
                            high--;
                        }
                        low++;
                        high--;
                    }
                    else if(nums[low] + nums[high] > remainsum){
                        high--;
                    }
                    else{
                        low++;
                    }
                }
            }
        }
        return output_arr;
    }
};


// 311 / 311 test cases passed.
// Status: Accepted
// Runtime: 185 ms
// Memory Usage: 20.9 MB
