class Solution:
    def uncommonFromSentences(self, A: str, B: str) -> List[str]:
        lst1 = A.split(' ')
        lst2 = B.split(' ')
        for s in lst2:
            lst1.append(s)
        rtn = []
        for s in lst1:
            if lst1.count(s) == 1:
                rtn.append(s)

        return rtn
