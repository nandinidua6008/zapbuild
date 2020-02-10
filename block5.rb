def met(&call)
	puts "this is method"
	call.call
end
met {puts "this is block"}
