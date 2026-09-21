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

#include <stdio.h>
int main() {
    double train_length, speed_kmh, platfrom_length;
    
    printf("Enter the train speed : ");
    scanf("%lf", &speed_kmh);
    
    printf("Enter the train length : ");
    scanf("%lf", &train_length);
    
    printf("Enter the platfrom length : ");
    scanf("%lf", &platfrom_length);
    
    double speed_ms = speed_kmh * (5.0 / 18.0);
    double time_taken = (train_length + platfrom_length) / speed_ms;
    
    printf("Time taken by train is %g seconds\n", time_taken);
    
    return 0;
}

