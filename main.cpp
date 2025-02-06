 #include <iostream>
 using namespace std;
// /1-problem
// int main() {
//  cout<<" Inter a number:  ";
//  int n;
//  cin>>n;
//  if(n<0) cout<<" Negative number";
//  else cout<<" positive number";
//  return 0;
// }

//2-problem
// int main() {
//  cout<<" Inter any number: ";
//  int number;
//  cin>>number;
//  {if (number % 2==0) cout<<" Even number";
//  else  cout <<" Odd number";}
//  return 0;
//
// }
// 3-problem
// int main() {
//     cout<<" Inter the two numbers :  ";
//     int n, m;
//     cin>>n>>m;
//     if (n > m) {
//         cout<<n<<" is greater than "<<m;
//     }else
//         cout<<n<<" is less than "<<m;
// }
// 4-problem
// int main() {
//  cout <<"Inter the three numbers:  ";
//  int number1, number2, number3;
//  cin >> number1 >>number2 >> number3;
//  if (number1 > number2 && number1 > number3) {
//   cout <<"The largest number is :  " <<number1 ;
//  } else if (number2 > number3  && number2>number1) {
//   cout <<"The largest number is :  " <<number2 ;
//  }else if (number3 > number2 && number3>number1) {
//     cout <<"The largest number is :  " <<number3 ;
//    } else cout << "I don't know";{
//     return 0;{
//    }
//   }
//  }
// 5-problem
// int main() {
//  cout <<" Inter the year: ";
//  int year;
//  cin >> year;
//  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//   cout <<" Leap year";
//
//  }
//  else {
//   cout <<" No";
//   return 0;
//  }
// }
//6-problem
// int main() {
//  cout << "Inter the speed: ";
//  int speed;
//  cin >> speed;
//  if (speed < 20) {
//   cout << " It is too slow" ;
//  }
//  else if (speed > 80) {
//   cout << " It is too fast" ;
//    }
//  else{ cout << " It is  just right" ;
//   return 0;
//   }
//  }
//7-problem
// int main() {
//  cout<<" inter your mark:  ";
//  int mark;
//  cin>>mark;
//  if(mark>=40) {
//   cout<<"Passed";
//  }
//  else {
//   cout<<"Failed";
//   return 0;
//  }
// }
//8- problem
// int main() {
//  cout<<" Inter any number :";
//  int n;
//  cin>>n;
//  if(n>0) {
//   cout<<n<<" is a Positive";
//  }
//  else if (n==0) {
//   cout<<n<<" is a Zero";
//  }
//  else { cout<<n<<" is a Negative";
//   return 0;
//
//  }
// }
// //9-problem
// int main() {
//  cout<<"Inter the colour of traffic lights: ";
//  char traffic_lights;
//  cin>>traffic_lights;
//  if(traffic_lights== 'g')
//  {
//   cout<<"Go!";
//  } else if (traffic_lights=='y') {
//   cout<<"Get ready";
//  } else if (traffic_lights=='r')
//   cout<<"Stop";
//  else
//   {
//   cout<<"Invalid input";
//   return 0;
//  }
// }
// 10-problem
// int main() {
//  cout << "Inter your grade: ";
//  int grade;
//  cin >> grade;
//  if (grade >= 90 && grade <= 100) {
//   cout<<"A";
//  }
//  else if (grade >= 80 && grade <= 89) {
//   cout<<"B";
//  }
//  else if (grade >= 70 && grade <= 79) {
//   cout<<"C";
//  }
//  else if (grade >= 60 && grade <= 69) {
//   cout<<"D";
//  }
//  else
//  {
//   cout<<"F";
//  }
//
//
//   return 0;
//  }
// // 11- problem
// int main() {
//  cout<<"Inter the two number: ";
//  int n1,n2;
//  cin>>n1>>n2;
//  if(n1%n2==0){cout<<n1<<" is divisible by "<<n2;
//      }
//     else {
//         cout<<n1<<" is not divisible by"<<n2;
//     }
//      return 0;
// }
//12-problem
// int main() {
//  cout<<" Inter the three number:  ";
//  int n1,n2,n3;
//  cin>>n1>>n2>>n3;
//  if((n1+n2)>n3 && ((n2+n3)>n1) && ((n1+n3)>n2))
//   cout<<"The triangle is valid";
//   else
//   cout<<"The triangle is invalid";
//   return 0;
//
// }
// //13-problem
// int main() {
//  cout<<" Inter your letter :  ";
//  char letter;
//  cin>>letter;
//  if ( 'A'>= letter && letter <='Z') {
//   cout<<" Uppercase alphabet";
//  }
//  else if('a'<=letter && letter <='z') {
//   cout<<"Lowercase alphabet";
//  }
//  else {
//   cout<<"It is not aplhabet";
//  }
//  return 0;
// }
//14-problem
// int main() {
//  double weight1, price1, weight2, price2;
//  cout << "Enter weight (kg) and price ($) of first package: ";
//  cin >> weight1 >> price1;
//  cout << "Enter weight (kg) and price ($) of second package: ";
//  cin >> weight2 >> price2;
//  double costPerKg1 = price1 / weight1;
//  double costPerKg2 = price2 / weight2;
//  cout << "\nCost per kg of first package: $" << costPerKg1 << endl;
//  cout << "Cost per kg of second package: $" << costPerKg2 << endl;
//
//  if (costPerKg1 < costPerKg2) {
//   cout << "The first package offers the better price." << endl;
//  } else if (costPerKg2 < costPerKg1) {
//   cout << "The second package offers the better price." << endl;
//  } else {
//   cout << "Both packages have the same price per kg." << endl;
//  }
//
//  return 0;
// }
// //15-problem
// int main() {
//  int number;
//  cout << "Enter a three-digit integer: ";
//  cin >> number;
//  int firstDigit = number / 100;
//  int lastDigit = number % 10;
//  if (firstDigit == lastDigit) {
//   cout << number << " is a palindrome number" ;
//  } else {
//   cout << number << " is not a palindrome number." << endl;
//  }
//
//  return 0;
// }
// 16-problem
#include <cmath>
// int main() {
//  double x, y;
//  const double radius = 10.0;
//  cout << "Enter the x and y coordinates of the point: ";
//  cin >> x >> y;
//  double distance = sqrt(pow(x, 2) + pow(y, 2));
//  if (distance <= radius) {
//   cout << "The point (" << x << ", " << y << ") is inside the circle.";
//  } else {
//   cout << "The point (" << x << ", " << y << ") is outside the circle." ;
//  }
//
//  return 0;
// }
// //17-problem
//
// int main() {
//  double gpa;
//  cout << "Enter your GPA (0 - 4.5): ";
//  cin >> gpa;
//  int gpaScale = static_cast<int>(gpa * 10);
//  switch (gpaScale) {
//   case 40: case 41: case 42: case 43: case 44: case 45:
//       cout << "You are eligible for an 80% scholarship!" << endl;
//   break;
//   case 35: case 36: case 37: case 38: case 39:
//       cout << "You are eligible for a 60% scholarship!" << endl;
//   break;
//   case 30: case 31: case 32: case 33: case 34:
//       cout << "You are eligible for a 50% scholarship!" << endl;
//   break;
//   default:
//    cout << "Sorry, no scholarship is available for GPA below 3.0." << endl;
//  }
//
//  return 0;
// }












