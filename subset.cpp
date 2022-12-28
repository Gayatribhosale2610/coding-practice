## Subsets

class Solution {
    void solve(vector<int> nums, vector<int> res, int indx, vector<vector<int>>& ans){
        if(indx >= nums.size()){
            ans.push_back(res);
            return;
        }
        // exclude
        solve(nums, res, indx + 1, ans);
        
        // include
        int ele = nums[indx];
        res.push_back(ele);
        solve(nums, res, indx+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        int indx = 0;
        solve(nums, res, indx, ans);
        return ans;
    }
};


### Input: nums = [1,2,3]
### Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
