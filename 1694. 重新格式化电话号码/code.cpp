class Solution:
    def reformatNumber(self, number: str) -> str:
        lst = []
        rtn = ''
        length = 0
        for s in number:
            if s != ' ' and s != '-':
                lst.append(s)
                length += 1
        if length <= 3:
            while lst:
                rtn += lst.pop(0)
            return rtn

        tmp = length % 3
        cnt = length // 3
        
        if tmp == 1:
            lst.insert(length-2, '-')
            for i in range(1, cnt):
                lst.insert(i*3+(i-1), '-')
            
            while lst:
                rtn += lst.pop(0)
            return rtn
        elif tmp == 2:
            for i in range(1, cnt+1):
                lst.insert(i*3+(i-1), '-')
            while lst:
                rtn += lst.pop(0)
            return rtn
        else:
            for i in range(1, cnt):
                lst.insert(i*3+(i-1), '-')
            while lst:
                rtn += lst.pop(0)
            return rtn
