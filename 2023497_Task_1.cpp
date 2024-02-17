#include<iostream>
#include "2023497_defination_1.cpp"
using namespace std;


int main(){
      Person p1;
      cout<<"Enter the person name: ";
      cin>>p1.p_name;
      cout<<endl;
      cout<<"Enter the person age: ";
      cin>>p1.p_age;
      cout<<endl;
      cout<<"Enter the person gender: "<<endl;
      cout<<"1)Female: "<<endl;
      cout<<"2)Male: "<<endl;
      cin>>gender_type;
      if(gender_type==1)
      {
            p1.P_gender=Female;

      }
      else if(gender_type==2)
      {
            p1.P_gender= Male;
      }
      else 
      {
            cout<<"Invaild type of gender"<<endl;
            exit(0);
      }
      cout<<"Enter the person address of city: ";
      cin>>p1.p_address.city;
      cout<<endl;
      cout<<"Enter the person address of street: ";
      cin>>p1.p_address.street;
      cout<<endl;
      cout<<"Enter the person type: "<<endl;
      cout<<"1)National: "<<endl;
      cout<<"0)Foreigner: "<<endl;
      cin>>National_type;
      cout<<endl;
      if(National_type==1)

      {
      cout<<"Enter the cnic number: ";
      cin>>p1.p_type.p_national.n_cnic;
      cout<<endl;
      cout<<"Enter the  family number: ";
      cin>>p1.p_type.p_national.n_familyNo;
      cout<<endl;
      }
      else if(National_type==0)
      {
      cout<<"Enter the passport number: ";
      cin>>p1.p_type.p_foreigner.f_passfortNo;
      cout<<endl;
      cout<<"Enter the  visiter number: ";
      cin>>p1.p_type.p_foreigner.f_visitorNo;
      cout<<endl;
      }   
      else 
      {
      cout<<"Invaild national type "<<endl; 
      exit(0);
      }   
      for(int i=0;i<3;i++)
      {
            cout<<"Enter the "<<i+1<<"  degree program: ";
            cin>>p1.p_degrees[i];
      }
      cout<<endl; 
      cout<<"--------person record----------"<<endl;
      countPersonRecord(p1);
      cout<<endl;
      int change_info;
      cout<<"Do you want to change the information of person: ";
      cout<<"Enter 1) Yes , 0) No: "<<endl;
      cin>>change_info;
      if(change_info==1)
      {
            editPersonRecord(p1);
            countPersonRecord(p1);

      }
      else if(change_info==0)
      {
            cout<<"Good Bye"<<endl;
      }

      return 0;
}




















