class MinStack:

    def __init__(self):
        self.minStack = []
        self.min = None

    def push(self, val: int) -> None:
        if self.minStack:
            self.minStack.append( val - self.min )
            if val < self.min:
                self.min = val
        else:
            self.min = val
            self.minStack.append(0)

    def pop(self) -> None:
        if self.minStack:
            i = self.minStack.pop()
            if i < 0:
                self.min = self.min - i

    def top(self) -> int:
        i = self.minStack[-1]
        if i > 0:
            return i + self.min
        else:
            return self.min

    def getMin(self) -> int:
        return self.min