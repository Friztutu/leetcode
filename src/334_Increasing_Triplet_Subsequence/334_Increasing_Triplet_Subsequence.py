class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        minNumber, midNumber = None, None

        for number in nums:
            if(minNumber == None or minNumber >= number):
                minNumber = number
            elif(midNumber == None or midNumber >= number):
                midNumber = number
            else:
                return True
            
        return False


if __name__ == "__main__":
    sol = Solution()
    print(sol.increasingTriplet([1,2,3,4,5]))
    print(sol.increasingTriplet([5,4,3,2,1]))
    print(sol.increasingTriplet([2,1,5,0,4,6]))