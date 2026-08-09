 #include <vector>
#include <algorithm>
std::vector<std::vector<int>> generate(int numRows) {
        int i,j,c=0;
        std::vector<std::vector<int>>v;
        std::vector<int> v1;
        v1.push_back(1);
        v.push_back(v1);
        if(numRows==1){
            return v;
        }
        v1.push_back(1);
        v.push_back(v1);
        if(numRows==2){
            return v;
        }
        for(i=2;i<numRows;i++){
            std::vector<int> v2;
            v2.push_back(1);
            j=1;
            while(j<i){
            v2.push_back(v[i-1][j-1]+v[i-1][j]);
            j++;
            }
            v2.push_back(1);
            v.push_back(v2);
        }
        return v;

    }