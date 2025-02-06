#include <algorithm>
#include <iostream>
#include <bits/ranges_algo.h>
using namespace std;
// int main() {
//     int a,b,c,d,e;
//     cin>>a>>b>>c>>d>>e;
//     int sum=a+b+c+d+e;
//     cout<<"Sum is "<<sum<<endl;
//     return 0;
// }
// int main() {
//     int student_ID, student_GPA, student_Year_of_Study,student_Study_fee;
//     cout<<"  Student ID: ";
//     cin>>student_ID;
//     cout<<"  Student GPA: ";
//     cin>>student_GPA;
//     cout<<"  Student Year of Study: ";
//     cin>>student_Year_of_Study;
//     cout<<"  Student Study fee: ";
//     cin>> student_Study_fee;
//     cout<< "Student ID: "<<student_ID<<endl;
//     cout<<"Student GPA: "<<student_GPA<<endl;
//     cout<<"Student Year of Study: "<<student_Year_of_Study<<endl;
//     cout<<"Student Study fee: "<<student_Study_fee<<endl;
//
//     return 0;
// }
// int main() {
//     float celcius_temperatura, fahrenheit_celcius;
//     cout << "Please enter the temperatura in Celcius: ";
//     cin >> celcius_temperatura;
//     fahrenheit_celcius = (celcius_temperatura - 32) / 1.8;
//     cout<<"Temperature in Celcius: "<<celcius_temperatura<<endl;
//     cout<<"The Temperature in Fahrenheit: "<<fahrenheit_celcius<<endl;
//     return 0;
//
// int main() {
//     double cost_for_one_item;
//     int quantity;
//     cout << "Enter cost for one item: ";
//     cin>>cost_for_one_item;
//     cout<<"Please inter the quantity: ";
//     cin>>quantity;
//     double cost_per_item = cost_for_one_item * quantity;
//     cout<<"Total cost is "<<cost_per_item<<endl;
//     return 0;




//5-problem
// int main() {
//     int age1, age2, age3, age4;
//     float average_age_of_family;
//     cout<<"Enter your dad's age: ";
//     cin>>age1;
//     cout<<"Enter your mum's age: ";
//     cin>>age2;
//     cout<<"Enter your sister's age: ";
//     cin>>age3;
//     cout<<" Inter your age: ";
//     cin>>age4;
//     average_age_of_family = (age1 + age2 + age3 + age4)/4.0;
//     cout<<"Average age of family: "<<average_age_of_family<<endl;
//     return 0;
// }
//6-problem



// int main() {
//     int length_a, length_b, perimetr, area;
//     cout << "Inter legth a= " ;
//     cin>>length_a;
//     cout<<"Inter legth b= ";
//     cin>>length_b;
//     perimetr = (length_a+length_b)*2;
//     area= length_a*length_b;
//     cout<<"The area of the rectangle= "<< area<<endl;
//        cout<<"The perimeter of the rectangle :" << perimetr<<endl;
//     return 0;
// }
// 7-problem
// int main() {
//     int dividend, divisor, quotient;
//     cout << "Enter dividend: ";
//     cin >> dividend;
//     cout << "Enter divisor: ";
//     cin >> divisor;
//     quotient = dividend / divisor;
//     dividend = dividend % divisor;
//     cout << "The quotient of the division is: " << quotient<< "\n "
//     "The remainder of the division is: " << dividend << endl;
//
//
//     return 0;
//
// }
// 8-problem
 // int main() {
 //     int USD, UZS;
 //     cout << "Inter amount in USD :  ";
 //     cin>>USD;
 //     UZS=USD*13000;
 //     cout<<"Exchange rate (1 USD to UZS) : 13000"<<endl;
 //     cout<<"The equivalent amount in UZS: "<<UZS<<endl;
 //     return 0;

// //9-problem
// int main() {
//  cout << "Inter the radius of circle: ";
//  int radius, area;
//  const double PI = 3.141592653589793;
//  cin >> radius;
//  area = PI * radius * radius;
//  // cout << "Surface area of circle with r=" ;cout<<radius<< " is "; cout<<area<<endl;
//  return 0;
//  }
// 10-problem
// int main() {
//  cout << "Inter the radius of circle: ";
//  int radius, height, volume;
//  cin >> radius;
//  cout << "Inter the height of circle: ";
//  cin >> height;
//  const double PI = 3.141592653589793;
//  volume = PI * radius * radius * height;
//  cout<<"The Volume of cylinder with r= ";cout << radius ; cout<<"  and h= "; cout<<height ; cout<<" is " << volume << endl;
// return 0;
//
// }

// 11-problem

