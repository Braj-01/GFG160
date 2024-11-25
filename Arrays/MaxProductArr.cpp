
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int pre = 1;
        int suf = 1;
        int n = arr.size();
        int ans = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(pre==0) pre = 1;
            if(suf==0) suf = 1;
            pre *= arr[i];
            suf *= arr[n-1-i];
            ans = max(ans,max(pre,suf));
        }
        return ans;
    }
};
