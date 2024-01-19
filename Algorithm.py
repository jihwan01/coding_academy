import sys

sys.setrecursionlimit(100000000)
input = sys.stdin.readline

# 17413
s = input().strip()


def reverse_words_in_string(s):
    tag = False
    word_stack = []
    result = ''

    for char in s:
        if char == '<':
            while word_stack:
                result += word_stack.pop()
            tag = True
            result += char
        elif char == '>':
            tag = False
            result += char
        elif tag:
            result += char
        else:
            if char == ' ':
                while word_stack:
                    result += word_stack.pop()
                result += char
            else:
                word_stack.append(char)

    while word_stack:
        result += word_stack.pop()

    return result

print(reverse_words_in_string(s))