begin
        puts(15/0)
        File.open("sample.txt")
rescue ZeroDivisionError =>zero
        print  zero,"\n"
rescue SystemCallError =>one
	print one,"\n"
end
