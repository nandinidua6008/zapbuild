a=1
b=22
if a%2==0 && b%2==0 
    print a," and ",b,(" both are even numbers")
elsif a%2==0 && b%2!=0
    print a,(" is even number "),b,(" is odd number")
elsif a%2!=0 && b%2==0
    print a,(" is odd number "),b,(" is even number")
else
    print"both are odd number"
end
