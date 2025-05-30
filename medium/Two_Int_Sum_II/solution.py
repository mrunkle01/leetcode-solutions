from typing import List
"""
Problem Guidelines
Given an array of integers numbers that is sorted in non-decreasing order.

Return the indices (1-indexed) of two numbers, [index1, index2], such that they add up
to a given target number target and index1 < index2. Note that index1 and index2 cannot be equal,
therefore you may not use the same element twice. There will always be exactly one valid solution.
Your solution must use O(1) additional space.

"""
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l = 0
        r = len(numbers) - 1
        while l < r:
            if numbers[l] + numbers[r] == target:
                return [l+1, r+1]
            elif numbers[l] + numbers[r] < target:
                l += 1
            else:
                r -= 1
        return []