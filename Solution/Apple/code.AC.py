# Author : ysh
# 2024/08/29 Thu 12:21:24
n = int(input())

f = []

while True:
    try:
        f.append([int(i) for i in input().split()])
    except:
        break

m = len(f)

ans = []

for i in range(m):
    for j in range(m):
        if f[i][j] == n:
            ans.append([i,j])

print(len(ans))
for i in ans:
    print(i[0] + 1,i[1] + 1)

quit()