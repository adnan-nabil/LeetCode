class Solution:
    def maxArea(self, height: List[int]) -> int:
        l, ans, r = 0,0, len(height)-1
        while(l < r):
            cur = (r-l)*min(height[l], height[r])

            ans = max(ans, cur)

            if(height[l]<height[r]):
                l += 1
            else:
                r -= 1
                    
                              
        return ans   