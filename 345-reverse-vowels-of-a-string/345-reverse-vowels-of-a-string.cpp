class Solution {
public:
    string reverseVowels(string s) {
        
        /*
        traverse over the whole string with two pointers, acutally they're two indecies. one from the beggining, the other from the end.
        also, initialize two counters, one for each pointer.
        if the pointer1 meet an vowel string, add the first counter by 1, the same way for pointer2
        then, if both counters aren't zeros, swap the letters of both indecies, ptr1 & ptr2
        */
        
        //initialize indecies, counters
        int ptr1=0,ptr2=s.length(),counter1=0,counter2=0;
        
        //loop doesn't continue after reaching the mid letter
        while(ptr1<ptr2){
            //if ptr1 meets a letter, add counter1 by 1, else move to the next letter
             if(s[ptr1]=='a'||s[ptr1]=='e'||s[ptr1]=='i'||s[ptr1]=='o'||s[ptr1]=='u'||s[ptr1]=='A'||s[ptr1]=='E'||s[ptr1]=='I'||s[ptr1]=='O'||s[ptr1]=='U')
            counter1++;
            else
                ptr1++;
            
            //if ptr2 meets a letter, add counter2 by 1, else move to the previous letter

                            if(s[ptr2]=='a'||s[ptr2]=='e'||s[ptr2]=='i'||s[ptr2]=='o'||s[ptr2]=='u'||s[ptr2]=='A'||s[ptr2]=='E'||s[ptr2]=='I'||s[ptr2]=='O'||s[ptr2]=='U')
            counter2--;
            else
                ptr2--;
        
        //if the two counters aren't zeros, swap the two letters, the two pointers point on them
        //reset the two counters to zeros, move with pointers
            
        if(counter1!=0&&counter2!=0){
            int temp=s[ptr1];
            s[ptr1]=s[ptr2];
            s[ptr2]=temp;
            
            counter1=0, counter2=0;
            ptr1++,ptr2--;
        }
        }
        return s;
    }
};
