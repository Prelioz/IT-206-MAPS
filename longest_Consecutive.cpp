class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
    
           if(nums.empty()){
            return 0;
           }
    
    
            map<int,int> sequence;
            int streak = 1;
            int longstreak = 1;
    
            for(int i = 0;i<nums.size();i++){
    
                if(!sequence.count(nums[i])){
                     
                     sequence[nums[i]] = i;
    
                }
            }
             
            map<int,int> :: iterator itr = sequence.begin();
     
           
            for( itr = sequence.begin();itr != sequence.end();itr++){
    
                 map<int,int> :: iterator nextitr = next(itr);
                 
                  
                    if(itr->first + 1 == nextitr->first && nextitr != sequence.end()){
    
                        streak++;
    
    
                    }
    
                    else{
    
                        longstreak = max(streak, longstreak);
                        streak = 1;
    
                    }
    
            }
            
            
            
    
    
    
            
          return longstreak;
    
            
      
    }
    
    
        };
    
    
    