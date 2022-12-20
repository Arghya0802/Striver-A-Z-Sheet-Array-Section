// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
private:

// ReverseArray() reverses the array from low till high index[both inclusive]
  
void reverseArray(int low , int high , vector<int> &arr)
{
    while(low <= high)
    {
        swap(arr[low] , arr[high]) ;

        low  += 1 ;
        high -= 1 ;
    }

    return ;
}

public:
    bool check(vector<int>& nums) 
    {
        int n = nums.size() ;
        
        // We try to calculate the point from where the array might be rotated and then rotate the array and check if the rotated array is sorted or not
        int k = -1 ;

        for(int i = 0 ; i < n - 1 ; i++)
        {
            if(nums[i] <= nums[i + 1])
                continue ;

            if(k == -1)
                k = i + 1 ;

            else // If we need to update k more than once, that means the array is neither sorted nor rotated
                return false ;

        }

        if(k == -1) // If K still remains -1, it means array is already sorted
            return true ; // So we diretly return true

        // Else we apply the Reversal Algorithm to get our Original Sorted Array
        reverseArray(0 , k - 1 , nums) ;
        
        reverseArray(k , n - 1 , nums) ;

        reverseArray(0 , n - 1 , nums) ;
        
        // After getting our original array back, we check if it's now sorted or not
        for(int i = 0 ; i < n - 1 ; i++)
        {
            if(nums[i] > nums[i + 1])
                return false ;
        }

        return true ;
    }
};

// Time Complexity:  O(N)
// Space Complexity: O(1)
