class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        tmp = 0
        
        for i in range(len(nums)):
            if nums[i-tmp] == val:
                nums.pop(i-tmp)
                tmp += 1
                
        return len(nums)
