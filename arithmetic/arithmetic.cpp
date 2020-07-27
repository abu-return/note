#include <bits/stdc++.h>
#include <unistd.h>//Sleep
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>//string
#include <stdlib.h>//srand
#include <time.h>//time(NULL)
#include <conio.h>//getch()
using namespace std;

int Factorial(int a)
{
	int num = 1;
	for (int i = 1; i <= a;i ++)
	{
		num *= i;
	}
	return num;
}

int main()
{
    system ("title calculator");
    //声明
    cout << "Welcome to my little program: easy calculator." << endl;
    //Sleep(800);
    //cout << "enter '~' query operation rule directory." << endl;
    
	int a,b;
	char ico;
	cin >> a >> ico >> b;
	double d,d1;
	
	switch (ico)
	{
		case '+':
			//cout << "Please enter parameters:" << endl;
			//cin >> a >> b;
			cout << a + b;
			break;
			
		case '-':
			//cout << "Please enter parameters:" << endl;
			//cin >> a >> b;
			cout << a - b;
			break;
			
		case '*':
			//cout << "Please enter parameters:" << endl;
			//cin >> a >> b;
			cout << a * b;
			break;
			
		case '/':
			//cout << "Please enter parameters:" << endl;
			//cin >> a >> b;
			cout << a / b;
			break;
			
		case '%':
			//cout << "Please enter parameters:" << endl;
			//cin >> a >> b;
			cout << a % b;
			break;
			
		/*case 's'://d的平方根 
			cout << "Please enter parameters:" << endl;
			cin >> d;
			d = sqrt(d);
			cout << d;
			break;
			
		case 'p'://d的d1次方 
			cout << "Please enter parameters:" << endl;
			cin >> d >> d1;
			d = pow(d,d1);
			cout << d;
			break;
			
		case '!'://阶乘
			cout << "Please enter parameters:" << endl;
			cin >> a;
			a = Factorial(a);
			cout << a;
			break; */
			
		default:
			cout << "ERROR";
			break;
	}
	sleep(1); 
}
