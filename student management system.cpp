#include<iostream>
#include<cstring>
using namespace std;

class students{
	private:
		int marks[5];
		int Total;
		int Percentage;
		char grade;
	public:
	  string studentName;	
	  
	  students (string name,int sub1,int sub2,int sub3,int sub4,int sub5){
	  	studentName=name;
	  	marks[0]=sub1;
	  	marks[1]=sub2;
	  	marks[2]=sub3;
	  	marks[3]=sub4;
	  	marks[4]=sub5;
	  };
	  void calculateTotal(int sub1,int sub2,int sub3,int sub4,int sub5){
	  	Total=sub1+sub2+sub3+sub4+sub5;
	
	  };
	  void calculateGrade(){
	  Percentage=(Total*100)/500;
	  if(Percentage>=80){
	  	grade='A+';
	  }
	  else if(Percentage>=70){
	  	grade='A';
	  }
	  else if(Percentage>=60){
	  	grade='B';
	  }
	  else if(Percentage>=50){
	  	grade='C';
	  }
	
	  };
	  void display(){
	  	cout<<"Student name:"<<studentName<<endl;
	  	cout<<"Total marks:"<<Total<<endl;
	  	cout<<"Percentage:"<<Percentage<<endl;
	  	cout<<"Grade:"<<grade<<endl;
	  }
};
int main() {
    students s1("Ali", 80, 67, 89, 94, 77);

    s1.calculateTotal(80,67,89,94,77);
    s1.calculateGrade();
    s1.display();

    return 0;
}

