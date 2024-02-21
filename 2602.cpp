class Solution
{
public:
    vector<long long> minOperations(vector<int> &nums, vector<int> &queries)
    {

        sort(nums.begin(), nums.end());

        vector<long long> answer;
        int m = queries.size();
        long long n = nums.size();

        // prefix sum
        long long sum[n], temp = 0;
        sum[0] = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            sum[i] = sum[i - 1] + nums[i];
        }

        for (int i = 0; i < m; i++)
        {
            int x = queries[i];

            // small er jonno end point
            int low = 0, high = nums.size() - 1;
            long long pos = -1;
            long long temp = 0;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (nums[mid] < x)
                {
                    pos = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            cout<<pos<<endl;
            if(pos == -1){
                temp = sum[n-1] - n*x;
            }
            else {
                temp = (pos+1ll)*x - sum[pos];
                temp += sum[n-1]-sum[pos] - (n-pos-1ll)*x;
            }
            answer.push_back(temp);
            
        }

        return answer;
    }
};
