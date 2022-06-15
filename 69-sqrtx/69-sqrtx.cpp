class Solution {
public:
    int mySqrt(int x) {
        int res;
        //root 0-> zero
        if(x==0){return 0;}
        //for only positive numbers
        if(x>0){
            //result = the number power half
            res=pow(x, 0.5);
        }
        return res;
    }
};