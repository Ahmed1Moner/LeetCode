class Solution {
public:
    bool judgeSquareSum(int c) {
        
        //handle invalid cases
        if(c<0)
            return false;
        
        //initialize mainly two pointer-> one on initial value 0 & one on the root of given value
        long long left=0, right=sqrt(c);
        
        //loop while the left pointer is before or on the same position as the right one
        while(left<=right){
            
            //the third pointer mid-> is exactly the sum of the squrares of the two pointers
            long long curr=pow(left,2)+pow(right,2);
            
            //base case: if his value equals the given number-> true
            if(curr==c)
                return true;
            
            //case 2: if his value smaller than the given number-> move the left pointer by one forward
            else if(curr<c)
                left++;
            
            //case 3: if his value greater than the given number-> move the right pointer by one back
            else
                right--;
        }
        
        //after that, if there's no valid value-> false
        return false;
    }
};