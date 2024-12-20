#include<iostream>
#include<string>
using namespace std;

int main(){
	int countA = 0; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int countB = 0;
	int countC = 0;
	int countD = 0;
	int countF = 0;
	int studentCount = 0;
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do{
		studentCount++;
		cout << "\nAStudent [" << studentCount << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "0"){
			break;
		}
		if(grade == "A"){ // if grade is A
			countA++;
		}else if(grade == "B"){// if grade is B
			countB++;	
		}else if(grade == "C"){// if grade is C
			countC++;
		}else if(grade == "D"){// if grade is D
			countD++;
		}else if(grade == "F"){// if grade is F
			countF++;
		}else{ // grade is wrong input
			cout << "\nWrong input. Please input again." << endl;
			studentCount--;
		} 
	}while(true);
	
	
	cout << "\nIn total " << studentCount - 1 << " students." << endl;
	cout << "A = " << countA <<", ";
	cout << "B = " << countB <<", ";
	cout << "C = " << countC <<", ";
	cout << "D = " << countD <<", ";
	cout << "F = " << countF << endl;	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
