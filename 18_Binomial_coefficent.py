def binomialCoeff(n, r):     
    if (r > n):
        return 0       
    m = 1000000007
    inv = [0 for i in range(r + 1)]
    inv[0] = 1;
    if(r+1>=2)
    inv[1] = 1;
    for i in range(2, r + 1):
        inv[i] = m - (m // i) * inv[m % i] % m
    ans = 1
    for i in range(2, r + 1):
        ans = ((ans % m) * (inv[i] % m)) % m
    for i in range(n, n - r, -1):
        ans = ((ans % m) * (i % m)) % m         
    return ans
 
n,r=map(int,input().split())
print("Value of C(" ,n , ", " , r ,") is ",binomialCoeff(n, r))
 
