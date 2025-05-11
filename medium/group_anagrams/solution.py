from typing import List
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hm = {}
        for i in strs:
            s = tuple(sorted(i))
            if s in hm:
                hm[s].append(i)
            else:
                hm[s] = [i]
        return list(hm.values())






