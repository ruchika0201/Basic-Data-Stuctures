class node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.data = key
    
class bt:
    def __init__(self, data):
        self.root = node(data)
    def preorder(self, start, trav):
        if start:
            #preorder(self.left)
            print(self.data, end = " ")
            preorder(self.right)


tree = bt(2)
tree.root.left = node(3)
tree.root.right = node(4)
tree.root.left.right = node(9)

tree.preorder()

