/* Q1.  A farmer wants to put a fence around his rectangular garden and also plant grass inside it. 
Your task is to write a code to calculate the total area to be covered with grass and 
the total length of fencing required for the garden.*/

// #include <iostream>
// using namespace std;
// int main(){
//     int length , breadth;
//     cout<<"Enter the length of the garden :";
//     cin>>length;
//     cout<<"Enter the breadth of the garden :";
//     cin>>breadth;
//     int area = length * breadth;
//     cout<<"Area of garden = "<<area<<endl;
 //     return 0;
// };

/*2. Riya is designing a square playground for children. She wants to know how much space is available 
for playing and how much boundary wire is needed around the playground. Your task is to write a code to 
calculate the area and perimeter of the square playground.*/

// #include <iostream>
// using namespace std;
// int main(){
//     float side, area, perimeter;
//     cout<<"Enter the side of the square playground :";
//     cin>>side;
//     area = side * side;
//     perimeter = 4 * side;
//     cout<<"Area of the square playground = "<<area<<endl;
//     cout<<"Perimeter of the square playground = "<<perimeter;
//     return 0;
// };

/*3. A park has a circular fountain in the center. The gardener wants to know the area covered by the 
fountain and the distance around its boundary for decoration lights. 
Your task is to write a code to calculate the area and circumference of the circular fountain.*/
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     float radius, area, perimeter;
//     cout<<"Enter the radius of fountain : ";
//     cin>>radius;
//     int base = radius;
//     int exponent = 2;
//     float rad_2 = pow(base, exponent);
//     area = 3.14 * (rad_2);
//     perimeter = 2 * 3.14 * radius;
//     cout<<"Area of fountain = "<<area<<endl;
//     cout<<"Perimeter of fountain = "<<perimeter;
//     return 0;
// }

/*4. A carpenter is making a right-angled triangular wooden board for a project. He needs to know the 
area of the board to estimate the amount of paint required. Your task is to write a code to calculate 
the area of the right-angled triangle.*/

// #include <iostream>
// using namespace std;
// int main(){
//     double base, area, height;
//     cout<<"Enter the height of the triangle :";
//     cin>>height;
//     cout<<"Enter the base of the triangle : ";
//     cin>>base;
//     area = 0.5 * base * height;
//     cout<<"The area of right angles triangle is = "<<area<<endl;
//     return 0; 
// }

/*5. A toy company manufactures cube-shaped gift boxes. The manager wants to know how much space each box 
can hold. Your task is to write a code  to calculate the volume of the cube-shaped box.*/

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     double area, side;
//     cout<<"Enter the side of cube : ";
//     cin>>side;
//     int base = side;
//     int exponent = 3;
//     area = pow(base, exponent);
//     cout<<"Volume of cube = "<<area<<endl;
//     return 0;
// }

/*6. A warehouse owner has a cuboid-shaped water tank. He wants to calculate how much water the tank can 
store. Your task is to write a code to calculate the volume of the cuboid-shaped tank.*/

// #include <iostream>
// using namespace std;
// int main(){
//     double length, breadth, height, volume;
//     cout<<"Enter the length of cuboid: ";
//     cin>>length;
//     cout<<"Enter the breadth of cuboid: ";
//     cin>>breadth;
//     cout<<"Enter the height of cuboid: ";
//     cin>>height;
//     volume = length * breadth * height;
//     cout<<"Volume of cuboid = "<<volume<<endl;
//     return 0;
// }

/*7. During a science exhibition, students build a cone-shaped model volcano. They need to find the volume 
of the volcano model to know how much material it can contain. Your task is to write a code to calculate
the volume of the cone.*/

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     double height, radius, volume;
//     cout<<"Enter the value of height : ";
//     cin>>height;
//     cout<<"Enter the value of radius : ";
//     cin>>radius;
//     double base = radius;
//     double exponent = 2;
//     double rad_2 = pow(base, exponent);
//     volume = (3.14 * rad_2 * height)/3 ;
//     cout<<"Volume of cone = "<<volume<<endl;
//     return 0;
// }

