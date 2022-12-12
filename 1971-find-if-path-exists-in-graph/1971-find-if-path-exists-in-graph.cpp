class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
    //build the graph
        
        //build the adjacency list of the given vector elements
        unordered_map<int,vector<int>> adj; 
        for(auto e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
    //BFS
        
        //initialize a vector for visited elements
        vector<int> visited(n, false);
        //a stack for BFS
        stack<int>st;
        //start at the source point
        st.push(source);
        //mark it as visited
        visited[source]=true;
        
        //loop while the stack still having elements
        while(!st.empty()){
            
            //save the current top element in the queue & remove it
            int top=st.top();
            st.pop();

            //check if we found the destination-> path exists
            if(top==destination)
                return true;
            
            
            //loop over the whole neighbour elements of the current element in the graph
            for(auto item:adj[top]){
                
                //if it's not visited yet
                if(!visited[item]){
                    //push it in the queue & mark it as visited
                    st.push(item);
                    visited[item]=true;
                }
            }            
        }
        
        return false;
        
    }
};