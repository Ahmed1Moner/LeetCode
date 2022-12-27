class Solution {
public:
    int countTriples(int n) {
        
        //initialize a counter
        int counter=0;
        double temp;
        
        //loop over the whole array elements, nested
        for(int i=1;i<=n;i++)
            for(int j=i+1;j<=n;j++){
                
                //check if the Phitagors theory valid
                temp=sqrt(i*i+j*j);
                if(int(temp)==temp && (temp)<=n)
                    //-> add the counter by 2, as a can be swapped with b
                    counter+=2;
            }
        
        
        //return the final counter value
        return counter;
    }
};