/*8. A sports company is designing a spherical football. The designer wants to know the volume of the 
football for manufacturing purposes. Your task is to write a code to calculate the volume of the sphere.*/

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     double radius, volume;
//     cout<<"Enter the value of radius : ";
//     cin>>radius;
//     double base = radius;
//     double exponent = 3;
//     double rad_2 = pow(base, exponent);
//     volume = (3.14 * rad_2 * 4)/3 ;
//     cout<<"Volume of sphere = "<<volume<<endl;
//     return 0;
// }

// 9. A weather reporter receives the temperature of a hill station in Celsius but needs to display it in 
// Fahrenheit for an international audience. Your task is to write a code  to help the reporter convert the 
// temperature from Celsius to Fahrenheit. 
// #include <iostream>
// using namespace std;
// int main(){
//     float celsius, fahreneit;
//     cout<<"Enter the temperature in celsius";
//     cin>>celsius;
//     fahreneit = celsius *(9.0/5.0) + 32;
//     cout<<"The temperature in fahreneit = "<<fahreneit;
//     return 0;
// }    

/*10. A scientist working in a laboratory records the temperature in Fahrenheit, but the research report 
requires the values in Celsius. Your task is to write a code  to convert the temperature from Fahrenheit 
to Celsius.*/

// #include <iostream>
// using namespace std;
// int main(){
//     float celsius, Fahreneit;
//     cout<<"Enter the temperature in fahreneit : ";
//     cin>>Fahreneit;
//     celsius = (Fahreneit - 32) * (5.0/9.0);
//     cout<<"The temperature in celsius = "<<celsius;
//     return 0;
// }    


/*11. During a science experiment, a student measures the temperature of a chemical solution in Celsius. 
The laboratory system stores all temperatures in Kelvin. Your task is to write a code  to convert the 
temperature from Celsius to Kelvin.*/

// #include <iostream>
// using namespace std;
// int main(){
//     float celsius, kelvin;
//     cout<<"Enter the temperature in celsius : ";
//     cin>>celsius;
//     kelvin = celsius + 273 ;
//     cout<<"The temperature in kelvin = "<<kelvin;
//     return 0;
// }    

/*12. A space research center receives temperature readings from a satellite in Kelvin, but the scientists 
want to analyze the data in Celsius. Your task is to write a code  to convert the temperature from Kelvin
to Celsius.*/

// #include <iostream>
// using namespace std;
// int main(){
//     float celsius, kelvin;
//     cout<<"Enter the temperature in kelvin : ";
//     cin>>kelvin;
//     celsius= kelvin - 273 ;
//     cout<<"The temperature in celsius = "<<celsius;
//     return 0;
// }    

/*13. A weather monitoring device installed in Antarctica records temperature in Kelvin, but the control 
room staff needs the value in Fahrenheit for analysis. Your task is to write a code  to convert the 
temperature from Kelvin to Fahrenheit. */

// #include <iostream>
// using namespace std;
// int main(){
//     float celsius, kelvin, fahreneit;
//     cout<<"Enter the temperature in kelvin : ";
//     cin>>kelvin;
//     celsius= kelvin - 273 ;
//     fahreneit = celsius *(9.0/5.0) + 32;
//     cout<<"The temperature in fahreneit = "<<fahreneit;
//     return 0;
// }    

/*14. An engineer in a thermal power plant receives machine temperature readings in Fahrenheit, but the 
maintenance software requires the values in Kelvin. Your task is to write a code  to convert the 
temperature from Fahrenheit to Kelvin. */

// #include <iostream>
// using namespace std;
// int main(){
//     float celsius, Fahreneit, kelvin;
//     cout<<"Enter the temperature in fahreneit : ";
//     cin>>Fahreneit;
//     celsius = (Fahreneit - 32) * (5.0/9.0);
//     kelvin = celsius + 273 ;
//     cout<<"The temperature in kelvin = "<<kelvin;
//     return 0;
// }    

// 15. Ravi deposits some money in a bank for a fixed period of time. The bank offers a certain rate of 
// simple interest every year. Ravi wants to know how much interest he will earn after the given time 
// period. Your task is to write a code  to calculate the simple interest. 

// #include <iostream>
// using namespace std;
// int main(){
//     double P, R, T;
//     cout<<"Enter the value of principle interest : ";
//     cin>>P;
//     cout<<"Enter the value of rate of interest : ";
//     cin>>R;
//     cout<<"Enter the value of time : ";
//     cin>>T;
//     double S_I = (P*R*T)/100;
//     cout<<"Simple interest = "<<S_I<<endl;
//     return 0;
// }


