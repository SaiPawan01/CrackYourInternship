class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l=0,h=n-1,i=0;
        while(i<=h){
            if(nums[i]==0){
                swap(nums[l],nums[i]);
                i++;l++;
            }
            else if(nums[i]==1) i++;
            else{
                swap(nums[i],nums[h]);
                h--;
            }
           
        }
    }
};