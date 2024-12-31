class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> valAndIdx;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (valAndIdx.find(diff) != valAndIdx.end())
            {
                return {i, valAndIdx[diff]};
            }
            
            valAndIdx[nums[i]] = i;
        }
        
        return {0,0};
    }
};
