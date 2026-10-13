/* Q1.A farmer wants to put a fence around his rectangular garden and also plant grass inside it. 
 Your task is to write a code to calculate the total area to be covered with grass and 
 the total length of fencing required for the garden.*/
 
// #include <stdio.h>
// int main(){
//     double length, breadth, area;
//     printf("Enter the length of garden :");
//     scanf("%lf", &length);
//     printf("Enter the breadth of garden :");
//     scanf("%lf", &breadth);
//     area = length * breadth;
//     printf("area of the garden is = %.2lf\n", area);
//     return 0;
// }

/*2. Riya is designing a square playground for children. She wants to know how much space is available 
for playing and how much boundary wire is needed around the playground. Your task is to write a code to
calculate the area and perimeter of the square playground.*/

// #include <stdio.h>

// int main(){
//     double side, area, perimeter;
//     printf("Enter the side of square playground : ");
//     scanf("%lf", &side);
//     area = side * side;
//     perimeter = 4 * side;
//     printf("Area of the square playground : %.2lf\n", area);
//     printf("Perimeter of the square playground : %.2lf\n", perimeter);
//     return 0;
// }

/*3. A park has a circular fountain in the center. The gardener wants to know the area covered by the 
fountain and the distance around its boundary for decoration lights. 
Your task is to write a code to calculate the area and circumference of the circular fountain.*/

// #include <stdio.h>
// #include <math.h>
// int main(){
//     double radius, area, perimeter;
//     printf("Enter the radius of fountain : ");
//     scanf("%lf", &radius);
//     double base = radius;
//     double exponent = 2;
//     double rad_2 = pow(base, exponent);
//     area = 3.14 * rad_2;
//     perimeter = 2 * 3.14 * radius;
//     printf("Area of the fountain = %.2lf\n", area);
//     printf("Perimeter of the fountain = %.2lf\n", perimeter);
//     return 0;
// }

/*4. A carpenter is making a right-angled triangular wooden board for a project. He needs to know the 
area of the board to estimate the amount of paint required. Your task is to write a code to calculate 
the area of the right-angled triangle.*/

// #include <stdio.h>
// int main(){
//     double base, height, area;
//     printf("Enter the height of triangle : ");
//     scanf("%lf", &height);
//     printf("Enter the base of triangle : ");
//     scanf("%lf", &base);
//     area = 0.5 * base * height;
//     printf("Area of the triangle is = %.2lf\n", area);
//     return 0;
// }

/*5. A toy company manufactures cube-shaped gift boxes. The manager wants to know how much space each box 
can hold. Your task is to write a code  to calculate the volume of the cube-shaped box.*/

// #include <stdio.h>
// #include <math.h>
// int main(){
//     double area, side;
//     printf("Enter the side of cube : ");
//     scanf("%lf", &side);
//     double base = side;
//     double exponent = 3;
//     area = pow(base, exponent);
//     printf("The volume of cube is = %.2lf\n", area);
//     return 0;
// }

/*6. A warehouse owner has a cuboid-shaped water tank. He wants to calculate how much water the tank can 
store. Your task is to write a code to calculate the volume of the cuboid-shaped tank.*/

// #include <stdio.h>
// int main(){
//     double length, breadth, height, volume;
//     printf("Enter the length of cuboid : ");
//     scanf("%lf", &length);
//     printf("Enter the breadth of cuboid : ");
//     scanf("%lf", &breadth);
//     printf("Enter the height of cuboid : ");
//     scanf("%lf", &height);
//     volume = length * breadth * height;
//     printf("Volume of cuboid = %.2lf\n", volume);
//     return 0;
// }

/*7. During a science exhibition, students build a cone-shaped model volcano. They need to find the volume 
of the volcano model to know how much material it can contain. Your task is to write a code to calculate
the volume of the cone.*/

// #include <stdio.h>
// #include <math.h>
// int main(){
//     double height, radius, volume;
//     printf("Enter the value of height : ");
//     scanf("%lf", &height);
//     printf("Enter the value of radius : ");
//     scanf("%lf", &radius);
//     double base = radius;
//     double exponent = 2;
//     double rad_2 = pow(base, exponent);
//     volume = (3.14 * rad_2 * height)/3 ;
//     printf("Volume of cone = %.2lf\n", volume);
//     return 0;
// }

/*8. A sports company is designing a spherical football. The designer wants to know the volume of the 
football for manufacturing purposes. Your task is to write a code to calculate the volume of the sphere.*/

// #include <stdio.h>
// #include <math.h>
// int main(){
//     double radius, volume;
//     printf("Enter the value of radius : ");
//     scanf("%lf", &radius);
//     double base = radius;
//     double exponent = 3;
//     double rad_2 = pow(base, exponent);
//     volume = (3.14 * rad_2 * 4)/3 ;
//     printf("Volume of cone = %.2lf\n", volume);
//     return 0;
// }

/*9. A weather reporter receives the temperature of a hill station in Celsius but needs to display it in 
Fahrenheit for an international audience. Your task is to write a code  to help the reporter convert the 
temperature from Celsius to Fahrenheit.*/

// #include <stdio.h>
// int main(){
//     double celsius, fahreneit;
//     printf("Enter the temperature in celsius");
//     scanf("%lf", &celsius);
//     fahreneit = celsius *(9.0/5.0) + 32;
//     printf("The temperature in fahreneit is = %.2lf\n", fahreneit);
//     return 0;
// }

/*10. A scientist working in a laboratory records the temperature in Fahrenheit, but the research report 
requires the values in Celsius. Your task is to write a code  to convert the temperature from Fahrenheit 
to Celsius.*/

// #include <stdio.h>
// int main(){
//     double celsius, fahreneit;
//     printf("Enter the temperature in fahreneit : ");
//     scanf("%lf", &fahreneit);
//     celsius = (fahreneit - 32) * (5.0/9.0);
//     printf("The temperature in celsius is = %.2lf\n", celsius);
//     return 0;
// }


/*11. During a science experiment, a student measures the temperature of a chemical solution in Celsius. 
The laboratory system stores all temperatures in Kelvin. Your task is to write a code  to convert the 
temperature from Celsius to Kelvin.*/

// #include <stdio.h>
// int main(){
//     double celsius, kelvin;
//     printf("Enter the temperature in celsius: ");
//     scanf("%lf", &celsius);
//     kelvin = celsius + 273;
//     printf("The temperature in kelvin is = %.2lf\n", kelvin);
//     return 0;
// }

/*12. A space research center receives temperature readings from a satellite in Kelvin, but the scientists 
want to analyze the data in Celsius. Your task is to write a code  to convert the temperature from Kelvin
to Celsius.*/ 

// #include <stdio.h>
// int main(){
//     double celsius, kelvin;
//     printf("Enter the temperature in kelvin: ");
//     scanf("%lf", &kelvin);
//     celsius = kelvin - 273;
//     printf("The temperature in celsius is = %.2lf\n", celsius);
//     return 0;
// }

/*13. A weather monitoring device installed in Antarctica records temperature in Kelvin, but the control 
room staff needs the value in Fahrenheit for analysis. Your task is to write a code  to convert the 
temperature from Kelvin to Fahrenheit. */

// #include <stdio.h>
// int main(){
//     double celsius, kelvin, fahreneit;
//     printf("Enter the temperature in kelvin: ");
//     scanf("%lf", &kelvin);
//     celsius = kelvin - 273;
//     fahreneit = celsius *(9.0/5.0) + 32;
//     printf("The temperature in fahreneit is = %.2lf\n", fahreneit);
//     return 0;
// }

/*14. An engineer in a thermal power plant receives machine temperature readings in Fahrenheit, but the 
maintenance software requires the values in Kelvin. Your task is to write a code  to convert the 
temperature from Fahrenheit to Kelvin.*/


// #include <stdio.h>
// int main(){
//     double celsius, fahreneit, kelvin;
//     printf("Enter the temperature in fahreneit : ");
//     scanf("%lf", &fahreneit);
//     celsius = (fahreneit - 32) * (5.0/9.0);
//     kelvin = celsius + 273;
//     printf("The temperature in kelvin is = %.2lf\n", kelvin);
//     return 0;
// }

// 15. Ravi deposits some money in a bank for a fixed period of time. The bank offers a certain rate of 
// simple interest every year. Ravi wants to know how much interest he will earn after the given time 
// period. Your task is to write a code  to calculate the simple interest. 

// #include <stdio.h>
// int main(){
//     double P, R, T, S_I;
//     printf("Enter the value of principle interest = ");
//     scanf("%lf", &P);
//     printf("Enter the value of rate of interest = ");
//     scanf("%lf", &R);
//     printf("Enter the value of time period = ");
//     scanf("%lf", &T);
//     S_I = (P*R*T)/100;
//     printf("Simple interest = %.2lf\n", S_I);
// }

/*16. A school wants to prepare the result of a student based on marks obtained in five subjects. 
The principal asks the computer operator to calculate the total marks, average marks, and percentage of 
the student. Your task is to write a code  to perform these calculations. */

// #include <stdio.h>
// int main(){
//     double marks[] = {90, 79, 85, 98, 94};
//     int size = 5;
//     double sum = 0.0;
//     for(int i = 0; i<size; i++){
//         sum += marks[i];
//        }
//      double average = sum/size ;
//      double percentage = (sum/500.0)* 100;
//      printf("-------STUDENT RESULT------\n");
//      printf("Total marks    : %.2f\n", sum);
//      printf("Average marks  : %.2lf\n", average);
//      printf("percentage     : %.2lf\n", percentage);
//      return 0;
//     }



// 17. A train is moving at a certain speed in km/hr, and a railway platform has a fixed length in meters. 
// The station master wants to know how much time the train will take to completely cross the platform. 
// Your task is to write a code to calculate the time taken in seconds.

// #include <stdio.h>
// int main() {
//     double train_length, speed_kmh, platfrom_length;
    
//     printf("Enter the train speed : ");
//     scanf("%lf", &speed_kmh);
    
//     printf("Enter the train length : ");
//     scanf("%lf", &train_length);
    
//     printf("Enter the platfrom length : ");
//     scanf("%lf", &platfrom_length);
    
//     double speed_ms = speed_kmh * (5.0 / 18.0);
//     double time_taken = (train_length + platfrom_length) / speed_ms;
    
//     printf("Time taken by train is %g seconds\n", time_taken);
    
//     return 0;
// }

////18. BANK BALANCE STATUS 
// #include<stdio.h>
// int main(){
//     double balance;
//     printf("Enter the balance : ");
//     scanf("%lf", &balance);
//     if(balance>0) printf("positive");
//     else if(balance<0) printf("negative");
//     else printf("Zero");
// }

////19. BILL DIVISIBILITY 
// #include<stdio.h>
// int main(){
//     int amount;
//     printf("Enter the amount : ");
//     scanf("%ld", &amount);
//     if(amount % 5 == 0) printf("discount applicable");
//     else printf("no discount");
// }

////20. VOTE ELIGIBILITY 
// #include<stdio.h>
// int main(){
//     double age;
//     printf("Enter the age : ");
//     scanf("%lf", &age);
//     if(age >= 18) printf("eligible for voting");
//     else printf("not eligible");
// }

////21. ODD OR EVEN

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the num : ");
//     scanf("%ld", &num);
//     if(num % 2 == 0) printf("EVEN");
//     else printf("ODD");
// }

////22. HIGHER SCORE 
// #include<stdio.h>
// int main(){
//     int a, b;
//     printf("Enter the score of friend a : ");
//     scanf("%ld", &a);
//     printf("Enter the score of friend b : ");
//     scanf("%ld", &b);
//     if(a > b) printf("Friend a");
//     else if(a == b) printf("Tie");
//     else printf("Friend b");
// }

////23. PROFIT AND LOSS
// #include<stdio.h>
// int main(){
//     double cost_price, selling_price;
//     printf("Enter the cost price : ");
//     scanf("%lf", &cost_price);
//     printf("Enter the selling price : ");
//     scanf("%lf", &selling_price);
//     if(cost_price < selling_price) printf("Profit");
//     else if(cost_price == selling_price) printf("NO PROFIT NO LOSS");
//     else printf("loss");
// }

////24. HIGHEST OF THREE
// #include<stdio.h>
// int main(){
//     int a, b, c;
//     printf("Enter the score of friend a : ");
//     scanf("%ld", &a);
//     printf("Enter the score of friend b : ");
//     scanf("%ld", &b);
//     printf("Enter the score of friend c : ");
//     scanf("%ld", &c);
//     if(a<b){
//         if(b>c) printf("B scores highest");
//         else printf("C scores highest");
//     }
//     else if(a>b){
//         if(a>c) printf("A scores highest");
//         else printf("C scores highest");
//     }
//     return 0;

// }

////25. CONSONANT AND VOWEL 
// #include<stdio.h>
// int main(){
//     int flag = 0;
//     char character;
//     printf("Enter the character : ");
//     scanf("%c", &character);
//     if(character == 'a'){
//         flag = 1;
//     }
//     if(character == 'e'){
//         flag = 1;
//     }
//     if(character == 'i'){
//         flag = 1;
//     }
//     if(character == 'o'){
//         flag = 1;
//     }
//     if(character == 'u'){
//         flag = 1;
//     }

// if(flag == 1) printf("vowel");
// else printf("Consonant");

// }

// //26. MUTLIPLE OF 2 AND 3
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the value of a : ");
//     scanf("%ld", &a);
//     if(a%2 == 0){
//         if(a%3==0){
//             printf("Multiple of both 2 and 3");
//         }
//         else printf("Multiple of 2");
//     }
//     else if(a%2 != 0){
//         if(a%3 == 0){
//             printf("Multiple of 3");
//         }
//         else printf("Neither multiple of 2 nor of 3");
//     }
//     return 0;
// }

// // 27.AUTOMATIC GRADE GENERATOR 
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter the marks : ");
//     scanf("%ld", &marks);
//     if(marks >= 90){
//         printf("Grade A");
//     }
//     else if(marks >= 75){
//         printf("Grade B");
//     }
//     else if(marks >=50){
//         printf("Grade C");
//     }
//     else printf("Fail");
// }

// // 28. voting + senior citizen
// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter the age : ");
//     scanf("%ld", &age);
//     if(age >= 18){
//         printf("Eligible for voting\n");
//         if(age>= 60){
//         printf("Voter is senior citizen");
//         }
//     }
//     else printf("Not eligible");
// }

// //29. Highest of four teams
// #include<stdio.h>
// int main(){
//     int a, b, c, d;
//     printf("Enter the scores of team a, b, c, d : ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     if(a>b){
//         if(a>c){
//             if(a>d){
//                 printf("Team a scores the highest");
//             }else{
//                 printf("Team d scores the highest");
//             }
//         }else{
//             if(c>d){
//                 printf("c scores the highest");
//             }else{
//                 printf("Team d scores the highest");
//             }
//         }
//     }else{
//         if(b>c){
//             if(b>d){
//                 printf("Team b scores the highest");
//             }else{
//                 printf("Team d scores the highest");
//             }
//         }else{
//             if(c>d){
//                 printf("Team c scores the highest");
//             }else{
//                 printf("Team d scores the highest");
//             }
//         }
//     }
//     return 0;
// }

// //30. TRIANGLE TYPE
// #include<stdio.h>
// int main(){
//     double a, b, c;
//     printf("Enter all three sides of triangle : ");
//     scanf("%lf %lf %lf %lf", &a, &b, &c);
//     if(a==b){
//         if(b==c){
//             printf("Equilateral triangle");
//         }else{
//             printf("Isosceles triangle");
//         }
//     }else{
//         printf("Scalene");
//     }
// }

// // 31. Electricity bill
// #include<stdio.h>
// int main(){
//     double units, total_bill = 0.00;
//     printf("Enter the units : ");
//     scanf("%lf", &units);
//     if(units <=100){
//         total_bill = units * 1.5;
//     }
//     else if(units <=200){
//         total_bill = units * 2.5;
//     }
//     else{
//         total_bill = units * 4;
//     }
//     printf("Total bill = %.2lf\n", total_bill);
// }

// // 32. CHARACTER CLASSIFIER
// #include<stdio.h>
    // int main(){
    // char ch;
    // printf("Enter the character : ");
    // scanf("%c", &ch);
    // if(ch>=48){
    //         if(ch<=57){
    //             printf("Digits");
    //     }else if(ch>=97){
    //         if(ch<=122){
    //             printf("Lowercase");
    //     }
    //     }else if(ch>=65){
    //         if(ch <= 90){
    //             printf("Uppercase");
    //         }
    //     } else{
    //     printf("Special character ");
    // }
    // }
// }

// // 33. CASE CONVERTER 
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter the character : ");
//     scanf("%c", &ch);
//         if(ch>=97){
//             if(ch<=122){
//                 printf("%c\n", ch - 32);
//         }
//         }else if(ch>=65){
//             if(ch <= 90){
//                 printf("%c\n", ch + 32);
//             }
//         } else{
//         printf("%c\n", ch);
//     }
// }

///////////////////////////////////////////////// SET 3 ///////////////////////////////////////
//1. THE WEEKLY PLANNER 
// #include<stdio.h>
// int main(){
//     int day;
//     printf("Enter the number : ");
//     scanf("%d", &day);
//     switch (day)
//     {
//     case 1:
//         printf("Moday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("Wednesday");
//         break;
//     case 4:
//         printf("Thursday");
//         break;
//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("Saturday");
//         break;
//     case 7:
//         printf("Sunday");
//         break;
    
//     default:
//         printf("Invalid");
//         break;
//     }
// }

// //2. THE POCKET CALCULATOR
// #include<stdio.h>
// int main(){
//     double a, b;
//     char op;
//     printf("Enter the value of a : ");
//     scanf("%lf", &a);
//     printf("Enter the value of b : ");
//     scanf("%lf", &b);
//     printf("Enter the operator : ");
//     scanf(" %c", &op);
//     switch (op)
//     {
//     case '+':
//         printf("%.2lf", a+b);
//         break;
//     case '-':
//         printf("%.2lf", a-b);
//         break;
//     case '*':
//         printf("%.2lf", a*b);
//         break;
//     case '/':
//         printf("%.2lf", a/b);
//     case '%':
//         if((int)b != 0){
//             printf("%.d", (int)a % (int)b);
//         }else{
//             printf("Error : Division by 0");
//         }
//         break;
//     default:
//         printf("Invalid!");
//         break;
//     }
// }

// //3. THE ENGLISH LEARNING ASSISTANT
// The program receives one character. If it is a vowel, report “Vowel”. If it is an alphabet but not a vowel,
// report “Consonant”. Any non-alphabet character should be reported as invalid
// #include<stdio.h>
// int main(){
//     char character;
//     printf("Enter the character : ");
//     scanf("%c", &character);
//     switch(character){
//         case 'a':
//         printf("Vowel\n");
//         break;
//             case 'e':
//         printf("Vowel\n");
//         break;
//             case 'i':
//         printf("Vowel\n");
//         break;
//             case 'o':
//         printf("Vowel\n");
//         break;
//             case 'u':
//         printf("Vowel\n");
//         break;
//         case 'A':
//         printf("Vowel\n");
//         break;
//             case 'E':
//         printf("Vowel\n");
//         break;
//             case 'I':
//         printf("Vowel\n");
//         break;
//             case 'O':
//         printf("Vowel\n");
//         break;
//             case 'U':
//         printf("Vowel\n");
//         break;
//     default:
//     printf("Consonant\n");
//     break;
//     }
// }

//-- shorter way 
// #include<stdio.h>
// int main(){
// char character;
// printf("Enter the character ");
// scanf("%c", &character);
// switch (character)
// {
// case 'a': case 'e': case 'i': case 'o': case 'u':
// case 'A':case 'E':case 'I':case 'O':case 'U':
//     printf("Vowel\n");
//     break;
// default:
//     if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
//        printf("Consonant\n");
//     }else{
//         printf("Invalid!!");
//     }   
//     break;
// }
// }

// // 4. SMART TRAFFIC SIGNAL 
// The system receives a traffic signal character: R means Stop, Y means Wait, and G means Go.
// Lowercase versions should also be accepted. Any other character is invalid
// #include<stdio.h>
// int main(){
//     char character;
//     printf("Enter the character : ");
//     scanf("%c", &character);
//     switch (character)
//     {
//     case 'R': case 'r':
//     printf("Stop");
//         break;
//     case 'Y': case 'y':
//     printf("Wait");
//         break;
//     case 'G': case 'g':
//     printf("Go");
//         break;
//     default:
//     printf("Invalid!");
//         break;
//     }
// }

// 5 THE ARCHITECTS SHAPE CALCULATOR
// The application first asks which shape’s area is required: Circle, Rectangle, Square, or 
// Right-Angle Triangle. After the shape is selected, only the dimensions needed for that shape should
// be requested

// #include<stdio.h>
// #include<math.h>
// int main(){
//     double area, rad_2, radius, length, side, breadth, base, height;
//     char shape;
//     printf("Enter the the shape : ");
//     scanf("%c", &shape);
//     switch(shape){
//         case 'C':
//         case 'c':
//             printf("Shape selected is circle \n");
//             printf("Enter the radius of circle : ");
//             scanf("%lf", &radius);
//             rad_2 = pow(radius, 2);
//             area = 3.14 * rad_2;
//             printf("area = %.2lf\n", area);
//             break;
//         case 'R':
//         case 'r':
//             printf("Shape selected is rectangle \n");
//             printf("Enter teh length of rectangle : ");
//             scanf("%lf", &length);
//             printf("Enter teh breadth of rectangle : ");
//             scanf("%lf", &breadth);
//             area = length * breadth;
//             printf("area = %.2lf\n", area);
//             break;
//         case 's':
//         case 'S':
//             printf("Shape selected is square \n");
//             printf("Enter the side of square : ");
//             scanf("%lf", &side);
//             area = ("area = %.2lf\n", area);
//             break;
//         case 'T':
//         case 't':
//             printf("Shape selected is triangle \n");
//             printf("Enter the base of triangle : ");
//             scanf("%lf", &base);
//             printf("Enter the height of triangle : ");
//             scanf("%lf", &height);
//             area = 0.5 * base * height;
//             printf("area = %.2lf\n", area);
//             break;
//         default:
//         printf("INVALID SHAPE!");
//         break;
//     }
// }

// // 6. THE UNIT CONVERSION DESK
// A student chooses one conversion: Celsius → Fahrenheit, Fahrenheit → Celsius, Kilometers → Meters,
// or Meters → Kilometers. The program then accepts the value and displays the converted result.
// #include<stdio.h>
// int main(){
//     int choice;
//     double value;
//     printf("choose the conversion :\n");
//     printf("1. Celsius → Fahrenheit\n");
//     printf("2. Fahrenheit → Celsius\n");
//     printf("3. Kilometers → Meters\n");
//     printf("4. Meters → Kilometers\n");
//     printf("Enter choice from (1-4) :\n");
//     scanf("%d", &choice);
//     if(choice<1 || choice>4){
//         printf("Invalid choice!");
//         return 0;
//     }

//     printf("Enter the value : ");
//     scanf("%lf", &value);

//     switch(choice){
//         case 1:
//         printf("%.2lf *C = %.2lf *F\n", value, (value * 9.0/5.0)+32.0);
//         break;
//         case 2:
//         printf("%.2lf *F = %.2lf *C\n", value, (value-32.0)*5.0/9.0);
//         break;
//         case 3:
//         printf("%.2lf km = %.2lf m\n", value, value * 1000.0);
//         break;
//         case 4:
//         printf("%.2lf m = %.4lf km\n", value, value / 1000.0);
//         break;
//     }
//     return 0;
// }

// //7. THE ENGINEERING MEASUREMENT ASSISTANT
// First ask what the student wants to calculate: Area or Volume. If Area is selected, offer Rectangle, Circle,
// or Right-Angle Triangle. If Volume is selected, offer Cone, Cuboid, or Sphere. Then ask only for the
// dimensions required by the chosen shape/solid.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     double area, volume, radius, rad_2, length, breadth, base, height ;
//     char choice; int shape;
//     printf("enter what you want to calculate : ");
//     scanf("%c", &choice);
//     switch(choice){
//         case 'A':
//         case 'a':
//         printf("Enter your choice\n");
//         printf("1. Rectangle\n");
//         printf("2. Circle\n");
//         printf("3. Right angled triangle\n");
//         printf("Enter choice from (1-3) :\n");
//         scanf("%d", &shape);
//         if(shape<1 || shape>3){
//         printf("Invalid choice!");
//         return 0;
//         }
            // switch(shape){
            //     case 1:
            //     printf("Enter the length of rectangle : ");
            //     scanf("%lf", &length);
            //     printf("Enter teh breadth of rectangle : ");
            //     scanf("%lf", &breadth);
            //     area = length * breadth;
            //     printf("area = %.2lf\n", area);
            //     break;

            //     case 2:
            //     printf("Enter the radius of circle : ");
            //     scanf("%lf", &radius);
            //     rad_2 = pow(radius, 2);
            //     area = 3.14 * rad_2;
            //     printf("area = %.2lf\n", area);
            //     break;

            //     case 3:
            //     printf("Enter the base of triangle : ");
    //             scanf("%lf", &base);
    //             printf("Enter the height of triangle : ");
    //             scanf("%lf", &height);
    //             area = 0.5 * base * height;
    //             printf("area = %.2lf\n", area);
    //             break;
    //         }
    //         break;
    //     case 'V':
    //     case 'v':
    //     printf("Enter your choice\n");
    //     printf("1. Cone\n");
    //     printf("2. Cuboid\n");
    //     printf("3. Sphere\n");
    //     printf("Enter choice from (1-3) :\n");
    //     scanf("%d", &shape);

    //     if(shape<1 || shape>3){
    //     printf("Invalid choice!");
    //     return 0;
    // }
        // switch(shape){
        //     case 1:
        //     printf("Enter the radius of cone : ");
        //     scanf("%lf", &radius);
        //     printf("Enter the height of cone : ");
        //     scanf("%lf", &height);
        //     rad_2 = pow(radius, 2);
        //     volume = 0.33 * 3.14* rad_2 * height;
        //     printf("volume of cone = %.2lf\n", volume);
        //     break;

        //     case 2:
        //     printf("Enter the length  cuboid : ");
        //     scanf("%lf", &length);
        //     printf("Enter the breadth of cuboid : ");
        //     scanf("%lf", &breadth);
        //     printf("Enter the breadth of cuboid : ");
        //     scanf("%lf", &height);
    //         volume = length * breadth * height;
    //         printf("volume of cuboid = %.2lf\n", volume);
    //         break;

    //         case 3:
    //         printf("Enter the radius of sphere : ");
    //         scanf("%lf", &radius);
    //         rad_2 = pow(radius, 3);
    //         volume = 1.33 * 3.14 *rad_2;
    //         printf("volume of cone = %.2lf\n", volume);
    //         break;
