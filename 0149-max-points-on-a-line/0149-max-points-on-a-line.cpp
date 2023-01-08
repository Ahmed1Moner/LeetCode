class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
                
        if(points.size()<=2)
            return points.size();
        
        int res=0;
        
        for(int i=0;i<points.size();i++){
            
            for(int j=i+1;j<points.size();j++){
                
                int x1=points[i][0];
                int x2=points[j][0];
                int y1=points[i][1];
                int y2=points[j][1];
                
                int counter=2;
                
                for(int k=0;k<points.size() && k!=i && k!=j;k++){
                    
                    int x=points[k][0];
                    int y=points[k][1];
                    
                    if(((y2-y1)*(x-x1))==((x2-x1)*(y-y1)))
                        counter++;
                }
                
                res=max(counter, res);
            }
        }
        
        return res;
    }
};