tt=int(input())
 
while tt:
    tt-=1
    n=int(input())
    if n%2==1:
        print("0")
        continue
    print(n//4+1)