class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        i=0
        j=0
        k=n-1

        while(j<=k):
            if(nums[j]==2):
                nums[j],nums[k]=nums[k],nums[j]
                k=k-1
            elif(nums[j]==1):
                j+=1
            else:
                nums[j],nums[i]=nums[i],nums[j]
                j+=1
                i+=1
        return nums