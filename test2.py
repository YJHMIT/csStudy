def level_queue(root):
    if root is None:
        return
        my_queue=[]
        node=root
        my_queue.append(node)
        while my_queue:
            node=my_queue.pop(0)
            print(node.elem)
            if node.lchild is not None:
                my_queue.append(node.lchild)
            if node.rchild is not  None:
                my_queue.append(node.rchild)