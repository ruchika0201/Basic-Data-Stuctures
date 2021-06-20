t= int(input())
for i in range(0, t):
    n = int(input())
    lst = list(map(int, input().split()))
    count = [0]*n
    for j in range(n-1, -1,-1):
        num=1
        for k in range(j-1, -1, -1):
            if lst[k]%lst[j]==0:
                count[j]=num
                num=num+1
    maxi=count.index(max(count))
    print(count[maxi])