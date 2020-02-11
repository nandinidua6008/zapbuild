class Abc
    attr_accessor :name,:age
    def initialize (name,age)
       @name=name
       @age=age
    end
    def display
        print @name," ",@age,"\n"
    end
end
ob=Abc.new("nandini",20)
ob.display
puts ob.age
ob.name="naina"
ob.display
