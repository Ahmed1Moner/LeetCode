class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        //save the current index each time
        int index=nums.size()-1;
        
        //loop over the whole elements from the end to the start
        for(int i=nums.size()-1;i!=0;i--)
            
            //if the next element, previous one in reverse, + its value can exceed the saved index-> update the saved index with it
            if(i-1+nums[i-1]>=index)
                index=i-1;
        
        //if the index pointer reaches the end of the vector-> true
        if(index==0)
            return true;
        //else-> false
        return false;
    }
};