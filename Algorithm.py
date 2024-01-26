#9012

def is_valid_parenthesis_string(ps):
    stack = []
    for char in ps:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack:
                return "NO"
            stack.pop()
    return "YES" if not stack else "NO"

T = int(input())
for _ in range(T):
    ps = input()
    print(is_valid_parenthesis_string(ps))