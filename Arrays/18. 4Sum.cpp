class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i =0 ;i<n-3;i++){
            for(int j = i+1;j<n-2;j++){
                int l=j+1;
                int r=n-1;
                while(l<r){
                   long long sum = (long long)nums[i] + (long long)nums[j]+(long long)nums[l]+(long long)nums[r];
                    if(sum == target && i>=0 && j>=0 && l>=0 && r < n){
                        s.insert({nums[i],nums[j],nums[l],nums[r]});
                        r--;
                        l++;
                    }
                    else if(sum > target){
                        r--;
                    }
                    else if(sum < target){
                        l++;
                    }
                }
            }
        }
        for(auto i :s ){
            result.push_back(i);
        }

        return result;

    }
};