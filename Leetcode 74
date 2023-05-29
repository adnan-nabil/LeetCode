class Solution {

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int a[n*m], c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a[c]=matrix[i][j];
                c++;
            }
        }

        bool ans = 0;
        int low=0, high = (n * m)-1;
        while(low<=high)
        {
            if(a[low]==target)
            {
                return true;
            }
            int mid = low + (high-low)/2;
            if(a[mid]==target)
            {
                return true;
            }else

            {
                if(a[mid]<target)
                {
                    low = mid + 1;
                }else
                {
                    high = mid -1 ;
                }
            }

        }

       return false;
    }
};
