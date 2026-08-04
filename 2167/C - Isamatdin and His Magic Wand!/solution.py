t = int(input())
 
while t > 0:
    n = int(input())
    arr = [int(x) for x in input().split()]
    even_num = 0
    for i in range(len(arr)):
        if arr[i] % 2 == 0:
            even_num += 1
    if even_num == n or even_num == 0:
        for num in arr:
            print(num)
    else:
        sorted_arr = sorted(arr)
        for num in sorted_arr:
            print(num)
    t-=1