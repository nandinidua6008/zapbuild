def met
	puts "this is method"
	yield
	puts "you will be back to method"
	yield
end
met { puts "this is block"}
