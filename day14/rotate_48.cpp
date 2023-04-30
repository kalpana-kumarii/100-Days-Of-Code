//https://leetcode.com/problems/rotate-image/submissions/
// Rotate Image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>temp=matrix;

        for(int i=0;i<col;i++){
            int k=0;
            for(int j=row-1;j>=0;j--){

                    temp[i][k++]=matrix[j][i];
            }
        }

         for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                   matrix[i][j]=temp[i][j];
            }
        }
    }
};