/*16. A school wants to prepare the result of a student based on marks obtained in five subjects. 
The principal asks the computer operator to calculate the total marks, average marks, and percentage of 
the student. Your task is to write a code  to perform these calculations. */

// #include <iostream>
// using namespace std;
// int main(){
//     double marks[] = {90, 79, 85, 98, 94};
//     int size = 5;
//     int sum = 0;
//     for(int i = 0; i<size; i++){
//         sum += marks[i];
//        }
//      double average = sum/size ;
//      double percentage = (sum/500.0)* 100;
//     cout<<"----STUDENT RESULT------- "<<endl;
//     cout<<"Total marks    : "<<sum<<endl;
//     cout<<"Average marks  :"<<average<<endl;
//     cout<<"Percentage     :"<<percentage<<endl;
//     return 0;
// }

// 17. A train is moving at a certain speed in km/hr, and a railway platform has a fixed length in meters. 
// The station master wants to know how much time the train will take to completely cross the platform. 
// Your task is to write a code to calculate the time taken in seconds.

// #include <iostream>
// using namespace std;
// int main(){
//     double train_length, speed_kmh, platfrom_length;
//     cout<<"Enter the train speed : ";
//     cin>>speed_kmh;
//     cout<<"Enter the train length : ";
//     cin>>train_length;
//     cout<<"Enter the platfrom length : ";
//     cin>>platfrom_length;
//     double speed_ms = speed_kmh * (5.0/18.0);
//     double time_taken = (train_length + platfrom_length)/speed_ms;
//     cout<<"Time taken by train is "<<time_taken<<" seconds"<<endl;
//     return 0;
// }

//18. Bank balance status
// #include<iostream>
// using namespace std;
// int main(){
//     int balance;
//     cout<<"Enter the balance : ";
//     cin>>balance;
//     if(balance>0) cout<<"Positive";
//     else if(balance<0) cout<<"Negative";
//     else cout<<"zero";
// }


// //19. Bill divisibility 
// #include<iostream>
// using namespace std;
// int main(){
//     int amount;
//     cout<<"Enter the amount : ";
//     cin>>amount;
//     if(amount % 5 == 0) cout<<"Discount applicable";
//     else cout<<"no discount";
// }

////20. VOTING ELIGIBILITY

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter the age : ";
//     cin>>age;
//     if(age>=18) cout<<"ELigible for vote";
//     else cout<<"not eligible";
// }

// //21. Even or odd
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     if(num % 2 == 0) cout<<"EVEN ";
//     else cout<<"ODD";
// }

////22. HIGHER SCORE 
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout<<"Enter the score of friend a : ";
//     cin>>a;
//     cout<<"Enter the score of friend b : ";
//     cin>>b;
//     if(a>b) cout<<"Friend a";
//     else if(a == b) cout<<"Tie ";
//     else cout<<"Friend b ";
// }


////23. PORFIT OR LOSS
// #include<iostream>
// using namespace std;
// int main(){
//     double cost_price, selling_price;
//     cout<<"Enter the cost price : ";
//     cin>>cost_price;
//     cout<<"Enter the selling price : ";
//     cin>>selling_price;
//     if(cost_price < selling_price) cout<<"Profit";
//     else if(cost_price == selling_price) cout<<"No profit no loss";
//     else cout<<"Loss";
// }

//// 24. HIGHEST OF THREE
// #include<iostream>
// using namespace std;
// int main(){
//     int a, b, c;
//     cout<<"Enter the score of friend a : ";
//     cin>>a;
//     cout<<"Enter the score of friend b : ";
//     cin>>b;
//     cout<<"Enter the score of friend c : ";
//     cin>>c;
//     if(a<b){
//         if(b>c) cout<<"B scores highest";
//         else cout<<"C scores highest";
//     }
//     else if(a>b){
//         if(a>c) cout<<"A scores highest";
//         else cout<<"C scores highest";
//     }
//     return 0;
// }


