class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //initialize two pointers, i&j, i starts from first element & j starts from last one
        int sum=0, i=0, j=mat.size()-1;
        
        //loop over the all matrix elements
        for(int k=0;k<mat.size();k++){
            //iterate over the first main diagonal-> 00,11,22,... elements
            if(i==j)
                sum+=mat[i][i];
            
            //then, iterate second diagonal-> 02,11,20 elements, ignore 11-> 02,20 elements
            else
                sum+=mat[i][j]+mat[i][i];
            
            //increment the first counter & decrement the second one
            i++;
            j--;
        }
        return sum;
    }
};

