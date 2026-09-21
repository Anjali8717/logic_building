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

#include <iostream>
using namespace std;
int main(){
    double train_length, speed_kmh, platfrom_length;
    cout<<"Enter the train speed : ";
    cin>>speed_kmh;
    cout<<"Enter the train length : ";
    cin>>train_length;
    cout<<"Enter the platfrom length : ";
    cin>>platfrom_length;
    double speed_ms = speed_kmh * (5.0/18.0);
    double time_taken = (train_length + platfrom_length)/speed_ms;
    cout<<"Time taken by train is "<<time_taken<<" seconds"<<endl;
    return 0;
}





