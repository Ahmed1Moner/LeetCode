class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        //loop over the whole rows of the matrix
        for(int m=0;m<matrix.size()-1;m++){
            
            //loop over the whole columns of each row of the matrix
            for(int n=0;n<matrix[m].size()-1;n++){
                
                //check if the diagonal elements have the same values or not
                if(matrix[m][n]!=matrix[m+1][n+1])
                    //if not-> break & false
                    return false;
            }
        }
        
        //if yes-> true
        return true;
    }
};