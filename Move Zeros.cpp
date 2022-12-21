// Link: https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    
    // Similar to how we have removed duplicates from sorted array, we will keep on Swapping the Non-Zero Elements using our Index pointer
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size() ;
        
        int index = 0 ; // Helps us to move all the Non-Zero Elements at the front
        
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] != 0) 
            {
                swap(nums[i] , nums[index]) ;
                index += 1 ;
            }
        }
        
        return ;
    }
};

// Time Complexity:  O(N)
// Space Complexity: O(1)
