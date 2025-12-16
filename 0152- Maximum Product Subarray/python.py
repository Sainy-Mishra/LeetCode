class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxp = nums[0]
        minp = nums[0]
        ans = nums[0]

        for i in range(1, len(nums)):
            if nums[i] < 0:
                maxp, minp = minp, maxp  # swap

            maxp = max(nums[i], maxp * nums[i])
            minp = min(nums[i], minp * nums[i])

            ans = max(ans, maxp)

        return ans