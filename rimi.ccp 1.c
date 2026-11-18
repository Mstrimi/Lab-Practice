#include<bits/stdc++.h>
using namespace std;
class student
{
private
    int studentId;
    string studentName;
    double Cgpa;
public:
    void setstudentId(int studentId)
    {

        this->studentId=studentId;

    }
    void setstudentName(string studentName)
    {
        this->studentName=studentName;

    }
    void setcgpa(double cgpa)
    {
        this->cgpa=cgpa;
    }
    int getstudentId;
    {
        return studentId;
    }
    string getstudent Name()
    {
        return studentName;
    }
    double getcgpa()
    {
        return cgpa;
    }
};
int main()
{
    student s1;


    s1. setstudentId(307);
    s1 setstudentName("rimi");
    s1.setcgpa(3.00);
    cout<<s1.getstudentId()<<endl;
    cout<<s1.getstudentName()<<endl;
    cout<<s1.getcgpa()<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class BankAccount
{
private
    int accountNumber;
    string accountHolder;
    double balance;

public:
    void setaccountNumber (int accountNumber)
    {
        this->accountNumber=accountNumber;
    }
    void setaccountHolder( string accountHolder)
    {
        this->accountHolder=accountHolder;
    }
    void setbalance(double balance)
    {
      if(balance>=0)
    {
        this->balance=balance;
    }
    else
    {
        cout<<"invalid balance"<<endl;
    }
  }
  int getaccountNumber()
  {
      return accountNumber;
  }
  string getaccountHolder{}
  {
      return accountHolder;
  }
  double getbalance;
  {
      return balance;
  }
};
int main ()
{
    BalanceAccount s1;

    s1.setaccountNumber(1081156980001);
    s1.setaccountHolder("RIMI");
    s1.setbalance(49000.00);

    cout<<"Account number:"<<s1.getaccountNumber()<<endl;
    cout<<"holder name :"<<s1.getaccountHolder()<<endl;
    cout<<"balance :"<<s1.getbalance()<<endl;


#include<bits/std++.h>
using namespace;

 class shape
 {
projected:
    double dimension;
public:
    void getDimension()
    {
       cin>>dimension;
    }
    virtual double calculaterArea()=0;

 };
 class square :public shape
 {
 public:
    double calculateArea()
    {
        return dimension*dimension;

    }
 };
 class Circle:public shape
 {
 public:
    double calculaterArea()
 {
     return 3.14*dimension*dimension;
 }
 };
 int main()
 {
 Square s1;
 Circle c1;

  cout<,"enter the lenght of square" <<endl;
  s1.getDimension();
  cout<<"Area of square;"<< s1.calculaterArea()<<endl;
  cout<<"enter the radius of circle" <, endl;
  c1.fetDimension();
  cout<<"Area of circle:"<<c1.calculaterArea()<<endl;
  return 0;
 }

 #include<bits/stdc++.h>
 using namespace std;

  class smartphone
  {
  public:
  virtual void takeselfie()=0;
  virtual void makeCall()=0;

  virtual~Smartphone(){}
  };
  class Android:public Smartphone
  {
  public:
    void takeSelfie()
    {
        cout<<"Android selfie"<<endl;
    }

  };
  class Iphone:publicSmartphone
  {
  public:
    void takeSelfie()

  {
      cout<<"Iphone Selfie"<< endl;
  }
  };
  class Iphone:public Smartphone
  {
  public:
    void takeselfie()
  {
      cout<<"Iphone selfie"<<endl;
  }
  void makeCall()
  {
      cout<<"Iphone calling"<<endl;
  }
  };
  int main()
  {
      Smartphone*phone1= new Android();
      Smartphone*phone2= new Iphone();

      phone1->takeselfie();
      phone1->makeCall();

      cout<<endl;

      phone2->takeSelfie();
      phone2->takeSelfie();

      delete phone1;
      delete phone2;

      return 0;
  }


#include<isotream>
#include<string>
using namespace std;

  class person
  {
   public:
   string name;
   int age;
   void displaypersonalnfo()
   {
    cout<<"Name:"<<name<<endl;
   }
  };
  class Employee:public person
  {
  public:
    int employeeld;
    double salary;
    void displayEmployeeinfo()
    {
        displaypersoninfo();
        cout<<"EmployeeID:"<<employeeld<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
  };
  int main()
  {
    Employee e1;

    e1.name="Rimi";
    e1.age=30;
    e1.employeeld=3291
    e1.salary=55000.50;

    cout<<"===Employeeinformation:::===="<<endl;
    e1.displayEmployeeinfo();

    return 0;
  }


  #include<isotream>
  using namespace std;

  class LandVehicle {
public:
void landinfo(){
    cout<<"This is a LandVehicle"<< endl;
}
};
class WaterVehicle{
public:
void waterVehicle{
cout<<"This is waterVehicle"<<endl;
}
};
class AmphibiousVrhicle:public LandVehicle,public watervehicle{
public:
    void displayVehicle Type(){
        cout<<"This is amphibiousVehicle"<<endl;
    }
    int main(){
        AmphibiousVehicle obj;

        obj.displayvehicleType();
        obj.landinfo();
        obj.waterinfo();
    return 0;
    }









