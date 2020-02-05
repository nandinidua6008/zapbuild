class Name
    def initialize(first,last)
        @first=first
        @last=last
    end
    def first
        print @first
    end
    def second
        print @last
    end
end
ob=Name.new("nandini","dua")
 ob.first
print "\n"
 ob.second
