class Abc 
    def initialize (first,last)
       @first=first
       @last=last
    end
    def first
        @first
    end
    def last
       @last 
    end
end
ob=Abc.new("nandini","dua")
puts ob.first,ob.last
