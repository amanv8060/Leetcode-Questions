class Solution:
    def reverse(self, x: int) -> int:
        y=1
        if x<0:
            x=abs(x)
            y=-1
        s=list(str(x))[::-1]
        x=int("".join(s))
        x=x*y
        if x < -2**31 or x > 2**31 - 1:
            return 0
        return x 
