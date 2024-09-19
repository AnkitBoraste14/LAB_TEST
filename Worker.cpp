/*Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
Default values for Pay_Rate Rs. 500 per hours)*/
//using namespace std;
#include<iostream>
class worker
{
  	char	name[50]; 
        int noh; 
        void display()
       {
            cout<<"Name:"<<name<<"\n"<<"No of hours worked:"<<noh;
       }
      public:
      void calculate(int payrate=10)
      {

           noh=noh*payrate;
           display();  
      }
      void accept()
      {
      
         cout<<"Enter employee name: ";
         cin>>name;
         cout<<"Enter how many hours worked: ";
         cin>>noh;
         calculate();
      }
};
int main()
{
   worker w1;
   w1.accept();
    return(0);
}