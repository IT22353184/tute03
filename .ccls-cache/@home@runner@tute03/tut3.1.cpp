#include<iostream>
#include<iomanip>

using namespace std;
 int main()
 {
 float marks[]={74.8,90.6,45.9,72.2,54.4};
 char name[][20]={"ajith","wimal","kanthi","suranji","kushmitha"};
 
 int r;
 cout <<setw(5)<< "No" <<setw(15)<< "Name" << setw(10)<<"Marks" << endl;

 for(r=0; r<5;r++ ){
 
 
 cout<<setw(5)<<setiosflags(ios::fixed)<<r+1
 <<setw(15)<<setiosflags(ios::fixed)<< name[r]<<
 setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<<marks[r]<<endl;
  
}
 }	
 