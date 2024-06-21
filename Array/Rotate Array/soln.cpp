class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();        // Take into account for when steps is greater than the size of array
        int start = nums.size() - k;
        vector<int> n;
        for(int i = start ; i < nums.size() ; i++)
        {
            n.push_back(nums[i]);
        }
        
        for(int i = 0 ; i < start ; i++)
        {
            n.push_back(nums[i]);
        }
        nums = n;
    }
};
