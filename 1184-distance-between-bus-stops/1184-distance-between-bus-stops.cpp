class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        //base case: if it starts & ends at the same point-> return 0
        if(start==destination)
            return 0;
        
        int size=distance.size();
        int path1=0, path2=0,i=0;
        
        //step 1: make the pointer starts from the start point
        i=start;
        //loop over the whole array elements until the final point
        while(i!=destination){
            //add the distances to the way 1 & add the pointer by a step forward
            path1+=distance[i];
            i=(i+1)%size;
        }
        
        //step 2: make the pointer starts from the end point
        i=destination;
        //loop over the whole array elements until the start point
        while(i!=start){
            //add the distances to the way 2 & add the pointer by a step back
            path2+=distance[i];
            i=(i+1)%size;
        }
        
        //return the minimum number of steps between the two paths
        return path1<path2 ? path1 : path2;

    }
};