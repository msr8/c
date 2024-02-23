import sys

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def get_list(self) -> list:
        # If the list is empty
        if not self.head:
            return []
        
        data = []
        curr_node = self.head
        while curr_node:
            data.append(curr_node.data)
            curr_node = curr_node.next
        return data


    def append(self, data):
        # If the list is empty
        if not self.head:
            self.head = Node(data)
            return
        
        curr_node = self.head
        # Loops until we reach a node whose "next" attribute is None
        while curr_node.next:
            curr_node = curr_node.next
        curr_node.next = Node(data)
    

    def delete(self, index:int):
        # If list is empty
        if not self.head:
            return
        
        # If we need to delete the first elem
        if index == 0:
            self.head = self.head.next
            return
        
        # Else, loops thro the list
        count = 1
        curr_node:Node = self.head
        while count < index:
            curr_node = curr_node.next
            count += 1

        curr_node.next = curr_node.next.next

    def __str__(self) -> str:
        return str(self.get_list())
    




linked_list = SinglyLinkedList()

for i in [67]:
    linked_list.append(i)

print(linked_list)
linked_list.delete(0)
print(linked_list)


'''
Creation
Insertion
Deletion
Modification
Searching
Sorting
Reversing
Merging
'''
