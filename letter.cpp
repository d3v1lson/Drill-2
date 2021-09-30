#include "std_lib_facilities.h"

int main(){

	int age;
	string my_name;
	string first_name;
	string friend_name;
	char friend_sex = 0;

	cout << "Enter your name:\n";
	cin >> my_name;

	cout << "Enter the name of the person you want to write to:\n";
	cin >> first_name;

	cout << "Enter the age of the person who you are writing to:\n";
	cin >> age;

	cout << "Enter the name of another friend:\n";
	cin >> friend_name;

	cout << "Enter the sex of your friend with one letter(m is male, f is female):\n";
	cin >> friend_sex;
	

	if(age <= 0 || age >= 110) simple_error("You're kidding!");

	cout << "Dear " << first_name << ",\n";
	cout << "I haven't seen you in a long time. Is everything okay with you? I hope it is. Maybe we could meet one time if you want to. " << endl;
	cout << "Have you seen " << friend_name << " lately?\n";

	if(friend_sex == 'm'){
			cout << "If you see " << friend_name << " please ask him to call me. ";
		}
		else (friend_sex == 'f');{
			cout << "If you see " << friend_name << " please ask her to call me. ";
		}

	cout << "I hear you just had a birthday and you are "  << age << " years old. ";

	if(age < 12){
		cout << "Next year you'll be " << age + 1 << "." << endl;

	}
	else if(age == 17){
		cout << "Next year you'll be able to vote. " << endl;

	}
	else if(age > 70){
		cout << "I hope you are enjoying retirement. " << endl;
	}

	cout << endl << endl << "Yours sincerely, " << my_name << endl;               //Szoszi van!
	return 0;
}
