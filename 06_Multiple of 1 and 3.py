def summ(n,k):
    return int(k*(int(n/k)*((int(n/k)+1))//2))
t=int(input())
for i in range(t):
    n=int(input())
    n=n-1
    s3=summ(n,3)
    s5=summ(n,5)
    s15=summ(n,15)
    print(s3+s5-s15)
    
