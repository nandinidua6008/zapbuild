class Abc
    attr_reader :name,:age
    def initialize (name,age)
       @name=name
       @age=age
    end
    def display
        puts @name,@age
    end
end
ob=Abc.new("nandini",20)
ob.display
puts "name: "+ob.name
print "age: ",ob.age
