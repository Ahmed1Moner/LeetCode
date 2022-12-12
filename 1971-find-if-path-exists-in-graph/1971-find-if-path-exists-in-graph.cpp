class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
    //build the graph
        
        //build the adjacency list of the given vector elements
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][1]].push_back(edges[i][0]);
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        
    //BFS
        
        //initialize a vector for visited elements
        vector<int> visited(n, false);
        //a queue for BFS
        queue<int>q;
        //start at the source point
        q.push(source);
        //mark it as visited
        visited[source]=true;
        
        //loop while the queue still having elements
        while(!q.empty()){
            
            //save the current top element in the queue & remove it
            int top=q.front();
            q.pop();
            
            //check if we found the destination-> path exists
            if(top==destination)
                return true;
            
            //loop over the whole neighbour elements of the current element in the graph
            for(auto item:adj[top]){
                
                //if it's not visited yet
                if(!visited[item]){
                    //push it in the queue & mark it as visited
                    q.push(item);
                    visited[item]=true;
                }
            }
        }
        
        //after all, if there's no path exists-> false
        return false;
    }
};