class Solution {
public:
    
    void dfs(vector<vector<int>> &graph, vector<vector<int>> &ans, vector<int> &temp, int curr){
        
        //add initial value to the temp/single-path vector
        temp.push_back(curr);
        
        //if we find a valid path, current index = (n-1)
        if(curr==graph.size()-1)
            //-> add the valid path to the paths vector
            ans.push_back(temp);
        
        //if not yet
        else
            //loop over the whole sub-vector's elements of the graph
            for(auto item:graph[curr])
                //apply dfs on it
                dfs(graph, ans, temp, item);
        
        //backtrack / empty the temp vector
        temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        //initialize a paths vector
        vector<vector<int>>ans;
        //initialize a temporary single-path vector
        vector<int> temp;
        
        //call the helper dfs function with initial value of current node of 0
        dfs(graph, ans, temp, 0);
        
        //return the final paths vector's values
        return ans;
        
    }
};