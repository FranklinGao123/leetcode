class Solution:
    def romanToInt(self, s: str) -> int:
        total = 0
        last = ''
        for c in s:
            if c == 'I':
                total += 1
            elif c == 'V':
                if last == 'I':
                    total += 3
                else:
                    total += 5
            elif c == 'X':
                if last == 'I':
                    total += 8
                else:
                    total += 10
            elif c == 'L':
                if last == 'X':
                    total += 30
                else:
                    total += 50
            elif c == 'C':
                if last == 'X':
                    total += 80
                else:
                    total += 100
            elif c == 'D':
                if last == 'C':
                    total += 300
                else:
                    total += 500
            else:
                if last == 'C':
                    total += 800
                else:
                    total += 1000
            last = c
        return total
        
