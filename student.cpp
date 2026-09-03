#include <iostream>
#include <string>
using namespace std;

class student
{
public:
int rollno;
string name;
float marks;

void getdata()
{
 cout<<"Enter student name"<<endl;
 cin.ignore();
 getline(cin,name);

 cout<<"Enter the Roll no"<<endl;
 cin>>rollno;

 cout<<"Enter the Marks"<<endl;
 cin>>marks;
}



void calculateresult()
{
 if(marks>=35)
 {
  cout<<"Student result is Pass"<<endl;
 }
 else
 {
  cout<<"Student result is fail"<<endl;
 }
}

void display()
 {
  cout<<"Student name is : "<<name <<endl;
  cout<<"Roll No. : "<< rollno <<endl;
  cout<<"marks : "<<marks <<endl;

  calculateresult();
 }
};

int main()
 {
   student s;

   s.getdata();
   s.display();

return 0;
}
