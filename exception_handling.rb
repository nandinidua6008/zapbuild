begin
    print "enter numerator: "
    numer=Integer(gets)
    print "enter denomerator: "
    denom=Integer(gets)
    ratio=numer/denom
    print "result: ", ratio
    puts
rescue
    print "error: ", $!
    puts
    print"enter denominator other than 0: "
    denom=Integer(gets)
    ratio=numer/denom
    print "result: ",ratio,"\n"
end
