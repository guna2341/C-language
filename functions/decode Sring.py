class Solution:
    def decodeString(self, s: str) -> str:
        s = list(s)
        stack = []
        for i in range(len(s)):
            stack.append(s[i])
            if s[i] == ']':
                rep = []
                for i in range(len(stack)-1,-1,-1):
                    if stack[i] == '[':
                        break
                    rep.append(stack.pop())
                stack.pop()
                r = []
                for i in range(len(stack)-1,-1,-1):
                    if stack[i] >='0' and stack[i] <='9':
                        r.append(stack[i])
                        stack.pop()
                    else:
                        break
                r.reverse()
                r = ''.join(r)
                r = int(r)
                rep.reverse()
                rep.pop()
                for i in range(int(r)):
                    stack.append(''.join(rep))
        return ''.join(stack)
