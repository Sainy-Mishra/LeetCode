class Solution(object):
    def lengthOfLongestSubstring(self, s):
        hashlen=256
        n=len(s)
        hash=[-1]*hashlen
        maxlen=0
        r,l=0,0
        for i in range(hashlen):
            hash[i]=-1

        while r<n:
            if(hash[ord(s[r])]!=-1):
                l=max(hash[ord(s[r])]+1,l)
            maxlen=max(maxlen, r-l+1)
            hash[ord(s[r])]=r
            r=r+1
        return maxlen