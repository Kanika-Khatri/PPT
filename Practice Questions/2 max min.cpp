//{ Driver Code Starts
/* Driver program to test above function */

#include<iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
   
   int mini(int A[], int n)
   {
       int min=A[0];
   
       for(int i=0; i<n; i=i+2)
    	    {

    	            if(A[i]<=min)
    	            min = A[i];
    	            if (i + 1 < n && A[i + 1] <= min)
    	               min = A[i+1];
    	          
             }
             return min;
   }
   int maxi(int A[], int n){
       
       int max= A[0]; 
   
       for(int i=0; i<n; i=i+2)
    	    {
    	 
    	            if(A[i]>=max)
    	                max=A[i];
    	            if (i + 1 < n && A[i + 1] >= max)
    	                max=A[i+1];
    	      
       
             }
             return max;
       
       
   }
    int findSum(int A[], int N)
    {
    	//code here.
    int maxVal= maxi(A,N);
    int minVal= mini(A,N);

    	return (minVal+maxVal);
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends