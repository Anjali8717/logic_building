# Q1.A farmer wants to put a fence around his rectangular garden and also plant grass inside it. 
# Your task is to write a code to calculate the total area to be covered with grass and 
# the total length of fencing required for the garden.

# Length = int(input("Enter the length of garden :"))
# Breadth = int(input("Enter the breadth of garden :"))
# Area = Length * Breadth
# print("Area of the garden = ", Area)

# 2. Riya is designing a square playground for children. She wants to know how much space is available for
# playing and how much boundary wire is needed around the playground. Your task is to write a code to 
# calculate the area and perimeter of the square playground.

# side = int(input("Enter the side of playground: "))
# area = side * side
# perimeter = 4 * side
# print("Area of square playground = ", area)
# print("Perimeter  of square playground = ", perimeter)

# 3. A park has a circular fountain in the center. The gardener wants to know the area covered by the 
# fountain and the distance around its boundary for decoration lights. 
# Your task is to write a code to calculate the area and circumference of the circular fountain.

# Radius = int(input("Enter the radius of circle : "))
# area = 3.14 * (Radius**2)
# circumference = 2 * 3.14 * Radius
# print("area of the circular fountain = ", area)
# print("circumference of the circular fountain = ", circumference)

# 4. A carpenter is making a right-angled triangular wooden board for a project. He needs to know the 
# area of the board to estimate the amount of paint required. Your task is to write a code to calculate 
# the area of the right-angled triangle.

# base = int(input("Enter the base of triangle : "))
# height = int(input("Enter the height of triangle : "))
# area = 0.5 * base * height
# print("Area of right angled triangle = ", area)

# 5. A toy company manufactures cube-shaped gift boxes. The manager wants to know how much space each box 
# can hold. Your task is to write a code  to calculate the volume of the cube-shaped box.

# side = int(input("Enter the side = "))
# volume = side**3
# print("Volume of cube = ", volume)

# 6.A warehouse owner has a cuboid-shaped water tank. He wants to calculate how much water the tank can 
# store. Your task is to write a code to calculate the volume of the cuboid-shaped tank.

# length = int(input("Enter the length of cuboid : "))
# breadth = int(input("Enter the breadth of cuboid : "))
# height = int(input("Enter the height of cuboid : "))
# volume = length * breadth * height 
# print("Volume of cuboid shaped tank = ", volume)

# 7. During a science exhibition, students build a cone-shaped model volcano. They need to find the volume 
# of the volcano model to know how much material it can contain. Your task is to write a code to calculate
# the volume of the cone.

# radius = int(input("Enter the radius of cone : "))
# height = int(input("Enter the height of cone : "))
# volume_of_cone = (3.14 * (radius**2) * height)/3
# print("Volume of cone is = ", volume_of_cone)

# 8. A sports company is designing a spherical football. The designer wants to know the volume of the 
# football for manufacturing purposes. Your task is to write a code to calculate the volume of the sphere.

# radius = int(input("Enter the radius of cone : "))
# volume = (4 * 3.14 * (radius**3))/3 
# print("volume of sphere is = ", volume)

# 9. A weather reporter receives the temperature of a hill station in Celsius but needs to display it in 
# Fahrenheit for an international audience. Your task is to write a code  to help the reporter convert the 
# temperature from Celsius to Fahrenheit. 

# Celsius = int(input("Enter the temperature in celcius : "))
# Fahrenheit = Celsius * (9/5) + 32
# print("The temperature in Fahrenheit is = ", Fahrenheit)

# 10. A scientist working in a laboratory records the temperature in Fahrenheit, but the research report 
# requires the values in Celsius. Your task is to write a code  to convert the temperature from Fahrenheit 
# to Celsius.

# Fahrenheit = int(input("Enter the temperature in fahrenheit : "))
# celcius = (Fahrenheit - 32) * (5/9)
# print("The temperature in celsius is = ", celcius)

# 11. During a science experiment, a student measures the temperature of a chemical solution in Celsius. 
# The laboratory system stores all temperatures in Kelvin. Your task is to write a code  to convert the 
# temperature from Celsius to Kelvin. 

# Celsius = int(input("Enter the temperature in celsius : "))
# Kelvin = Celsius + 273
# print("The temperature in kelvin is = ", Kelvin)

# 12. A space research center receives temperature readings from a satellite in Kelvin, but the scientists 
# want to analyze the data in Celsius. Your task is to write a code  to convert the temperature from Kelvin
# to Celsius. 

# kelvin = int(input("Enter the temperature in celsius : "))
# celcius = kelvin - 273
# print("The temperature in celsius is = ", celcius)


# 13. A weather monitoring device installed in Antarctica records temperature in Kelvin, but the control 
# room staff needs the value in Fahrenheit for analysis. Your task is to write a code  to convert the 
# temperature from Kelvin to Fahrenheit. 

# kelvin = int(input("Enter the temperature in celsius : "))
# celsius = kelvin - 273
# Fahrenheit = celsius * (9/5) + 32
# print("The temperature in Fahrenheit is = ", Fahrenheit)

# 14. An engineer in a thermal power plant receives machine temperature readings in Fahrenheit, but the 
# maintenance software requires the values in Kelvin. Your task is to write a code  to convert the 
# temperature from Fahrenheit to Kelvin. 

# Fahrenheit = int(input("Enter the temperature in fahrenheit : "))
# celsius = (Fahrenheit - 32) * (5/9)
# Kelvin = celsius + 273
# print("The temperature in kelvin is = ", Kelvin)

