class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        int count = 0;

        int i = 0, j;

        if(n % 2 == 0)
        {
            j = n/2;
        }else
        {
            j = (n/2) + 1;
        }

        for(j; j < n; j++)
        {
            if(nums[j]>=(nums[i]*2))
            {
                count += 2;
                i++;
            }
        }

        return count;
        
    }
};
