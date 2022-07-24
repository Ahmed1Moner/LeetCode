class Solution {
public:
    int mySqrt(int x) {
        //before calculating-> if the given number is either 0 or 1-> return it again
        if(x==0 || x==1)
            return x;
        
        //initialize main two pointer-> one on the first element & one on the last one
        int left=0,right=x,num=0;
        
        //loop while the left pointer is before or on the same position as the right one
        while(left<=right){
            //the third pointer mid-> is exactly the middle element between the main two ones
            long long int mid=left+(right-left)/2;
            long long dou=mid*mid;
            
            //base case: if the current mid value raised to the power of 2 equals to the target number-> return its value
            if(dou==x)
                return mid;
            //case 2: if this value is smaller than the target one-> move the left pointer to the position after the mid
            if(dou<x){
                left=mid+1;
                //save the mid value to a variable
                num=mid;
            }
            //case 3: if this value is bigger than the target one-> move the right pointer to the position before the mid
            else
                right=mid-1;
        }
        
        //after that-> return the saved variable value
        return num;
    }
};