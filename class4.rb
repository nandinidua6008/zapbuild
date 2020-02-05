class Name
    def initialize(first,last)
        @first1=first
        @last1=last
    end
    attr_reader  :first1,:last1
    def first
        print @first1+' '
        print @last1
    end
end
ob=Name.new("nandini","dua")
ob.first
puts()
print ob.first1+" "
print ob.last1
