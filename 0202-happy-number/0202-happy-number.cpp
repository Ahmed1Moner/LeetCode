class Solution {
public:
    bool isHappy(int n) {
        
        //base case 1
        if(n==1 || n==7)
            return true;
        
        //base case 2
        if(n>1 && n<=9)
            return false;
        
        long long int sum=0;
        int rem=0;
        
        while(n>0){
            rem=n%10;    
            sum+=rem*rem;  
            n/=10;
        }
        
        return isHappy(sum);
        
    }
};