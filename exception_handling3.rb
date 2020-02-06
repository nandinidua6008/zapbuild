begin
	puts(5/1)
	File.open("sample.txt")
rescue ZeroDivisionError
	print "tried to divide by zero\n"
rescue SystemCallError
	print "some error has occured\n"
end

