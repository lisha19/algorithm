vector<int> twoSum(vector<int>& nums, int tar){
        vector<int>ans(2);
        int n=nums.size();
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(nums[i]+nums[j]==tar){
                    ans[0]=i;
                    ans[1]=j;
                }
            }
        }
        return ans;
    }
