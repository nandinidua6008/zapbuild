a={"x"=>'abc',"y"=>'xyz'}
puts a
puts a.delete("x")
puts a
puts a.delete_if{|key,value|key=='y'}
