#include<bits/stdc++.h>
using namespace std;



// write a program that takes input as an age 
//and tells if you are an adult or not 

// >=18 , yes 
// <18 , no 

// int age ;
// cin >> age ;
// if (age >=18){
// cout << "You are an adult ";
// }
// else {
// cout << "You are not an adult ";
// }


// a school has following rules for grading system :
// a.below 25 - F
// b.25 - 44 - E
// c.45 to 49 - D
// d.50 to 59 - C
// e.60 to 79 - B
// f.80 to 100 - A
// Ask user to enter marks and get corresponding grade 



// int marks ;
// cin >> marks ;
//  if (marks < 25){
//     cout << "F";
//  }
// else  if (marks <= 44){
//     cout << "E";
//  }
// else if (marks <= 49){
//     cout << "D";
// }
// else if (marks <= 59){
//     cout << "C";
// }
// else if (marks <=79){
//     cout << "B";
// }
// else if (marks <=100){
//     cout << "A";
// }
int main(){

    int day ;
    cin >> day ;
     switch(day){
    case 1 : 
    cout << "Monday";
    break ;
    case 2 :
    cout << "Tuesday";
    break ;
    case 3 :
    cout << "Wednesday";
    break ;
    case 4 : 
    cout << "Thursday";
    break ;
    case 5 :
    cout << "Friday";
    break ;
    case 6 :
    cout << "Saturday";
    break ;
    case 7 :
    cout << "Sunday";
    break ;
    default:
    cout << "Invalid ";    

}

    cout<< "checked";
    return 0;

}