# 15. Ravi deposits some money in a bank for a fixed period of time. The bank offers a certain rate of 
# simple interest every year. Ravi wants to know how much interest he will earn after the given time 
# period. Your task is to write a code  to calculate the simple interest. 

# P = int(input("Enter the principle amount : "))
# R = int(input("Enter the Rate of interest : "))
# T = int(input("Enter the time period : "))
# Simple_interest = (P*R*T)/100
# print("The simple interest is = ", Simple_interest)

# 16. A school wants to prepare the result of a student based on marks obtained in five subjects. 
# The principal asks the computer operator to calculate the total marks, average marks, and percentage of 
# the student. Your task is to write a code  to perform these calculations. 

# marks = []
# print("Enter marks of 5 subjects : ")
# for i in range(1, 6):
#     score = float(input(f"subject  {i}"))
#     marks.append(score)
#     total = sum(marks)
#     average = total/len(marks)
#     percentage = (total/500)*100

# print("----STUDENT RESULT-----")
# print("Marks list    : ", marks)
# print("Total marks   :", total)
# print("Average marks :", average)
# print("Percentage    :", percentage)

# 17. A train is moving at a certain speed in km/hr, and a railway platform has a fixed length in meters. 
# The station master wants to know how much time the train will take to completely cross the platform. 
# Your task is to write a code  to calculate the time taken in seconds.

# train_length = int(input("Enter the length of train : "))
# platform_length = int(input("Enter the length of platform : "))
# speed_kmh= int(input("Enter the speed of train : "))
# speed_ms = speed_kmh * (5/18) 
# time_taken = (train_length + platform_length)/speed_ms
# print(f"Time taken by train is {time_taken} seconds ")

# # 18. Bank balance status 
# balance = int(input("Enter the balance : "))
# if(balance>0):
#     print("positive")
# elif(balance == 0):
#         print("Zero")
# else:
#     print("Negative")

# #19. BILL DIVISIBILITY 

# amount = int(input("Enter the number : "))
# if(amount % 5 == 0 ):
#     print("Discount applicable")
# else:
#     print("no discount")

# # 20. VOTING ELIGIBILTY 
# age = int(input("Enter the number : "))
# if(age >= 18):
#     print("Eligible for vote :) ")
# else:
#     print("Not eligible for vote :( ")

## 21. Even or odd
# num = int(input("Enter the number : "))
# if(num % 2 == 0):
#     print("Even")
# else:
#     print("Odd")

## 22. HIGHER SCORE 
# a = int(input("Enter the score of friend a : "))
# b = int(input("Enter the score of friend b : "))
# if(a>b):
#     print("Friend a")
# elif(a == b):
#     print("Tie")
# else:
#     print("Friend b")

##23. PROFIT OR LOSS
# cost_price = int(input("Enter the cost price : "))
# selling_price = int(input("Enter the selling price : "))
# if(cost_price < selling_price):
#     print("Profit")
# elif(cost_price == selling_price):
#     print("No profit no loss")
# else:
#     print("Loss")

##24. HIGHEST OF THREE
# a = int(input("Enter the score of playyer a : "))
# b = int(input("Enter the score of player b : "))
# c = int(input("Enter the score of player c  :"))
# if(a<b):
#     if(b>c):
#         print("B scores highest")
#     else:
#         print("C scores highest")
# elif(a>b):
#     if(a>c):
#         print("A scores highest")
#     else:
#         print("C scores highest")
    
## 25. Vowel or consonant
# character = input("Enter the character : ")
# flag = True 
# if(character == 'a'):
#     flag = False
# elif(character == 'e'):
#     flag = False
# elif(character == 'i'):
#     flag = False
# elif(character == 'o'):
#     flag = False
# elif(character == 'u'):
#     flag = False

# if(flag == False):
#     print("Vowel")
# else:
#     print("Consonant")

##26. MULTIPLE OF 2 , 3 MULTIPLE OF BOTH 2  AND 3 , NEITHER OF 2 AND 3
# a = int(input("Enter the number : "))
# if(a%2 == 0):
#     if(a%3 == 0):
#         print("Multiple of both 2 and 3")
#     elif(a%3 !=0):
#             print("Multiple of 2")
# elif(a%2 !=0):
#     if(a%3 == 0):
#         print("Multiple of 3")
#     else:
#         print("Neither multiple of 2 nor of 3")
    
##27. Automatic grade generator 
# marks = int(input("Enter the marks : "))
# if(marks >= 90):
#     print("Grade A")
# elif(marks >=75):
#     print("Grade B")
# elif(marks >= 50):
#     print("Grade C")
# else:
#     print("Fail")


# # 28.VOTING + SENIOR CITIZEN 
# age = int(input("Enter the age : "))
# if(age>= 18):
#     print("ELgible for voting")
#     if(age>= 60):
#         print("Voter is senior citizen")
# else: 
#     print("Not eligible for voting")

# #29. HIGHEST OF FOUR TEAMS 
a = int(input("Enter score of team a : "))
b = int(input("Enter score of team b : "))
c = int(input("Enter score of team c : "))
d = int(input("Enter score of team d : "))
if(a>b):
    if(a>c):
        if(a>d):
            print("Team a scores highest")
        else:
            print("Team d scores highest")
    else:
        if(c>d):
            print("Team c scores highest")
        else:
            print("Team d scores the highest")
else:
    if(b>c):
        if(b>d):
            print("Team b scores the highest")
        else:
            print("Team d scores the highest")
    else:
        if(c>d):
            print("Team c scores the highest")
        else:
            print("Team d scores the highest")