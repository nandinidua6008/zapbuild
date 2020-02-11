time=Time.new(2020,02,11)
puts time.year
puts time.month 
puts time.day 
puts time.wday #0 -sunday, 1-monday ...6-saturday
puts time.yday #which day of the year  output 42 day of the year
puts time.sunday?
puts time.tuesday?
puts time.dst? #day light saving time
print time.to_a," "
print "\n",time.to_f
print "\n",time.to_i,"\n"
