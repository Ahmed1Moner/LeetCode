class Solution {
public:
    int search(vector<int>& nums, int target) {
        //initialize main two pointer-> one on the first element & one on the last one
        int left=0,right=nums.size()-1;
        
        //loop while the left pointer is before or on the same position as the right one
        while(left<=right){
            //the third pointer mid-> is exactly the middle element between the main two ones
            int mid=(right+left)/2;
            
            //base case: if the value is equal to the mid value-> return the mid position
            if(target==nums[mid])
                return mid;
            
            //case 2: if the value of left is smaller than the mid one
            if (nums[left]<=nums[mid]){
                //check if the given number is lying in the bounds between the left and the mid positions
                if(target<=nums[mid] && target>=nums[left])
                    //if yes-> move the right pointer to the position before the mid
                    right=mid-1;
                else
                    //if no-> move the left pointer to the position after the mid
                    left=mid+1;
            }
            
            //case 3: if the value of left is bigger than the mid one
            else{
                //check again if the given number is lying in the bounds between the mid and the right positions
                if(target>=nums[mid] && target<=nums[right])
                    //if yes-> move the left pointer to the position after the mid
                    left=mid+1;
                else
                    //if no-> move the right pointer to the position before the mid
                    right=mid-1;
            }
        }
        
        //if no returned value-> return -1
        return -1;
    }
};