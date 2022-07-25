// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //initialize main two pointer-> one on the first element & one on the last one & a bad variable
        long long int left=0, right=n, bad=0;

        //loop while the left pointer is before or on the same position as the right one
        while(left <= right){
            //the third pointer mid-> is exactly the middle element between the main two ones
            long long int mid=(right+left)/2;
            
            //base case: if the bad version product is reached-> store its value in the bad
            if(isBadVersion(mid)){
                bad=mid;
                //move with the right pointer to the position before the mid
                right=mid-1;
            }            
            else
                //move with the left pointer to the position after the mid
                left=mid+1;
        }
        
        //after that-> return the bad value, the first bad one
        return bad;
    }
};