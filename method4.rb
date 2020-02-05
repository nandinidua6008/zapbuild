def calculation(a,b)
    p,q,r,s=0
    c,d=a,b
    def sum(c,d)
       p=c+d 
    end 
    def mul(c,d)
        q=c*d
    end
    def div(c,d)
        r=d/c
    end
    def min(c,d)
        s=c-d
    end
    return p,q,r,s
end
puts "enter a number"
a=Integer(gets)
puts "enter another number"
b=Integer(gets)
p,q,r,s=calculation(a,b)
puts p,q,r,s
