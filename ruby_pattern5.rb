i=1
while i<=5
    j=1
    while j<=5
        if(j>=6-i && j<=5)
            print("*")
        else
            print(" ")
        end
        j=j+1
    end
    puts()
    i=i+1
end
