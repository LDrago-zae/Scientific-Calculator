#include <iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
#include<limits>
#include<ctype.h>
using namespace std;
void display();
int menu();
int addition(int, int );
int subtraction(int, int );
double multiply(double, double );
int modulo(int, int);
float division(float, float);
long int power(long int,long int);
float Log(float,float);
int harmonic(int);
float baseLog(float);
float sine(float);
float cosine(float);
float tangent(float);
double root4th(double);
int factorial(int);
double cuberoot(double);
double squareroot(double);
void displayData();
int main()
{
	display();
	cout << "\t Press 0 to Turn Off or 1 to Start Calculator = " ;
    while (true) {
   
    int choice;
    cin >> choice;
    
    if (choice == 0) {
    cout<<endl;
    cout << "Calculator Turned Off...." << endl;
    cout<<endl;
    return 0;
    } else if (choice == 1) {
    menu();
    }
    

    // Check if the user input is a number
    if (cin.fail()) {
    // Clear the input buffer and ignore the invalid input
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<endl;
    cout << "Invalid input. Please enter a number." << endl;
    cout<<endl;
    menu();
    }
    string select;
    while(true){
    cout<<"Want to Continue? (y/n) :";
	cin>>select;
	if(select=="y"){
	menu();
	}
	else if(select=="n"){
	cout<<endl;
	cout<<"\t--------------------------------------------------------"<<endl;
	cout<<"\t                 Calculator Turned Off                    "<<endl;
	cout<<"\t--------------------------------------------------------"<<endl;
	cout<<endl;
	return 0;
	}
}   
}
}
int addition(int a, int b){
	return a+b;
}

int subtraction(int a, int b){
	return a-b;
}

double multiply(double a, double b){
	return a*b;
}

int modulo(int a, int b){
	return a%b;
}

float division(float a, float b){
	if(b==0){
		cout<<"Math Error"<<endl;
		return NAN;
	}
	else 
	return a/b;
}

long int power(long int a,long int b){
	float p;
	p=pow(a,b);
	return p;
}

float Log(float a){
	return log(a);
}

double nth(int a){
	double harmonic=0.0;
	for(int i=1;i<=a;i++){
	harmonic+=1.0/i;	
	}
	return harmonic;
}

float baseLog(float a){
	return log10(a);
}

float sine(float a){
	return sin(a);
}

float cosine(float a){
	return cos(a);
}

float tangent(float a){
	return tan(a);
}

double root4th(double a){
	return pow(a,0.25);
}

double cuberoot(double a){
	return cbrt(a);
}

double squareroot(double a){
	return sqrt(a);
}