//         }
//         break;
//     default:
//         printf("Invalid!");
//         break;
// }
// }

// // ---------- SET 4 ------------
// // 1. THE SENSOR MONITORING SYSTEM + 2. THE ATTENDANCE COUNTER +3
// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int a;
//     int num = 0;
//     int sum = 0;
//     XYZ:
//     printf("Enter the number : ");
//     scanf("%d", &a);
//     printf("Your number is = %d\n", a);
//     sum += a;
//     if(a == 0){
//         goto ABC;
//     }
//     else num+=1;
//     goto XYZ;
//     ABC:
//     printf("Bye-bye\n");
//     printf("number = %d\n", num);
//     printf("Total production = %d", sum);
// getch();
// }

// // 4. THE QUALITY ANALYSIS SYSTEM
// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int a;
//     int even_count = 0;
//     int odd_count = 0; 
//     int even_sum = 0;
//     int odd_sum = 0;
//     XYZ:
//     printf("Enter the number : ");
//     scanf("%d", &a);
//     printf("Your number is = %d\n", a);
//     if(a == 0){
//         goto ABC;
//     }
//     else{
//         if(a % 2 == 0){
//             even_count +=1;
//             even_sum +=a;
//         }else{
//             odd_count +=1;
//             odd_sum +=a;
//         }
//         goto XYZ;
//     }
//     ABC:
//     printf("Bye-bye\n");
//     printf("Even count = %d\n", even_count);
//     printf("Odd count = %d\n", odd_count);
//     printf("Even sum = %d\n", even_sum);
//     printf("Odd sum = %d\n", odd_sum);
// getch();
// }

// // 5. THE NUMBER GUESSING GAME
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(){
//     srand(time(NULL));
//     int secret_num = rand() % 100;
//     int guess;

//     XYZ:
//     printf("Enter the number : ");
//     scanf("%d", &guess);
//     if(secret_num != guess){
//         if(secret_num > guess){
//             printf("Try higher\n");
//         }
//         if(secret_num < guess){
//             printf("Try lower\n");
//         }
//         goto XYZ;
//     }else{
//         goto ABC;
//     }
    
//     ABC:
//     printf("Correct ;)");
// }

// //6. SECRET VAULT PASSWORD 
// #include<stdio.h>
// int main(){
//     const int secret_password = 1234;
//     int user_input;
//     int failed_attempts = 0;

//     TRY_AGAIN:
//     printf("Enter the password : ");
//     scanf("%d", &user_input);
//     if(user_input == secret_password){
//         printf("Vault opened");
//     }else{
//         printf("Wrong password!\n");
//         failed_attempts++;
//         if(failed_attempts == 3){
//             printf("Access denied\n");
//             return 0;
//         }
//         goto TRY_AGAIN;
//     }
//     return 0;
// }

// //7. TARGET NUMBER CHALLENGE
// #include<stdio.h>
// int main(){
//     int secret_num = 10;
//     int guess;
//     int failed_attempts = 0;
//     XYZ:
//     printf("Enter the number : ");
//     scanf("%d", &guess);
//     if(secret_num == guess){
//         goto ABC;
//     }else{
//         if(secret_num > guess){
//             printf("Target is higher\n");
//         }
//         if(secret_num < guess){
//             printf("Target is lower\n");
//         }
//         failed_attempts ++;
//         if(failed_attempts == 5){
//             printf("Target missed!");
//             return 0;
//         }
//         goto XYZ;
//     }
    
//     ABC:
//     printf("Target hit ;)");
// }

// //8. DIGITAL SUM
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    outer:
    if(num > 0){
        int sum = 0;
        int lastDigit = num;
    inner:
    if(lastDigit > 0){
        sum += lastDigit % 10;
        lastDigit /=10;
        goto inner;

    }
    printf("Sum for  %d", num);
    printf(" = %d\n",sum);
    num/=10;
    goto outer;
}
return 0;
}