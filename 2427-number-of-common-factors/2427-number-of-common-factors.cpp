class Solution {
public:
    int commonFactors(int a, int b) {
              
        int counter=0, maxVal=max(a,b);
        
        for(int i=1;i<=maxVal;i++)
            if(a%i==0)
                if(b%i==0)
                    counter++;
        
        
        return counter;
    }
};