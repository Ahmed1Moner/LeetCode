class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        //loop over the whole array elements
        for(int i=0;i<arr.size();i++)
            //if the current one is 0
            if(arr[i]==0){
                //shift elements from the last to the current element
                for(int j=arr.size()-1;j!=i;j--)
                    arr[j]=arr[j-1];
                    
                //move an extra step, skip the new zero element
                i++;
            }
    }
};


