class Name
    def initialize(first,last)
        @first=first
        @last=last
    end
    def display
        print(@first+' '+@last)
    end
end
ob=Name.new("nandini","dua")
print ob.display
