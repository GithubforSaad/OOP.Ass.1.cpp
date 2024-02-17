#include<iostream>

using namespace std;

int National_type;
int gender_type;

struct Address
{
      string city;
      string street;

};

struct Foreigner
{
      int f_visitorNo;
      int f_passfortNo;

};

struct National
{
      char n_cnic[25];
      int n_familyNo;

};

union PersonType
{
      Foreigner p_foreigner;
      National p_national;

};

enum  Gender
{
      Male,
     Female

}; 

struct Person
{
    string p_name;
    int p_age;
    Address p_address;
    PersonType p_type;
    Gender P_gender;
    string p_degrees[3];

};

void countPersonRecord(Person person)
{

     cout<<"The name: "<<person.p_name<<endl;
     cout<<"The age: "<<person.p_age<<endl;
     if(gender_type==1)
     {
     cout<<"person is Female."<<endl;
     }
     else if(gender_type==2)
     {
     cout<<"person is Male."<<endl;
     }
     cout<<"The city address: "<<person.p_address.city<<endl;
     cout<<"The street address: "<<person.p_address.street<<endl; 
     if(National_type==1)
     {  
     cout<<"The cnic number: "<<person.p_type.p_national.n_cnic<<endl;
     cout<<"The family number: "<<person.p_type.p_national.n_familyNo<<endl;
     }
     else if(National_type==0) 
     {
     cout<<"The visitor number: "<<person.p_type.p_foreigner.f_visitorNo<<endl;
     cout<<"The passfort number: "<<person.p_type.p_foreigner.f_passfortNo<<endl;
     } 
     for(int i=0;i<3;i++)
     {    
     cout<<"The person study are: "<<person.p_degrees[i]<<endl;
     }
}

void editPersonRecord(Person& person)
{
      char ChangeSelection;
      cout<<"Enter a to change name."<<endl;
      cout<<"Enter b to change age."<<endl;
      cout<<"Enter c to change gender."<<endl;
      cout<<"Enter d to change address."<<endl;
      cout<<"Enter e to change person type."<<endl;
      cout<<"Enter f to change degrees."<<endl;
      cin>> ChangeSelection;
      switch (ChangeSelection)
      {
      case 'a':
           cout<<"Enter your new name: ";
           cin>>person.p_name;
      break;
      case 'b':
           cout<<"Enter your new age: ";
           cin>>person.p_age;
      break;
      case 'c':
           cout<<"Enter your new gender: ";
           cin>>gender_type;
           if(gender_type==1)
           {
            person.P_gender=Female;

             }
            else if(gender_type==2)
            {
            person.P_gender= Male;
            }
      break;
      case 'd':
           cout<<"Enter your new city address: ";
           cin>>person.p_address.city;
           cout<<endl;
           cout<<"Enter your new street adress:";
           cin>>person.p_address.street;
            break;
      case 'e':
           cout<<"Enter your new person type: ";
           cin>>National_type;
           if(National_type==1)

          {
          cout<<"Enter the cnic number: ";
          cin>>person.p_type.p_national.n_cnic;
          cout<<endl;
          cout<<"Enter the  family number: ";
          cin>>person.p_type.p_national.n_familyNo;
          cout<<endl;
          }
          else if(National_type==0)
          {
          cout<<"Enter the passport number: ";
          cin>>person.p_type.p_foreigner.f_passfortNo;
          cout<<endl;
          cout<<"Enter the  visiter number: ";
          cin>>person.p_type.p_foreigner.f_visitorNo;
          cout<<endl;
      break;
      case 'f':
       for(int j=0;j<3;j++)
           {
           cout<<"Enter your new degree: ";
           cin>>person.p_degrees[j];
           }
            break;
      
      default:
      cout<<"Wrong:";
            break;
      }
 
}

}


