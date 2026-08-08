#include <vector>
#include <algorithm>
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i,j,c=0;
        while(m>0 &&n>0){
            if(nums1[m-1]>nums2[n-1]){
                nums1[m+n-1]=nums1[m-1];
                m--;
            }
            else{
                nums1[m+n-1]=nums2[n-1];
                n--;
            }
        }
        if(n==0){
            while(m>0){
                nums1[m+n-1]=nums1[m-1];
                m--;
            }
        }
          if(m==0){
            while(n>0){
                nums1[m+n-1]=nums2[n-1];
                n--;
            }
        }
    }