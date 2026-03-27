class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
       dummy=ListNode(0) 
        carry=0 
         while l1 or l2 or carry : 
            value1= l1.val if l1 else 0
            value2= l2.val if l2 else 0
            total=value1+value2+carry
            carry=total//10     
            new_number=total % 10  
            current.next=ListNode(new_number)
            current=current.next    
            if l1: l1=l1.next 
            if l2: l2=l2.next 
        return dummy.next
