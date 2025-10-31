class Node:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next

head = Node("A", Node("B", Node("C")))
print(head.val)        # A
print(head.next.val)   # B
