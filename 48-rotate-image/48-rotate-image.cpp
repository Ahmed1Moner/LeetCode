class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose the matrix first, then reverse each coulmn
        
        //transpose
        //loop over the matrix elements, rows
        for(int i=0;i<matrix.size();i++)
            //then, its columns-> each column in the current row
            for(int j=0;j<i;j++)
                //swap each element with its opposite co-ordinates
                swap(matrix[i][j],matrix[j][i]);
        
        //reverse the coulmns
        //loop again on the matrix, element by element
        for(int i=0;i<matrix.size();i++)
            //to avoid reversing the same coulmns again, only do the function until reaching the half column
            //...if 5x5 mat-> reverse only coulmn 1 with column 5 & coulmn 2 with column 4, avoiding reverse them again
            for(int j=0;j<matrix.size()/2;j++)
                //swap each column element in the same row with its corresponding one
                swap(matrix[i][j],matrix[i][matrix.size()-j-1]);
    }
};