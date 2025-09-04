class LinkedList:
    
    class Node:                             # Inner class for linked list nodes
        def __init__(self, val=0, next=None):
            self.val = val                  # Value of the node
            self.next = next                # Pointer to the next node
    
    def __init__(self):
        self.head = None                    # Head of the linked list
        self.size = 0
    
    def get(self, index: int) -> int:
        if index < 0 or index >= self.size: # Index out of bounds
            return -1
        current = self.head                 # Start from the head
        for _ in range(index):              # Traverse to the desired index
            current = current.next          # Move to the next node
        return current.val

    def insertHead(self, val: int) -> None:
        new_node = self.Node(val)           # Create a new node
        new_node.next = self.head           # Point new node to the current head
        self.head = new_node                # Update head to the new node
        self.size += 1                      # Increment size of the list
        

    def insertTail(self, val: int) -> None:
        new_node = self.Node(val)           # Create a new node
        if not self.head:                   # If the list is empty
            self.head = new_node            # New node becomes the head
        else:
            current = self.head
            while current.next:             # Traverse to the end of the list
                current = current.next      # Move to the next node
            current.next = new_node         # Append the new node at the end
        self.size += 1                      # Increment size of the list
        

    def remove(self, index: int) -> bool:
        if index < 0 or index >= self.size:
            return False
        if index == 0:
            self.head = self.head.next
        else:
            current = self.head             # Start from the head
            for _ in range(index - 1):      # Traverse to the node before the one to be removed
                current = current.next      # Move to the next node
        current.next = current.next.next    # Bypass the node to be removed
        self.size -= 1                      # Decrement size of the list
        return True
        

    def getValues(self) -> List[int]:
        values = []                         # List to store node values
        current = self.head                 # Start from the head
        while current:                      # Traverse the entire list
            values.append(current.val)      # Append current node's value to the list
            current = current.next          # Move to the next node
        return values