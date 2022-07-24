class Solution {
public:
    int search(vector<int>& nums, int target) {
        //initialize main two pointer-> one on the first element & one on the last one
        int left=0,right=nums.size()-1;
        
        //loop while the left pointer is before or on the same position as the right one
        while(left<=right){
            
            //the third pointer mid-> is exactly the middle element between the main two ones
            int mid=left+(right-left)/2;
            
            //base case: if the taregt value is reached-> return the position
            if(target==nums[mid])
                return mid;
            //case 2: if its value is smaller than the mid one
            if(target<nums[mid])
                //move the right pointer to the position before the mid
                right=mid-1;
            //case 3: if its value is bigger than the mid one
            else
                //move the left pointer to the position after the mid
                left=mid+1;
        }
        
        //if the search is overed & no returned position-> element isn't found-> return -1
        return -1;
    }
};