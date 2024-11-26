class solution{
 public:
  int circularSubarraySum(vector<int> &arr) {

        // your code here
         int n=arr.size();
         int maxsum=INT_MIN,sum=0;
         int totalsum=0;
         for(int i=0;i<n;i++)
         {
             sum+=arr[i];
             totalsum+=arr[i];
             maxsum=max(maxsum,sum);
             if(sum<0)
             {
                 sum=0;
             }
         }
         // We have to find the Minimum Sum subarry by Kadane's Algorithm
         int minsum=INT_MAX,sum1=0;
         for(int i=0;i<n;i++)
         {
             sum1+=arr[i];
             minsum=min(minsum,sum1);
             if(sum1>0)
             {
                 sum1=0;
             }
         }
         if(maxsum<0)
         {
             return maxsum;
         }
         return max(maxsum,totalsum-minsum);
     }
};
