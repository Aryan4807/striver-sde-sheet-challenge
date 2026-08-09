 #include <vector>
#include <algorithm>
 int maxSubArray(std::vector<int>& nums) {
        int i, j=0,n=nums.size(),c=nums[0], maxsub=nums[0];
        for(i=0;i<n;i++){
            j=j+nums[i];
            if(nums[i]>j)j=nums[i];
            c=std::max(c,j);
            maxsub=std::max(maxsub,c);
        }
        return maxsub;
    }