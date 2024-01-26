#2941

s = input()
arr = ['dz=', 'c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z=']
for w in arr:
    s = s.replace(w, '+')
    
print(len(s))