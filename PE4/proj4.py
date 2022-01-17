palind =[]
for i in range(100,999):
    for j in range(100,999):
        n=i*j
        if (str(n)[::-1]==str(n)):
            palind.append(n)

print(max(palind))
