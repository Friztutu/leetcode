class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left = 0
        right = len(height) - 1
        result = right * min(height[left], height[right])

        while(left < right):
            square = (right - left) * min(height[left], height[right])

            if(square > result):
                result = square
            
            if(height[left] > height[right]):
                right -= 1
            else:
                left += 1

        return result
    

if(__name__ == "__main__"):
    s1 = Solution()
    print(f"result = {s1.maxArea([1,8,6,2,5,4,8,3,7])}")