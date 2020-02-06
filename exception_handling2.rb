begin
	print (5/0)
	File.open("sample.txt")
rescue ZeroDivisionError
	print "tried to divide by zero\n"
end
