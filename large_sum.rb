a=[2,3,23,13,71,43,13,63]
size=a.size
i=0
first=second=third=0
puts "the array is "
while i<size
    print a[i]," "
    i=i+1
end
puts "\nsun of large numbers are "
i=0
while i<size
    if a[i]>first
        third=second
        second=first
        first=a[i]
    elsif a[i]>second
        third=second
        second=a[i]
    elsif a[i]>third
        third=a[i]
    end
    i=i+1
end
sum=first+second+third
print first," + ",second," + ",third," = ",sum
