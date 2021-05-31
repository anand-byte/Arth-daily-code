/*Ramesh's basic salary is input through the keyboard. 
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
Write a program to calculate his gross salary.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  float basic_sal;
  cout<<"Enter your basic Salary: ";
  cin>>basic_sal;
  cout<<"\nyour Gross Salary is :Rs "<<((float)basic_sal+(float)basic_sal*(0.4)+(float)basic_sal*(0.2));
} 
