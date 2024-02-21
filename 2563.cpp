#define ll long long int

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {

        sort(nums.begin(), nums.end());
        ll count = 0;

        deque<int> d;
        for(auto x:nums)
        {
            d.push_back(x);
        }

        for(auto x:nums)
        {
            d.pop_front();
            auto l=lower_bound(d.begin(), d.end(), lower-x);
            auto h = upper_bound(d.begin(), d.end(), upper-x);

            count += (h-l);
        }

        return count;
        
    }
};
