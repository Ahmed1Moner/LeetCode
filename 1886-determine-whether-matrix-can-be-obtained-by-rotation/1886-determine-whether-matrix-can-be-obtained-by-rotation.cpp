class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        //base case-> check first if the two matrices are similar or not
        if(mat==target)
            return true;

        //we will not rotate the matrix more than 3 times
        int degree=3;
        
        while(degree--){
            //to rotate a matrix by 90 degree clockwise-> transpose the matrix first, then reverse each coulmn

            //transpose
            //loop over the matrix elements, rows
            for(int i=0;i<mat.size();i++)
                //then, its columns-> each column in the current row
                for(int j=0;j<i;j++)
                    //swap each element with its opposite co-ordinates
                    swap(mat[i][j],mat[j][i]);
            
            //reverse the coulmns
            //loop again on the matrix, element by element
            for(int i=0;i<mat.size();i++)
                //to avoid reversing the same coulmns again, only do the function until reaching the half column
                //...if 5x5 mat-> reverse only coulmn 1 with column 5 & coulmn 2 with column 4, avoiding reverse them again
                for(int j=0;j<mat.size()/2;j++)
                    //swap each column element in the same row with its corresponding one
                    swap(mat[i][j],mat[i][mat.size()-j-1]);

            //check again if they are similar
            if(mat==target)
                return true;
        }
        //if not, can't!
        return false;
        
    }
};