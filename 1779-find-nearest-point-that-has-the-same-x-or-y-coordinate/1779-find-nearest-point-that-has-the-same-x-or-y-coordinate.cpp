class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        //initialize a position & minimum possible absolute value & calculated distance variables
        int minValue=INT_MAX, dis=0, index=-1;
        
        //loop over the whole array elements
        for(int i=0;i<points.size();i++){
            
            //check if the x-coordinates are equals or the y ones
            if(points[i][0]==x || points[i][1]==y){
                //calculate the manhattan distance between the two points
                dis=abs(points[i][0]-x)+abs(points[i][1]-y);            
                
                //check if the current distance is smallest reached one
                if(dis<minValue){
                    //if no-> save the lowest value
                    minValue=dis;
                    //also, the current updated index
                    index=i;
                }
            }
        }
        
        //return the index & if there's no one-> return -1 as it initialized before
        return index;
    }
};