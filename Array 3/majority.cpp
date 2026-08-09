 #include <vector>
#include <algorithm>
 int majorityElement(std::vector<int>& nums) {
        int c=0,i,j=0;
        for(i=0;i<nums.size();i++){
            if(c==0 || j==nums[i]){
                c++;
                j=nums[i];
            }
            else{
                c--;
            }
        }
        return j;
    }