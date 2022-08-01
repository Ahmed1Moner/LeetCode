class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        //base case: few elements
        if(arr.size()==0 || arr.size()==1 || arr.size()==2)
            return false;
        
        //loop over the whole array elements until the second last one
        for(int i=0;i<arr.size()-2;i++)
            //check if the current three consecutive ones are odd or not
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0)
                //if yes-> return true
                return true;
        
        //if no-> return false
        return false;
    }
};