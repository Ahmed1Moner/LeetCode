class Solution {
public:
    int sum(int num1, int num2) {
        
        //initialize main two pointer-> one on the first element & one on the last one
        long long int left=INT_MIN,right=INT_MAX;
        
        //loop while the left pointer is before or on the same position as the right one
        while(left<=right){
            //the third pointer mid-> is exactly the middle element between the main two ones
            long long int mid=(right+left)/2;
            
            //base case: if the value of the sum of the numbers reached-> return it
            if(mid==num1+num2) return mid;
            //case 2: if the current value is less than the required one-> move with the left pointer to point on the position after the middle
            if(mid<num1+num2) left=mid+1;
            //case 3: if the current value is more than the required one-> move with the right pointer to point on the position before the middle
            else right=mid-1;
        }
        
        //if no returned value-> return anything else-> e.x -1 || left value
        return left;
    }
};