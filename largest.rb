a=[3,2,1,12,3,4,5]
size=a.size
i=size-1
min=0
counter=0
while i>=0
if a[i]<min
    counter=counter+1
end
    if a[i]>=min
        min=a[i]
    end
    i=i-1
end
puts min