// int main() {
//  cout<<"Inter the distance:  ";
//  int distance , hour;
//  float average, miles;
//  cin>>distance;
//  cout<<"Enter the hour:  ";
//  cin>>hour;
//  average = distance / hour;
//  miles = average *  0.62137119223733;
//  cout<<"V= "; cout<<average;cout<<" km/h  and "; cout<<miles;cout<<" miles/h"<<endl;
//  return 0;
// }
//12-problem
// int main() {
//  cout<< " Inter  your minutes :  ";
//  int minutes, hours , m;;
//  cin>> minutes;
//  hours = minutes / 60;
//  m = minutes % 60;
//  cout<<" Total hours : "<<minutes<<endl;
//  cout<< " Total time : "; cout<<hours; cout <<" hours  ";cout<<m; cout<<" minutes"<<endl;
//  return 0;
// }
//13-problem

// int main() {
// double sellingPrice, variableCost, fixedCosts = 100000.0, breakEvenPoint;
// cout << "Enter the selling price per unit: ";
// cin >> sellingPrice;
// cout << "Enter the variable cost per unit: ";
// cin >> variableCost;
//  breakEvenPoint = fixedCosts / (sellingPrice - variableCost);
//  cout << "The break-even point is: " << breakEvenPoint << " units.\n";
//
//
// return 0;
// }
// 14-problem
// int main() {
//  cout<<" Inter basic salary:  ";
//  int salary;
//  cin>>salary;
//  cout << " Inter tax percentage:  ";
//  int percentage,Total_salary;
//  cin>>percentage;
//  Total_salary =  salary-((salary*percentage)/100);
//  cout<<"Total salary:  "<<Total_salary;
//  return 0;
//
//
// // }
// int main() {
//  cout<<" Original Price:  ";
//  int price;
//  cin>>price;
//  cout <<" Discount Persentage:  ";
//  int discount;
//  cin>>discount;
//  float Discount_Price, Final_Price;
//  Discount_Price = (price * discount)/100;
//  cout<<" Discounted Price:  "<<Discount_Price<<endl;
//  Final_Price =price- Discount_Price;
// cout<<" Final Price:  "<<Final_Price<<endl;
//  return 0;
// }



//
// int main() {
//  cout<<"Inter the first course's point:  ";
//  double C1, C2, C3, C4, C5;
//  cin>>C1>>C2>>C3>>C4>>C5;
//  cout<<"Credit hours for courses:  ";
//  double H1, H2, H3, H4, H5, GPA;
//  cin>>H1>>H2>>H3>>H4;
//  GPA = (C1*H1+C2*H2+C3*H3+C4*H4+C5*H5)/(H1+H2*H2+H3*H3+H4*H4);
//  cout<<"GPA:  "; cout<<GPA<<endl;
//  return 0;
// }
//17-problem
// int main() {
//  cout<<" Inter the Initial Price:  ";
//  float price;
//  cin>>price;
//  cout<<"Inter the Final Price:  ";
//  float price2;
//  cin>>price2;
//  float inflationRate;
//  inflationRate =((price2 - price)/price)*100;
//  cout<<"Inter the Final Price:  ";cout<<inflationRate; cout<<"%"<<endl;
//  return 0;
// }
//18-problem
// int main() {
//  cout<<"Inter the Originally tuition fee: ";
//  float Originally;
//  cin>>Originally;
//  cout<<" Inter the Scholarship Rate:  ";
//  float ScholarshipRate,Scholarship_Amount, FInal_Tuition;
//  cin>>ScholarshipRate;
//  Scholarship_Amount = (ScholarshipRate/100) *Originally;
//  cout<<"Scholarship Amount: "<<Scholarship_Amount<<endl;
//  FInal_Tuition = Originally-Scholarship_Amount;
//  cout<<"FInal_Tuition: "<<FInal_Tuition<<endl;
//  return 0;
// }
// 19-problem
// int main() {
//  cout<<"Inter the Principal amount:  ";
//  int P;
//  cin>>P;
//  cout<<"Inter the rate of interest :  ";
//  int R;
//  cin>>R;
//  cout<<"Inter the time in years. :  ";
//  int T;
//  cin>>T;
//  float SI;
//  SI = (P*T*R)/100;
//  cout<<"Simple Interest :  "<<SI<<endl;
//  return 0;
// }
// 20-problem
// int main() {
//  cout <<" Inter the Prinicipal: ";
//  int prinicipal;
//  cin >> prinicipal;
//  cout<<" Inter the Interst Rate:  " ;
//  float Annual_Rate,Interest_rate, Compuond_years;
//  cin>>Interest_rate;
// Compuond_years = Annual_Rate-prinicipal;
//  cout<<"Compuond Rate: "<<Compuond_years<<endl;
//
//  Annual_Rate = prinicipal*(1+Interest_rate/100)*(1+Interest_rate/100);
//  cout<<" Inter the Annual Interest Rate : "<<Annual_Rate;
//  return 0;
//}
/


