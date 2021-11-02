#include<iostream>
using namespace std;
//137307 Michael Ndigi Mukora
int main()
{
int grade;
string Name;
	cout<<"Please Type in your name\n";
	cin>>Name;
cout<<"Please enter the grade\n";
cin>>grade;
if(grade>=70){
	cout<<Name <<"got an"<<"A\n";
}

else if(grade>=60 && grade<=69){
cout<<Name <<"got a B\n";
}

else if(grade>=50 && grade<=59){
cout<<Name <<"got a C\n";
}

else if(grade>=40 &&  grade<=49){
cout<<Name <<"got a D\n";
}

else{
	cout<<Name <<"got a F\n";
}
return 0;
}
