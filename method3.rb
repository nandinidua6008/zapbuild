def fibonacci(a,b,n)
    print a," ",b
    c=0
    while n-2>0
        c=a+b
        print " ",c
        a=b
        b=c
        n=n-1
    end
end
fibonacci(0,1,7)
