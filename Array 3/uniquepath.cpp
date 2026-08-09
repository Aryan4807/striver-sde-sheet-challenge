 #include <vector>
#include <algorithm>
  int uniquePaths(int m, int n) {
        int i=0,j=0,c=0;
        std::vector<int> v(m,1),v1(n,1);
        std::vector<std::vector<int>> vec(m, std::vector<int>(n, 1));
        for(i=1;i<m;i++){
            for(j=1;j<n;j++){
                vec[i][j]=vec[i-1][j]+vec[i][j-1];
            }
        }
        return vec[m-1][n-1];
    }