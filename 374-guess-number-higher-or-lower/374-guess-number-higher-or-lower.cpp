/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        //initialize main two pointer-> one on the first element & one on the last one
        long long int left=0, right=n;
        
        //if the given number is one-> return it
        if(n==1) return n;
            
    //loop while the left pointer is before or on the same position as the right one
        while(left<=right){
            //the third pointer mid-> is exactly the middle element between the main two ones
            long long int mid=left+(right-left)/2;
            //a temp varialbe to save the result of the guess function
            int temp=guess(mid);
            
            //base case: if the value is equal to 0-> return the mid value
            if(temp==0)
                return mid;
            //case 2: if the value is equal to 1-> move the left pointer to the position after the mid
            else if(temp==1)
                left=mid+1;
            //case 3: if the value is equal to 1-> move the right pointer to the position before the mid
            else if(temp==-1)
                right=mid-1;
        }
        
        //if no returned value-> return -1
        return -1;
    }
};