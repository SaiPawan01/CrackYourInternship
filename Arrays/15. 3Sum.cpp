class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i =0 ;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            while(l < r){
                if((nums[i] + nums[l]+nums[r] == 0 ) && i!=l && l!=r && r!=i){
                    s.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(nums[i] + nums[l]+nums[r] < 0){
                    l++;
                }
                else if(nums[i]+nums[l]+nums[r] > 0){
                    r--;
                }
            }
        }


        for(auto i :s){
            result.push_back(i);
        }
        return result;
    }
};