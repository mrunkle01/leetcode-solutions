class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sFreq = {}
        tFreq = {}
        if len(s) != len(t):
            return False
        for n in range(len(s)):
           sFreq[s[n]] = sFreq.get(s[n], 0) + 1
           tFreq[t[n]] = tFreq.get(t[n], 0) + 1
        if sFreq == tFreq:
            return True
        return False
