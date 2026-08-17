  #include <vector>
#include <algorithm>
 bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int i,j=0,mid=0,low=0, high=0;
        int row=matrix.size(),col=matrix[0].size();
        high=row*col-1;
        if(matrix[0][0]>target || matrix[row-1][col-1]<target)return false;
        while(high>=low){
            mid=(high+low)/2;
            int ro=mid/col;
            int co=mid%col;
            if(matrix[ro][co]==target)return true;
            else if(matrix[ro][co]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }