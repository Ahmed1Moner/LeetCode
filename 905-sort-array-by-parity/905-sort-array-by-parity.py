class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        #using iteration
        
        #initialize a two lists, one for even numbers & one for odd ones
        even=[]
        odd=[]
        
        #loop over the whole list numbers
        for i in nums:
            #if the number is even, add it to the even list
            if(i%2==0):
                even.append(i)
            #if the number is odd, add it to the odd list
            else:
                odd.append(i)
                
        #return a list of even numbers first, then the odd ones        
        return even+odd
    
    
#     #using functional programming
        
#         #generate the even numbers after filtering the nums list's elements
#         even=list(filter(lambda x:x%2==0,nums))
#         #generate the odd numbers after filtering the nums list's elements
#         odd=list(filter(lambda x:x%2!=0,nums))
#         #return a list of even numbers first, then the odd ones
#         return even+odd