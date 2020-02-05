def power(a,b)
    mul=1
    while b>0
        mul=a*mul
        b=b-1
    end
    return mul
end
puts "enter a number"
a=Integer(gets.chomp)
puts "enter power of the number"
b=Integer(gets.chomp)
print"#{a} power #{b} is "
puts "#{power(a,b)}"

