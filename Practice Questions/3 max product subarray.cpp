class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        //boundary case
        if(nums.size()==0)
            return 0;



        int max_so_far = nums[0];
         int min_so_far = nums[0];
          int result  = max_so_far;

          for(int i=1; i<nums.size(); i++)
          {
              int curr= nums[i];

              int temp_max = max(curr, max(max_so_far*curr, min_so_far*curr));  
              min_so_far = min(curr, min(max_so_far*curr, min_so_far*curr)); 

              max_so_far=temp_max;

              result = max(result,max_so_far);               
         }
         return result;
        
    }
};


/*       BRUTE FORCE APPROCH O(N^2)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = nums[0];

        for(int i=0; i<nums.size(); i++)
        {
            int prod=1;
            for(int j=i; j<nums.size(); j++)
            {
                prod*=nums[j];
                result = max(result, prod);
            }

        }
        return result;
    }
};
*/