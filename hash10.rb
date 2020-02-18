a={"name"=>"nandini","age"=>23,"city"=>"haridwar","state"=>"uk"}
a2={"country"=>"india"}

puts a.has_key?("name")
puts a.has_key?("gender")

puts a.has_value?(23)
puts a.has_value?("haridwar")
puts a.has_value?("naina")

puts a.include?("name")
puts a.include?("gender")

puts a.length

puts a.merge(a2)

print a.values_at("age","state"),"\n"

print a.values(),"\n"

puts a.default="geeks"

puts a.default

print a.to_s,"\n"

print a.to_a,"\n"

puts a.store(key,value)
