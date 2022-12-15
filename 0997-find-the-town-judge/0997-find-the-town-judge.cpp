class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        //befor starting
        if(n==1)
            return 1;
        
        //initialize in & out degrees' maps
        map<int, int> in, out;
        
        //loop over the whole 2d-vector's elements
        for(int i=0;i<trust.size();i++){
            
            //for the first element-> +1 for out-degree & +0 for in-degree
            in[trust[i][0]]+=0;
            out[trust[i][0]]++;
            //for the second element-> +1 for in-degree & +0 for out-degree
            in[trust[i][1]]++;
            out[trust[i][1]]+=0;
        }
        
    //to satisfy the coditions-> Judge must have 0 out-degree & (n-1) in-degree
        
        //loop over the whole out-degree map
        for(auto item:out)
            
            //check 0 out-degree
            if(item.second==0)
                //check (n-1) in-degree
                if(in[item.first]==n-1)
                    //if pass-> return the key
                    return item.first;
        
        
        //after all, if it doesn't pass-> DNE
        return -1;
    }
};