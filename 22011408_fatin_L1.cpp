#include <iostream>
using namespace std;
/*
ID = 22011408
name = Fatin Nadiah binti Mohd Ali
*/
struct Student{
    string id;
    string name;
    string contact;
    string email;
  };
  
int main() 
{
  
  
  Student student [5];
  
  for (int i = 0;i< 5; i++){
    cout << "Student " << (i + 1);
    cout << endl;
    
    cout << "NAME: ";
    getline (cin, student[i].name);
    
    cout << "ID: ";
    getline (cin, student[i].id);
    
    cout << "CONTACT: ";
    getline (cin, student[i].contact);
    
    cout << "EMAIL: ";
    getline (cin, student[i].email);
    
    cout << endl;
  }
  
  for (int i = 0; i < 5; i++){
    cout << "Student " << (i + 1);
    cout << endl;
    cout << "Name: " << student[i].name << endl;
    cout << "ID: " << student[i].id << endl;
    cout << "Contact: " << student[i].contact << endl;
    cout << "Email: " << student[i].email << endl;
    cout << endl;
  }
}