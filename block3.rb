def naina
	yield "nandini"
	puts "first time called"
	yield "radha"
	puts "second time called"
end
naina {|i| puts "this is my name #{i}"}
