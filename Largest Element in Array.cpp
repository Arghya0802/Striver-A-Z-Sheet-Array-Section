// Link: https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/0

int largest(vector<int> &arr, int n)
{
    int maximum = arr[0] ; // Initially we assume the Largest Number as Element in 0-th Index
        
    for(int nums : arr) // We iterate over the arr[]
    {
        if(maximum < nums) // Whenever we get any larger value than we have previously encountered, we update maximum
            maximum = nums ;
    }
        
    return maximum ;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)
