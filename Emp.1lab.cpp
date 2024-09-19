/*Write a program create employee class with members variable as EmpId,Name of Employee and Salary. For 10 Employees
Print list of all employees.
Print list of employee who got heights salary.*/

#include<iostream>
using namespace std;
class Employee
{ 
  private:
  int emp_id,sal;
  char emp_name[20];
  public:
  void read()
  {
  	cout<<"\n Enter the employee id:";
  	cin>>emp_id;
	cout<<"\n Enter the employee name:";
	cin>>emp_name;
	cout<<"\n Enter the employee salary";
	cin>>sal;
  } 
  void print()
  {
  	cout<<"\nEmp number"<<emp_id<<"\t"<<"\nNumber"<<emp_name<<"\nSalary"<<sal;
  	
  }
  int salary()
  {
    return sal;
  }
};
main()
{
	Employee emp_obj[10];
	int i,total=0;
	float avg;
	cout<<"\n Enter Employee information";
	for(i=0;i<10;i++)
	{
		emp_obj[i].read();
		total=total + emp_obj[i].salary();
	}
	avg= total/10;
//	for(i=0;i<10;i++);
//	{
//		if(emp_obj[i].salary>maximum)
//		{
//			maximum=emp_obj[i].salary();
//		}
	cout<<"\n....................";
	for(i=0;i<10;i++)
	{
	    emp_obj[i].print();
	}
	cout<<"\n....................";
	cout<<"\n Total Salary = "<<total;
	cout<<"\n Average Salary = "<<avg;
	//cout<<"\n Highest Salary Employee Information\n";
//	for(i=0;i<10;i++)
//	{
//		if(maximum=emp_obj[i].salary();
//		{
//		emp_obj[i].print();
//		  break;
//		}
//	}
	
}


