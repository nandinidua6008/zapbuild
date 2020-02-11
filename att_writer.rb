class Abc
    attr_writer :name,:age
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
ob.name="naina"
ob.display
