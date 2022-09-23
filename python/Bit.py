n = int(input())
ans = 0
for tc in range(0, n):
    s = str(input())
    if s[1] == "+":
        ans+=1
    else: 
        ans-=1
print(ans)
