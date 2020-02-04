k=0
for i in 1..7 do 
    i <= 4 ? k=k+1 : k=k-1
    for j in 1..7 do
        if j>=5-k && j<=3+k
            printf("*")
        else
            printf(" ")
        end
    end
    puts()
end
