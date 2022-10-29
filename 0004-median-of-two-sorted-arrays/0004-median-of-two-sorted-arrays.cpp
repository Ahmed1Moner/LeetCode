class Solution {
public:
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int size1=nums1.size();
        int size2=nums2.size();
        
        //make the smaller array in the left
        if(size2<size1)
            return findMedianSortedArrays(nums2, nums1);
        
        //initialize pointers
        int left=0, right=size1, totalSize=size1+size2, halfSize=(totalSize+1)/2;
        
        //loop while the right pointer isn't after the left one
        while(left<=right){
            
            //initialize two middle pointers, one on each array
            int midA = left+(right-left)/2;
            int midB = halfSize-midA;
            
            //split each array
            int leftA = (midA==0) ? INT_MIN : nums1[midA-1];
            int rightA = (midA==size1) ? INT_MAX : nums1[midA];
            int leftB = (midB==0) ? INT_MIN : nums2[midB-1];
            int rightB = (midB==size2) ? INT_MAX : nums2[midB];
            
            //check if the splitting is correct
            
            //case 1-> yes
            if(leftA<=rightB && leftB<=rightA){
                
                //if the size is odd
                if(totalSize%2==0)
                    return (min(rightA, rightB)+max(leftA, leftB))/2.0;
                else
                    return max(leftA, leftB);
            }
            
            //case 2-> no, the element after the middle in array 1 is bigger than the second
            else if(leftA>rightB)
                right=midA-1;

            //case 3-> no, the element after the middle in array 2 is bigger than the second
            else if(leftB>rightA)
                left=midA+1;
        }
        
        //after all, if no median of elements at all-> return 0 as a double value
        return 0.0;        
    }
};

