class Solution {
public:
    int maxArea(vector<int>& height) 
    {
       
        
        int i=0,j=height.size()-1;
        int sum =0,area;
        while(i < j)
        {
            area = min(height[i],height[j])* (j-i);
            sum = max(sum , area);
            if(height[i] < height[j])
            {
                i++;
            }
            else if(height[i] > height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return sum;
        
    }
    
};
