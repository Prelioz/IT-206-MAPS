class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            
           vector<int> result;
    
           map<int,int> sum;
           int diff = 0;
    
           for(int i = 0;i<nums.size();i++){
             
             diff = target - nums[i];
    
            if(sum.count(diff)){
                
                result.push_back(sum[diff]);
                result.push_back(i);
                
    
            }
    
            else{
    
                sum[nums[i]] = i;
    
            }
    
        
    
           }
            
    
    
    
          return result;
    
    
        }
    
        
    
    };