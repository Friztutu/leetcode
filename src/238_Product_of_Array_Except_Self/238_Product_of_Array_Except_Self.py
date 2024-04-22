class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result = [1] * len(nums)

        for i in range(len(nums) - 2, -1, -1):
            result[i] = nums[i + 1] * result[i + 1]

        product = 1

        for i in range(0, len(nums)):
            result[i] = product * result[i]
            product *= nums[i]

        return result
    

if __name__ == "__main__":
    sol = Solution()
    print(sol.productExceptSelf([1,2,3,4]))

         