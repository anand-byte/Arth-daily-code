/*The distance between two cities (in km) is input through keyboard. 
Write a program to convert and print the distance in 
meters, feet, inches and centimetres.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	float distance;
	cout<<"Enter distnace in KM: ";
	cin>>distance;
	cout<<"\nDistance in meter is :"<<distance*1000;
	cout<<"\nDistance in feet is approx :"<<distance*3280.84;
	cout<<"\nDistance in inch is approx:"<<distance*39370.1;
	cout<<"\nDistance in meter is :"<<distance*100000;
	return 0;

}