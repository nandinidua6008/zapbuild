class Vehicle 
    def initialize(vehicle_name, vehicle_color) 
        @vehicle_name = vehicle_name 
        @vehicle_color = vehicle_color 
    end
    def description 
        puts 'This is a vehicle'
    end
end
  
class Car < Vehicle 
    def description 
        puts 'This is a car'
    end
  
end 
  
class Bus < Vehicle 
    def display_this 
        puts 'This is a bus'
    end
  
end  
  
# Creating objects 
object1 = Car.new('Nissan', 'red') 
object2 = Bus.new('Volvo', 'white') 
  
object1.description 
object2.description 
object2.display_this 
