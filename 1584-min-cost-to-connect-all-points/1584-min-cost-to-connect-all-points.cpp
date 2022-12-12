class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {

    //initialize some variables & vectors
        
        //total minimum spanning tree's cost
        int total = 0;
        //number of connected edges
        int connectedEdge = 0;
        //vector of false flags for all edges at first, none of them is visited yet
        vector<bool> visited(points.size(),false);
        //vector of minimum distances, max at first
        vector<int> minDis(points.size(),INT_MAX);
        
        //start at any random point, ex: first one
        minDis[0] = 0;
        
    //loop while E<V-1
        while(connectedEdge <= points.size()-1){
            
            //initial values of current node of -1 & current edge's weight of max
            int currMinEdge = INT_MAX;
            int currNode = -1;
            
            //loop over the points vector
            for (int i = 0; i < points.size(); i++){
                
                //if the current edges isn't visited yet & 
                if(!visited[i] && currMinEdge > minDis[i]){
                    currMinEdge = minDis[i];
                    currNode = i;
                }
            }
            
            //loop again over the whole points vector      
            for (int i = 0; i < points.size();i++){
                
                //calculate the manhattan distance between two points
                int weight = abs(points[currNode][0] - points[i][0]) + abs(points[currNode][1] - points[i][1]);
                
                //if the current point isn't visited yet & the current point's weight < minimum distance reached until now-> update the min distance
                if (!visited[i] && minDis[i] > weight)
                    minDis[i] = weight;
            }
            
            
        //update adjacent nodes' values
            
            //add minimum edge's weight to the total cost
            total += currMinEdge;
            //add the number of connected edges by 1
            connectedEdge++;
            //make the current node visited in the vector
            visited[currNode] = true;
            
        }
        
        //return the total MST cost
        return total;
        
        
    }
};