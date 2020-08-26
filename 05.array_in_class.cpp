//Program of array of students...in which take only 3 students and 3 subjects for every student..calculate total marks for every student

#include<iostream>
using namespace std;

class person
{

char name[10];
int sub[4];
public:
void getname()
{
  cout<<"\n Enter NAME ";
  cin>>name;
  cout<<"\nEnter marks 1 ";
  cin>>sub[0];
  cout<<"\nEnter marks 2 ";
  cin>>sub[1];
  cout<<"\nEnter marks 3 ";
  cin>>sub[2];
}

void display()
{
  cout<<"\n Name "<<name;
  cout<<"\nmarks1 : "<<sub[0];
  cout<<"\nmarks2 : "<<sub[1];
  cout<<"\nmarks3 : "<<sub[2];
  sub[3]=sub[0]+sub[1]+sub[2];
  cout<<"\nSum of marks is : "<<sub[3]<<endl;

}
};
int main()
{
	person p[10];
	for(int j=0;j<=3;j++)
	{
	 p[j].getname();
	 p[j].display();
	}
} 
