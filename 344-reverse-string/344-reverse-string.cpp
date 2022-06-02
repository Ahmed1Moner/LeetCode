class Solution {
public:
    void reverseString(vector<char>& s) {
        /*
        traverse over the whole string with two pointers, acutally they're two indecies. one from the beggining, the other from the end.
        swap each letter indicated with his pointer with the second one until reaching the mid letter.
        */
        
        //initialize the two pointers
        int ptr1=0, ptr2=s.size()-1;
        
        //loop until the second pointer be bigger than the first one
        while(ptr1<=ptr2){
            
            //if the two pointers meet, skip this letter -> assuming that it swapped with himself.
   
            //swap the two letters
                int temp=s[ptr1];
                s[ptr1]=s[ptr2];
                s[ptr2]=temp;
            
            //move the pointers
            ptr1++,ptr2--;
        }
        return;
    }
};
