arr=[]
n=input()
lim=(int)(input())

for i in range(int(n)):
    num=input()
    arr.append(num)
arr.sort(reverse=True)
print(arr[lim-1])
