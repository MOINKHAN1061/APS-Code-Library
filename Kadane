def ka_dane1(a,n):
    max=0
    tmax=0
    start=end=0
    begin=0
    for i in range(len(a)):
         tmax=tmax+a[i]
         if tmax<0:
            tmax=0
            begin=i+1
         if max<tmax:
            max=tmax
            start=begin
            end=i
    print(max)       
    a=a[start:end+1]
    return a
    
t=int(input())
for i in range(t):
     n=int(input())
     a = list(map(int,input().split())) 
     a=ka_dane1(a,n)
     a = ' '.join([str(elem) for elem in a])
     a = a.replace("\\","")
     def Convert(a):
       a = list(a.split(" "))
     Convert(a)
     ka_dane1(a,n)
