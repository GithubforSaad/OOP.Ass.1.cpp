#include<iostream>
#include "2023497_defination_2.cpp"
using namespace std;

int main()
{
     Person person_Record[5];
     Person *ptr;
     ptr=person_Record;
     insertNewRecord(ptr);
     cout<<endl;
     showAllRecords(ptr);

  return 0;    

}