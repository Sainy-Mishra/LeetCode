class Solution(object):
    def maxSubArray(self, nums):
        l=len(nums)
        maxsum=nums[0]
        sum=0
        for i in nums:
            if (sum<0):
                sum=0
            sum+=i
            maxsum=max(maxsum,sum)
        return maxsum