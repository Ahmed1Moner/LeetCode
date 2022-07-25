class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int size = nums.size();
        //only one element-> return its index
        if(size==1) return 0;
        //only two elements-> return the index of the largest
        if(size==2) return (nums[0]>nums[1]) ? 0 : 1;

        //initialize main two pointer-> to avoid overflow-> one on the second element & one on the third last one
        long long int left=1,right=size-2;
        
        //loop while the left pointer is before or on the same position as the right one
        while(left<=right){
            //the third pointer mid-> is exactly the middle element between the main two ones
            long long int mid=(left+right)/2;
            
            //base case: if the cuurent element is greater than both the one before and after him-> return its index
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;
            
            //case 2: if the element before the current is bigger than the next one
            else if(nums[mid] < nums[mid+1])
                //move the left pointer to point on the position after the middle
                left=mid+1;
            
            //case 3: if the element before the current is smaller than the next one
            else
                //move the right pointer to point on the position before the middle
                right=mid-1;
        }
        
        //after that-> compare the ignored indexes
        if(nums[0]>nums[1]) return 0;
        else if(nums[size-1]>nums[size-2]) return size-1;
        
        //if not index returned-> return the last index
        return size-1;
    }
};