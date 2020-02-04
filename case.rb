
grade=78
case grade
    when 90..100
        lettergrade="a"
    when 80..89
        lettergrade="b"
    when 70..79
        lettergrade="c"
    else
        lettergrade="f"
end
printf("your grade is "+lettergrade)
