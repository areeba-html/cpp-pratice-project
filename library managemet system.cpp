#include<iostream>
#include<string>
using namespace std;
struct book{
	string bookname;
	string author;
	int bookId;
	bool available;
};
class library{
	private:
		book books[5]={{"urdu","Ali",3564,true},
		               {"English","Bilal",3783,true},
					   {"Maths","muhammad basit",7837,true}
				};
	public:
//	library(string bookname,string author,int bookId){
//		books!=false;
//		if(books!){
//			cout<<"Books are not available"<<endl;
//		else{
//			cout<<"Book available"<<endl;
//		}	
//		};
//	};
//	void Add(Addbook){
//		books=5;
//		cout<<"Enter book name:"<<endl;
//		cin>>Bookname<<endl;
//		cout<<"Enter book author:"<<endl;
//		cin>>Author<<endl;
//		cout<<"Enter book Id:"<<endl;
//		cin>>bookId;
//		
//		books=books+1;
//		cout<<books<<endl;
//		
//	};	
	
	void searchbook(int bookId){
		for(int i=0;i<5;i++){
			if(books[i].bookId==bookId){
				if (books[i].available){
					cout<<"Book available"<<endl;
				}
				else{
					cout<<"book is not avaialbe:"<<endl;
				}
				return ;
			}
		}
	};	
	void borrowbook(int bookId){
			for(int i=0;i<5;i++){
				if(books[i].bookId==bookId){
					if (books[i].available){
						cout<<"You can borrow book"<<endl;
							books[i].available=false;
					}
					else{
						
						cout<<"book not avaialbe"<<endl;
					}
					return;
				
				}
			}
			cout<<"book not found"<<endl;
	};
	void returnbook(int bookId){
			for(int i=0;i<5;i++){
			if(books[i].bookId==bookId){
			books[i].available=true;
			cout<<"Book returned successfully"<<endl;
			return;
			}
			cout<<"Book not found"<<endl;
		}
	}
		   
};


int main(){
	library b1;
	b1.searchbook(3783);
	b1.borrowbook(3783);
	b1.returnbook(3783);
	return 0;
}
