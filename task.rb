x=382769879790
a=x.to_s
n= a.length
i=n-1
    while i>0
         if a[i] > a[i-1] 
             break
         end
        i=i-1
    end 
    if i == 0
         print "Next number not possible"
    end
    smallest=i
    x = a[i-1]
    j=i+1 
    while j<n
        if a[j]>x && a[j]<a[smallest]
            smallest=j 
        end
        j=j+1
    end
    
   temp=a[smallest]
   a[smallest]=a[i-1]
   a[i-1]=temp
   while i<n-1
   if a[i] > a[n-1]
       temp=a[i]
       a[i]=a[n-1]
       a[n-1]=temp 
    end 
    i=i+1 
end 
print a
   
    
   

