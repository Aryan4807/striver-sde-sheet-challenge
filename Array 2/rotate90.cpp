 #include <vector>
#include <algorithm>

void rotate(std::vector<std::vector<int>>& mat) {
        int n = mat.size();
        // Transpose the matrix
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                std::swap(mat[i][j], mat[j][i]);
            }
        }
        // Reverse each row
        for(int i = 0; i < n; i++){
            std::reverse(mat[i].begin(), mat[i].end());
        }
    }