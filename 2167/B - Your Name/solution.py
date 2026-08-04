q = int(input())
 
while q > 0:
    len = int(input())
    s,t = input().split()
 
    if sorted(s) == sorted(t):
        print("YES")
    else:
        print("NO")
 
    q-=1