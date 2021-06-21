def isDivisibleBy7(num) :
    if num < 0 :
        return isDivisibleBy7( -num )
    if( num == 0 or num == 7 ) :
        return True
     
    if( num < 10 ) :
        return False
    return isDivisibleBy7( num / 10 - 2 * ( num - num / 10 * 10 ) )     
num =int(input())
if(isDivisibleBy7(num)) :
    print("Divisible")
else :
    print("Not Divisible")
