class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        left, right = 0, 1
        numsLen = len(nums)

        while(left < numsLen and right < numsLen):
            while(left < numsLen and nums[left]): left += 1
            
            right = left + 1

            while(right < numsLen and not nums[right]): right += 1

            if(left < numsLen and right < numsLen):
                nums[left], nums[right] = nums[right], nums[left]
                left += 1
                right += 1
            
        return nums
    

if __name__ == "__main__":
    sol = Solution()
    print(sol.moveZeroes([0,1,0,3,12]))
    print(sol.moveZeroes([0]))
    print(sol.moveZeroes([0,1]))
    print(sol.moveZeroes([4,2]))