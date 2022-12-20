// Link: https://practice.geeksforgeeks.org/problems/second-largest3735/1

int print2largest(int arr[], int n) 
{
	    int count = 0 ; // We first check if the array contains all the same value or not using count 
	    int duplicate = arr[0] ;
	    
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(duplicate == arr[i])
	            count += 1 ;
	    }
	    
	    if(count == n) // If all the elements are same, then we won't get any Second Largest Value so we return -1
	        return -1 ;
	    
	    int largest = 0 ; 
	    
	    for(int i = 0 ; i < n ; i++) // We calculate the Largest using normal check
	    {
	        if(largest < arr[i])
	            largest = arr[i] ;
	    }
	    
	    int maxi = 0 ; // Maxi will contain our 2nd Largest Element
	    
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(arr[i] == largest) // If maxi is equal to largest, we skip that element immediately
	            continue ;
	            
	        if(maxi < arr[i]) // Otherwise we update maxi 
	            maxi = arr[i] ;
	    }
	    
	    return maxi ; // At the end, we return maxi
	}

// Time Complexity:  O(N)
// Space Complexity: O(1)
