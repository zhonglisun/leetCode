#include <iostream>
#include <limits>
#include "solution.h"


Solution::Solution()
{

}
vector<int> Solution::twoSum(vector<int>& nums, int target)
{
   int i = 0;
   vector<int> result;
   for(i =0; i < nums.size(); i++)
   {
       int y = target - nums[i];
       for( int j = 0; j < nums.size(); j++)
       {
          if (j == i)
             continue;
          if (y == nums[j])
          {
             result.push_back(i);
             result.push_back(j);
             cout << "[" << i << "," << j << "]" <<endl;
             return result;
          }
       }
   }
   return  result;
}

int Solution::reverse(int x)
{
   int result = 0;
//   cout << numeric_limits<int>::max() << endl;
//   cout << numeric_limits<int>::min() << endl;
   while( x != 0 )
   {
      if( result > numeric_limits<int>::max() / 10 || (result ==  numeric_limits<int>::max() / 10) && x % 10 > 7 )
         return 0;
      if( result < numeric_limits<int>::min() / 10 || (result ==  numeric_limits<int>::max() / 10) && x % 10 <-8 )
         return 0;
      result = result * 10 + x % 10;
      x = x / 10;
   }
   cout << result << endl;
   return result;
}
