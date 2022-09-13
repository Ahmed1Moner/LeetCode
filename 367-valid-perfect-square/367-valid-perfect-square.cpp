class Solution {
public:
    bool isPerfectSquare(int num) {
        
        //initialize mainly two pointer-> one on initial value 1 & one on the given value
        long long left=1, right=num;
        
        //loop while the left pointer is before or on the same position as the right one
        while(left<=right){
            
            //the third pointer mid-> is exactly the middle element between the main two ones
            long long mid=left+(right-left)/2;
            
            //base case: if the current number is the square of the given-> true

            if(mid*mid==num)
                return true;
            
            //case 2: if this value is smaller than the target one-> move the left pointer to the position after the mid
            else if(mid*mid<num)
                left=mid+1;
            
            //case 3: if this value is bigger than the target one-> move the right pointer to the position before the mid
            else
                right=mid-1;

        }
        
        //after that, if there's no valid value-> false
        return false;
    }
};