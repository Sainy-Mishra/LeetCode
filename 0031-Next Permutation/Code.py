class Solution(object):
    def nextPermutation(self, nums):
        l = len(nums)
        
        # Step 1: find first decreasing number from right
        blue = -1
        for i in range(l-2, -1, -1):
            if nums[i] < nums[i+1]:
                blue = i
                break

        # Step 2: if blue found, swap with next bigger number
        if blue != -1:
            for j in range(l-1, blue, -1):
                if nums[j] > nums[blue]:
                    nums[blue], nums[j] = nums[j], nums[blue]
                    break
        
        # Step 3: reverse the remaining part
        nums[blue+1:] = reversed(nums[blue+1:])
