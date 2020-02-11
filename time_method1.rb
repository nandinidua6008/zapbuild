time=Time.new(2020,02,11)
time2=time+259200 #add seconds to time
puts time
puts time2

puts time<=>time2

time2=time-259200
puts time<=>time2

time2=time
puts time<=>time2
puts time.eql?(time2)
puts time==time2
puts time<time2
puts time>time2
