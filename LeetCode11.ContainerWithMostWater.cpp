class Solution {
public:
    int maxArea(vector<int>& height) {
            int water = 0;
    int i = 0, j = height.size() - 1;

    while (i < j) {
        int h = min(height[i], height[j]);
        water = max(water, (j - i) * h);
        
        while (height[i] <= h && i < j) i++;
        while (height[j] <= h && i < j) j--;
    }
    return water;
    }
};



// 60 / 60 test cases passed.
// Status: Accepted
// Runtime: 198 ms
// Memory Usage: 59 MB
