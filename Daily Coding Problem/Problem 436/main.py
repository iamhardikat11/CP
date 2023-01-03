class Stack:
    def __init__(self):
        self.list = []
        for i in range(3):
            list.append([])

    def pop(self, stack_number):
        if len(list[stack_number-1]) == 0:
            pass
        else:
            list[stack_number-1].pop()

    def push(self, item, stack_number):
        list[stack_number-1].append(item)