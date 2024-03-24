# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        # Find the middle node
        slow = fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        # Reverse the second half
        prev, curr = None, slow
        while curr:
            temp      = curr.next
            curr.next = prev
            prev      = curr
            curr      = temp
        
        # Merge the two halves
        right = prev
        left  = head

        while right.next:
            temp      = left.next
            left.next = right
            left      = temp

            temp       = right.next
            right.next = left
            right      = temp


'''
What my approach is doing is:

1) Dividing the list into two halves
2) Reversing the second half
3) Merging the two halves in the fashion that my overlord (leetcode) wants me to

Visualise it to really understand it. Or watch neetcode's vid on it, I havent seen it but he has a way with helping you visualise stuff
'''