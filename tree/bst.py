class bst:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right=None
    def add_child(self, data):
        if data == self.data:
            return
        if data<self.data:
            if self.left:
                self.left.add_child(data)
            else:
                self.left = bst(data)
        else:
            if self.right:
                self.right.add_child(data)
            else:
                self.right = bst(data)
    def in_order(self):
        elem = []
        if self.left:
            elem += self.left.in_order()

        elem.append(self.data)

        if self.right:
            elem+=self.right.in_order()

        return elem

def build_tree(elements):
    root = bst(elements[0])
    for i in range(1, len(elements)):
        root.add_child(elements[i])
    return root

            
if __name__ == '__main__':
    numb = [17, 4, 1, 20, 9, 23, 18, 34]
    r = build_tree(numb)
    result = r.in_order()
    print(result)


