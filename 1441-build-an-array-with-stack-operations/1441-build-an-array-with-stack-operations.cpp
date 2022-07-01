class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        //initialize a string vector & a counter counts from 1, as both n & target starts from 1
        vector<string> res;
        int counter=1;
        
        //loop over the whole vector elements
        for(int i=0;i<target.size();i++){
            //if the vector current element equals to the counter-> add "Push" to the new vector
            if(target[i]==counter){
                res.push_back("Push");
            }
            //if not-> add both "Push" & "Pop"-> eliminates each other & delay the i counter by one back
            else{
                res.push_back("Push");
                res.push_back("Pop");
                i--;
            }
            //add the counter by one
            counter++;
        }
        return res;
    }
};