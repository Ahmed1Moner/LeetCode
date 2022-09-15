class Solution {
public:
    
    //helper function to check if the middle pointer value of the range is a valid value to be divided or not
    bool valid(int mid, vector<int> &quantities, int n){
        
        //initialize a counter
        int counter=0;

        //loop over the whole array elements
        for(int qu:quantities){
            //check if the current element is smaller than the mid
            if(qu<mid)
                //if yes-> add the counter by one
                counter++;
            
            else{
                //if no->initialize a temp partial sum variable
                int parSum=qu;
                
                //loop until getting 0 
                while(parSum>0){
                    //subtract the mid value from the current sum
                    parSum-=mid;
                    //add the counter by one
                    counter++;
                }
            }
        }
        
        //check if the counted products is valid or not compared to the allowed ones
        return counter<=n;
    }
    
    
    
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        //handle invalid cases
        if(n<1)
            return 0;
  
        //initialize mainly two pointers-> one on the minimum possible value in the array & one on the maximum one
        int left=1, right=*max_element(quantities.begin(), quantities.end()), ans=-1;
        
        //loop while the left pointer is before the right one
        while(left<right){
            //the third pointer mid-> is exactly the middle element between the main two ones
            int mid=left+(right-left)/2;
        //call the helper function
            if(valid(mid, quantities, n))
                //case 1: if yes, valid-> move the right pointer to the mid position
                right=mid;
            
            else
                //case 2: if not-> move the left pointer to the position after the mid one
                left=mid+1;
                
        }
        
        //return the right position 
        return right;
    }
};