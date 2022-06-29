class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        #using functional programming
        
        #generate the even numbers after filtering the nums list's elements
        even=list(filter(lambda x:x%2==0,nums))
        #generate the odd numbers after filtering the nums list's elements
        odd=list(filter(lambda x:x%2!=0,nums))
        #return a list of even numbers first, then the odd ones
        return even+odd