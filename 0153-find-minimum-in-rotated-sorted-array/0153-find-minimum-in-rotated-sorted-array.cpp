class Solution {
public:
    int findMin(vector<int>& nums) {
        
        //initialize two pointers
        int left=0, right=nums.size()-1;
        
        while(left<right){
            
            //a third pointer
            int mid=left+(right-left)/2;
            
            //base case: while reaching only two elements-> return the minimum one
            if(nums[left]<nums[right])
                return nums[left];
            
            //case 1: if value of mid > right->search in the right sub-array
            if(nums[mid] > nums[right])
                left=mid+1;
            //case 2: if value of mid < right->search in the left sub-array
            if(nums[mid] < nums[right])
                right=mid;
            
        }
        
        //return the value of the left pointer
        return nums[left];
    }
};