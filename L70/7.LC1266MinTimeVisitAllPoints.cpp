/*On a 2D plane, there are n points with integer coordinates points[i] = [xi, yi]. Return the minimum time in seconds to visit all the points in the order given by points.

You can move according to these rules:

In 1 second, you can either:
move vertically by one unit,
move horizontally by one unit, or
move diagonally sqrt(2) units (in other words, move one unit vertically then one unit horizontally in 1 second).
You have to visit the points in the same order as they appear in the array.
You are allowed to pass through points that appear later in the order, but these do not count as visits.*/

/*Logic:
The min time in which this traversal can be done will be equal to the sum of max difference in the distance between each coordinate(from TO to), either 
in x or y in absolute values.*/
class Solution {
    public:
        int timeCalc(vector<int>&to, vector<int>&from)
        {
            int x_diff = abs(to[0] - from[0]);
            int y_diff = abs(to[1] - from[1]);
            return max(x_diff,y_diff);
        }
    
        int minTimeToVisitAllPoints(vector<vector<int>>& points) {
            int checkSum = 0;
            for(int i = 0 ; i<points.size()-1;i++)
            {
                checkSum = checkSum + timeCalc(points[i+1],points[i]);
            }
            return checkSum;
        }
    };