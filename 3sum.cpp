class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size=nums.size();
        vector<vector<int>> v;
        if(size<=2)
            return v;
        if(size==3){
            if(nums[0]+nums[1]+nums[2]==0)
                 v.push_back(nums);
                return v;
        }
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<size-2;++i){
            while(i>0 && i<size-2 && nums[i-1]==nums[i]){
                i++;
            }
            int sum=-nums[i];
            int s=i+1;
            int e=size-1;
            
            while(s<e){
                if(nums[s]+nums[e]==sum){
                    vector<int> temp={nums[i],nums[s],nums[e]};
                    v.push_back(temp);
                    while(s<e && nums[s]==nums[s+1]){
                        s++;
                    }
                    while(s<e && nums[e-1]==nums[e]){
                        e--;
                    }
                    s++;
                    e--;
                }
               else if(sum>nums[s]+nums[e]){
                    s++;
                }
                else{
                    e--;
                }
                
            }
        }
        return v;
    }
};