int factorial(int a){
	int fact=1;
	if(a==0){
	return 0;
	}
	for(int i=1;i<=a;i++){
		fact*=i;
	}
	return fact;
}
void displayData() {
    ifstream file("data.txt");
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void display(){
	cout<<endl<<"\t -------------------------------------------------------"<<endl;
	cout<<"\t                        CALCULATOR                      "<<endl;
	cout<<      "\t -------------------------------------------------------"<<endl;
}
int menu()
{
	int choice;
	double x,y;
	fstream file;
    file.open("data.txt", ios::app | ios::out | ios::in); // open file for reading and writing
    
	
	cout<<endl;
	cout<<"\t1: Addition\t\t  9: Natural Logarithm"<<endl;
	cout<<"\t2: Subtraction\t\t 10: Factorial"<<endl;
	cout<<"\t3: Multiplication\t\ 11: Sine"<<endl;
	cout<<"\t4: Division\t\t 12: Cosine"<<endl;
	cout<<"\t5: Logarithm\t\t 13: Tangent"<<endl;
	cout<<"\t6: nth Harmonic\t\t 14: 4th Root"<<endl;
	cout<<"\t7: Module\t\t 15: Cube Root"<<endl;
	cout<<"\t8: Power\t\t 16: Square Root"<<endl;
	cout<<"\t17: Previously stored Calculations"<<endl;
	cout<<"\tPress 0 for Exit"<<endl;
	cout<<endl<<"\tEnter the function you want to perform = ";
	cin>>choice;
	switch (choice){
		case 0:
			cout<<endl<<"\tCalculation is stopped"<<endl<<endl;
			break;
		case 1:
			cout<<endl;
		    cout<<"Enter two numbers for Addition: "<<endl;
		    cout<<endl;
			cin>>x>>y;
		    if (x >= 'a' && x <= 'z'||y>='a'&&y<='z')
			return 1;
			file << "Addition: " << x << " + " << y << " = " << addition(x, y) << endl; // write to file
			cout<<"Result: "<<addition(x,y)<<endl;
			cout<<endl;
			break;
		
		case 2:
			cout<<"Enter two numbers for Subtraction: "<<endl;
			cout<<endl;
			cin>>x>>y;
			if (x >= 'a' && x <= 'z'||y>='a'&&y<='z')
			return 1;
			file << "Subtraction: " << x << " - " << y << " = " << subtraction(x, y) << endl; // write to file
			cout<<"Result: "<<subtraction(x,y)<<endl;
			cout<<endl;
			break;
		case 3:
			cout<<endl;
			cout<<"Enter two numbers for Multiplying: "<<endl;
			cout<<endl;
			cin>>x>>y;
			if (x >= 'a' && x <= 'z'||y>='a'&&y<='z')
			return 1;
			file << "Multiplication: " << x << " * " << y << " = " << multiply(x, y) << endl; // write to file
			cout<<"Result: "<<multiply(x,y)<<endl;
			cout<<endl;
			break;
		case 4:
			cout<<endl;
		    cout<<"enter two numbers to Divide: "<<endl;
		    cout<<endl;
			cin>>x>>y;
			if (x >= 'a' && x <= 'z'||y>='a'&&y<='z')
			return 1;
			if(y==0){
				cout<<"Math Error \nResult: Undefined "<<endl;
				cout<<endl;
				break;
			}
			file << "Division: " << x << " / " << y << " = " << division(x, y) << endl; // write to file
			cout<<"Result: "<<division(x,y)<<endl;
			cout<<endl; 
			break;
		case 5:
			cout<<endl;
			cout<<"Enter a number to calculate Log with base 10: "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			cout<<"Result: "<<baseLog(x)<<endl;
			cout<<endl;
			break;
		case 6:
			cout<<endl;
			cout<<"Enter a number to calculate its nth Harmonic: "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			file<<"The nth harmonic of "<<x<<" is "<<nth(x)<<endl;
			cout<<"Result: "<<nth(x)<<endl;
			cout<<endl;
			break;
		case 7:
			cout<<endl;
			cout<<"Enter two numbers to calculate Modulo: "<<endl;
			cout<<endl;
			cin>>x>>y;
			if (x >= 'a' && x <= 'z'||y>='a'&&y<='z')
			return 1;
			file << "Modulo: " << x << " % " << y << " = " << modulo(x, y) << endl; // write to file
			cout<<"Result: "<<modulo(x,y)<<endl;
			cout<<endl;
			break;
		case 8:
			cout<<endl;
			cout<<"Enter number to calculate Power: "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z'||y>='a'&&y<='z')
			return 1;
			cout<<"Enter Power factor: "<<endl;
			cout<<endl;
			cin>>y;
			file<<"Power of given number "<<x<<" is = "<<power(x,y);
			cout<<"Result: "<<power(x,y)<<endl;
			cout<<endl;
			break;
		case 9:
			cout<<endl;
			cout<<"Enter number to find Natural Log: "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			file<<"Natural Log of provided number "<<x<<" is = "<<Log(x)<<endl;
			cout<<"Result: "<<Log(x)<<endl;
			cout<<endl;
			break;
		case 10:
			cout<<endl;
			cout<<"Enter a number (other than 0) to find its Factorial; "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			if(x==0){
				break;
			}
			file<<"Factorial of "<<x<<"!= "<<factorial(x)<<endl;
			cout<<"Result: "<<x<<"!= "<<factorial(x)<<endl;
			cout<<endl;
			break;
		case 11:
			cout<<endl;
			cout<<"Enter number to Calculate Sine: "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			file<<"Sine of "<<x<<" is = "<<sine(x)<<endl;
			cout<<"Result: "<<sine(x)<<endl;
			cout<<endl;
			break;
		case 12:
			cout<<endl;
			cout<<"Enter number to Calculate Cosine: "<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
		    file<<"Cosine of "<<x<<" is "<<cosine(x)<<endl;
			cout<<"Result: "<<cosine(x)<<endl;
			cout<<endl;
			break;
		case 13:
			cout<<endl;
			cout<<"Enter number to Calculate Tangent"<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			if(x==90){
			cout<<"Math Error..."<<endl;
			cout<<endl;
			break;
			}
			file<<"Tangent of "<<x<<" is = "<<tangent(x)<<endl;
			cout<<"Result: "<<tangent(x)<<endl;
			cout<<endl;
			break;
		case 14:
			cout<<endl;
			cout<<"Enter a number to Calculate its 4th Root: "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			file<<"4th Root of "<<x<<" is "<<root4th(x)<<endl;
			cout<<"Result: "<<root4th(x)<<endl;
			cout<<endl;
			break;
		case 15:
			cout<<endl;
			cout<<"Enter number to Calculate Cube Root: "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			file<<"cube Root of "<<x<<" is = "<<cuberoot(x)<<endl;
			cout<<"Result: "<<cuberoot(x)<<endl;
			cout<<endl;
			break;
		case 16:
			cout<<endl;
			cout<<"Enter number to Calculate Square Root: "<<endl;
			cout<<endl;
			cin>>x;
			if (x >= 'a' && x <= 'z')
			return 1;
			file<<"Square Root of "<<x<<" is = "<<squareroot(x)<<endl;
			cout<<"Result: "<<squareroot(x)<<endl;
			cout<<endl;
			break;		
		case 17:
			displayData();
			cout<<endl;
			break;
			
		default:
		    cout<<"Invalid Choice "<<endl;
	}
	file.close();
}
	
