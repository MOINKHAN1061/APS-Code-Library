def evenSum(n) :
    if (n< 2) :
        return 0
    mk1 = 0
    mk2 = 2
    sk= mk1 + mk2
    while (mk2 <= n) :
        mk3 = 4 * mk2 + mk1
        if (mk3 > n) :
            break
        mk1 = mk2
        mk2 = mk3
        sk = sk + mk2
     
    return sk
t=int(input())
for i in range(t):
     n = int(input())
     print(evenSum(n))