//// 25.vowel and consonant 
// #include<iostream>
// using namespace std;
// int main(){
//     bool flag = false;
//     char character;
//     cout<<"Enter the character : ";
//     cin>>character;
//     if(character == 'a'){
//         flag = true;
//     }
//     if(character == 'e'){
//         flag = true;
//     }
//     if(character == 'i'){
//         flag = true;
//     }
//     if(character == 'o'){
//         flag = true;
//     }
//     if(character == 'u'){
//         flag = true;
//     }

// if(flag == true) cout<<"Vowel";
// else cout<<"consonant";
// return 0;
    
// }

//// 26MULTIPLE OF 2 3
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     if(a%2 == 0){
//         if(a%3==0){
//             cout<<"Multiple of both 2 and 3";
//         }
//         else cout<<"Multiple of 2";
//     }
//     else if(a%2 != 0){
//         if(a%3 == 0){
//             cout<<"Multiple of 3";
//         }
//         else cout<<"Neither multiple of 2 nor of 3";
//     }
//     return 0;
// }

////27.AUTOMATIC GRADE GENERATOR
// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter the marks : ";
//     cin>>marks;
//     if(marks >= 90){
//         cout<<"Grade A";
//     }
//     else if(marks >= 75){
//         cout<<"Grade B";
//     }
//     else if(marks >=50){
//         cout<<"Grade C";
//     }
//     else cout<<"Fail";
// }

// // 28. VOTING + SENIOR CITIZEN 
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter the age : ";
//     cin>>age;
//     if(age >= 18){
//         cout<<"Eligible for voting"<<endl;
//         if(age>= 60){
//         cout<<"Voter is senior citizen";
//         }
//     }
//     else cout<<"Not eligible";
// }

// // 29. HIGHEST OF FOUR TEAMS 
// #include<iostream>
// using namespace std;
// int main(){
//     int a, b, c, d;
//     cout<<"Enter the scores of team a, b, c and d : ";
//     cin>>a>>b>>c>>d;
//     if(a>b){
//         if(a>c){
//             if(a>d){
//                 cout<<"Team a scores the highest";
//             }else{
//                 cout<<"Team d scores the highest";
//             }
//         }else{
    //         if(c>d){
    //             cout<<"c scores the highest";
    //         }else{
    //             cout<<"Team d scores the highest";
    //         }
    //     }
    // }else{
    //     if(b>c){
    //         if(b>d){
    //             cout<<"Team b scores the highest";
//             }else{
//                 cout<<"Team d scores the highest";
//             }
//         }else{
//             if(c>d){
//                 cout<<"Team c scores the highest";
//             }else{
//                 cout<<"Team d scores the highest";
//             }
//         }
//     }
//     return 0;
// }


// //30 TRIANGLE TYPE
// #include<iostream>
// using namespace std;
// int main(){
//     int a, b, c;
//     cout<<"Enter all three sides of triangle : ";
//     cin>>a>>b>>c;
//     if(a==b){
//         if(b==c){
//             cout<<"Equilateral triangle ";
//         }else{
//             cout<<"Isosceles triangle";
//         }
//     }else{
//         cout<<"Scalene";
//     }
//     return 0;
// }

// //31. Electricity bill
// #include<iostream>
// using namespace std;
// int main(){
//     double units, total_bill = 0;
//     cout<<"Enter the units : ";
//     cin>>units;
//     if(units <=100){
//         total_bill = units * 1.5;
//     }
//     else if(units <=200){
//         total_bill = units * 2.5;
//     }
//     else{
//         total_bill = units * 4;
//     }
//     cout<<"total bill = "<<total_bill;
//     return 0;
// }

// // 32. CHARACTER CLASSIFIER
// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the character : ";
//     cin>>ch;
//     if(ch>=48){
//             if(ch<=57){
//                 cout<<"Digits";
//         }else if(ch>=97){
//             if(ch<=122){
//                 cout<<"Lowercase";
//         }
//         }else if(ch>=65){
//             if(ch <= 90){
//                 cout<<"Uppercase";
//             }
//         } else{
//         cout<<"Special character ";
//     }
//     }
// }

// // //33. CASE CONVERTER 
// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the character : ";
//     cin>>ch;
//         if(ch>=97){
//             if(ch<=122){
//                 cout<<char(ch - 32);
//         }
//         }else if(ch>=65){
//             if(ch <= 90){
//                 cout<<char(ch + 32);
//             }
//         } else{
//         cout<<ch;
//     }
//     }

// // ####################################### SET 3 ###########################################
// // 1. THE WEEKLY PLANNER 
// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"Enter the value : ";
//     cin>>day;
//     switch(day)
//     {
//     case 1:
//         cout<<"Monday";
//     break;
//     case 2:
//         cout<<"Tuesday";
//     break;
//     case 3:
//         cout<<"Wednesday";
//     break;
//     case 4:
//         cout<<"Thursday";
//     break;
//     case 5:
//         cout<<"Friday";
//     break;
//     case 6:
//         cout<<"Saturday";
//     break;
//     case 7:
//         cout<<"Sunday";
//     break;
//     default:
//         cout<<"Invalid";
//     }
// }

// //2. THE POCKET CALCULATOR 
// #include<iostream>
// #include<limits>
// using namespace std;
// int main(){
//     double a, b;
//     char op;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<"Enter the operator : ";
//     cin>>op;
//     cout<<"Enter the value of b : ";
//     cin>>b;
//     switch(op)
//     {
//     case '+':
//         cout<<a+b;
//     break;
//     case '-':
//         cout<<a-b;
//     break;
//     case '/':
//         cout<<a/b;
//     break;
//     case '*':
//         cout<<a*b;
//     break;
//     case '%':
//         if(static_cast<int>(b) != 0){
//             cout<<static_cast<int>(a) % static_cast<int>(b);
//         }else{
//             cout<<"Error: Division by zero";
//         }
//     break;
//     default:
//         cout<<"Invalid";
//     }
// }

// //3. THE ENGLISH LEARNING ASSISTANT
// The program receives one character. If it is a vowel, report “Vowel”. If it is an alphabet but not a 
// vowel, report “Consonant”. Any non-alphabet character should be reported as invalid

// #include<iostream>
// using namespace std;
//     int main(){
//     char character;
//     cout<<"Enter the character : ";
//     cin>>character;
//     switch(character)
//     {
//     case 'a': case 'e': case 'i': case 'o': case 'u':
//     case 'A':case 'E':case 'I':case 'O':case 'U':
//         cout<<"Vowel\n";
//         break;
//     default:
//     if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
//        cout<<"Consonant\n";
//     }else{
//         cout<<"Invalid!!";
//     }   
//         break;
//     }
// }

// // 4. SMART TRAFFIC SIGNAL 
// The system receives a traffic signal character: R means Stop, Y means Wait, and G means Go.
// Lowercase versions should also be accepted. Any other character is invalid
// #include<iostream>
// using namespace std;
// int main(){
//     char character;
//     cout<<"Enter the character : ";
//     cin>>character;
//     switch (character)
//     {
//     case 'R': case 'r':
//     cout<<"Stop";
//         break;
//     case 'Y': case 'y':
//     cout<<"Wait";
//         break;
//     case 'G': case 'g':
//     cout<<"Go";
//         break;
//     default:
//     cout<<"Invalid!";
//         break;
//     }
// }

// // 5. THE ARCHITECTS SHAPE CALCULATOR
// The application first asks which shape’s area is required: Circle, Rectangle, Square, or Right-Angle
// Triangle. After the shape is selected, only the dimensions needed for that shape should be requested.
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     double area, rad_2, radius, length, side, breadth, base, height;
//     char shape;
//     cout<<"Enter the shape : ";
//     cin>>shape;
//     switch(shape){
//         case 'C':
//         case 'c':
//             cout<<"Shape selected is circle \n";
//             cout<<"Enter the radius of circle : ";
//             cin>>radius;
//             rad_2 = pow(radius, 2);
//             area = 3.14 * rad_2;
//             cout<<"Area = "<<area;
//             break;
//         case 'R':
//         case 'r':
//             cout<<"Shape selected is rectangle \n";
//             cout<<"Enter teh length of rectangle : ";
//             cin>>length;
//             cout<<"Enter teh breadth of rectangle : ";
//             cin>>breadth;
//             area = length * breadth;
//             cout<<"area = "<<area;
//             break;
//         case 's':
//         case 'S':
//             cout<<"Shape selected is square \n";
//             cout<<"Enter the side of square : ";
//             cin>>side;
//             area = side * side;
//             cout<<"area ="<<area;
//             break;
//         case 'T':
//         case 't':
//             cout<<"Shape selected is triangle \n";
//             cout<<"Enter the base of triangle : ";
//             cin>>base;
//             cout<<"Enter the height of triangle : ";
//             cin>>height;
//             area = 0.5 * base * height;
//             cout<<"Area = "<<area;
//             break;
//         default:
//         cout<<"INVALID SHAPE!";
//         break;
//     }
// }

// // 6. THE UNIT CONVERSION DESK
// A student chooses one conversion: Celsius -> Fahrenheit, Fahrenheit -> Celsius, Kilometers -> Meters,
// or Meters -> Kilometers. The program then accepts the value and displays the converted result
// #include<iostream>
// using namespace std;
// int main(){
//     int choice;
//     double value;
//     cout<<"choose the conversion :\n";
//     cout<<"1. Celsius -> Fahrenheit\n";
//     cout<<"2. Fahrenheit -> Celsius\n";
//     cout<<"3. Kilometers -> Meters\n";
//     cout<<"4. Meters -> Kilometers\n";
//     cout<<"Enter choice from (1-4) :\n";
//     cin>>choice;
//     if(choice<1 || choice>4){
//         cout<<"Invalid choice!";
//         return 0;
//     }

//     cout<<"Enter the value : ";
//     cin>>value;

//     switch(choice){
//         case 1:
//         cout<<value<<"*c = "<<(value * 9.0/5.0)+32.0<<"*F";
//         break;
//         case 2:
//         cout<<value<<"*F = "<<(value-32.0)*5.0/9.0<<"*c";
//         break;
//         case 3:
//         cout<<value<<" km ="<< value * 1000.0<<"m";
//         break;
//         case 4:
//         cout<<value<<" m = "<<value / 1000.0<<"km";
//         break;
//     }
//     return 0;
// }

// //7. THE ENGINEERING MEASUREMENT ASSISTANT
// First ask what the student wants to calculate: Area or Volume. If Area is selected, offer Rectangle, Circle,
// or Right-Angle Triangle. If Volume is selected, offer Cone, Cuboid, or Sphere. Then ask only for the
// dimensions required by the chosen shape/solid.
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     double area, volume, radius, rad_2, length, breadth, base, height ;
//     char choice; int shape;
//     cout<<"Enter what you want to calculate : \n";
//     cout<<"area (A) \nvolume(V)\n";
//     cin>>choice;
//     switch(choice){
//         case 'A':
//         case 'a':
//         cout<<"Enter your choice\n";
//         cout<<"1. Rectangle\n";
//         cout<<"2. Circle\n";
//         cout<<"3. Right angled triangle\n";
//         cout<<"Enter choice from (1-3) :\n";
//         cin>>shape;
//         if(shape<1 || shape>3){
//         cout<<"Invalid choice!";
//         return 0;
//         }
//             switch(shape){
//                 case 1:
//                 cout<<"Enter the length of rectangle : ";
//                 cin>>length;
//                 cout<<"Enter teh breadth of rectangle : ";
//                 cin>>breadth;
//                 area = length * breadth;
//                 cout<<"area =" <<area;
//                 break;

//                 case 2:
//                 cout<<"Enter the radius of circle : ";
//                 cin>>radius;
//                 rad_2 = pow(radius, 2);
//                 area = 3.14 * rad_2;
//                 cout<<"area = "<<area;
//                 break;

//                 case 3:
//                 cout<<"Enter the base of triangle : ";
//                 cin>>base;
//                 cout<<"Enter the height of triangle : ";
//                 cin>>height;
//                 area = 0.5 * base * height;
//                 cout<<"area = "<<area;
//                 break;
//             }
//             break;
//         case 'V':
//         case 'v':
//         cout<<"Enter your choice\n";
//         cout<<"1. Cone\n";
//         cout<<"2. Cuboid\n";
//         cout<<"3. Sphere\n";
//         cout<<"Enter choice from (1-3) :\n";
//         cin>>shape;

//         if(shape<1 || shape>3){
//         cout<<"Invalid choice!";
//         return 0;
//     }
//         switch(shape){
//             case 1:
//             cout<<"Enter the radius of cone : ";
//             cin>>radius;
//             cout<<"Enter the height of cone : ";
//             cin>>height;
//             rad_2 = pow(radius, 2);
//             volume = 0.33 * 3.14* rad_2 * height;
//             cout<<"volume of cone ="<<volume;
//             break;

//             case 2:
//             cout<<"Enter the length  cuboid : ";
//             cin>>length;
//             cout<<"Enter the breadth of cuboid : ";
//             cin>>breadth;
//             cout<<"Enter the height of cuboid : ";
//             cin>>height;
//             volume = length * breadth * height;
//             cout<<"volume of cuboid = "<<volume;
//             break;

//             case 3:
//             cout<<"Enter the radius of sphere : ";
//             cin>>radius;
//             rad_2 = pow(radius, 3);
//             volume = 1.33 * 3.14 *rad_2;
//             cout<<"volume of cone = "<<volume;
//             break;
//         }
//         break;
//     default:
//         cout<<"Invalid!";
//         break;
// }
// }

// // ---------- SET 4 ------------
// // 1. THE SENSOR MONITORING SYSTEM + 2. THE ATTENDANCE COUNTER + 3
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main(){
//     int a;
//     int num = 0;
//     int sum = 0;
//     XYZ:
//     cout<<"Enter the number : ";
//     cin>>a;
//     cout<<"Your number is = "<<a<<endl;

//     if(a == 0){
//         goto ABC;
//     }
//     else num +=1, sum+=a;
//     goto XYZ;

//     ABC:
//     cout<<"Bye-bye";
//     cout<<"total numbers ="<<num<<endl;
//     cout<<"total production = "<<sum<<endl;
// getch();
// return 0;
// }

// // 4. THE QUALITY ANALYSIS SYSTEM
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main(){
//     int a;
//     int even_count = 0;
//     int odd_count = 0; 
//     int even_sum = 0;
//     int odd_sum = 0;
//     XYZ:
//     cout<<"Enter the number : ";
//     cin>>a;
//     cout<<"Your number is = "<<a<<endl;

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
//     goto XYZ;
//     }

//     ABC:
//     cout<<"Bye-bye\n";
//     cout<<"Even count = "<<even_count<<endl;
//     cout<<"Odd count = "<<odd_count<<endl;
//     cout<<"Even sum = "<<even_sum<<endl;
//     cout<<"Odd sum = "<<odd_sum<<endl;

// getch();
// return 0;
// }

// // 5.THE NUMBER GUESSING GAME
// #include<iostream>
// #include<stdlib.h>
// #include<time.h>
// using namespace std;
// int main(){
//     srand(time(NULL));
//     int random_num = rand() % 100;
//     int guess;

//     XYZ:
//     cout<<"Enter the number : ";
//     cin>>guess;
//     if(random_num != guess){
//         if(random_num > guess){
//             cout<<"Try higher\n";
//         }
//         if(random_num < guess){
//             cout<<"Try lower\n";
//         }
//         goto XYZ;
//     }else{
//         goto ABC;
//     }
    
//     ABC:
//     cout<<"Correct ;)";
// }


// //6. SECRET VAULT PASSWORD 
// #include<iostream>
// using namespace std;
// int main(){
//     const int secret_password = 1234;
//     int user_input;
//     int failed_attempts = 0;

//     TRY_AGAIN:
//     cout<<"Enter the password : ";
//     cin>>user_input;
//     if(user_input == secret_password){
//         cout<<"Vault opened";
//     }else{
//         cout<<"Wrong password!\n";
//         failed_attempts++;
//         if(failed_attempts == 3){
//             cout<<"Access denied\n";
//             return 0;
//         }
//         goto TRY_AGAIN;
//     }
//     return 0;
// }

// //7. TARGET NUMBER CHALLENGE
// #include<iostream>
// using namespace std;
// int main(){
//     int secret_num = 10;
//     int guess;
//     int failed_attempts = 0;
//     XYZ:
//     cout<<"Enter the number : ";
//     cin>>guess;
//     if(secret_num == guess){
//         goto ABC;
//     }else{
//         if(secret_num > guess){
//             cout<<"Target is higher\n";
//         }
//         if(secret_num < guess){
//             cout<<"Target is lower\n";
//         }
//         failed_attempts ++;
//         if(failed_attempts == 5){
//             cout<<"Target missed!";
//             return 0;
//         }
//         goto XYZ;
//     }
    
//     ABC:
//     cout<<"Target hit ;)";
// }