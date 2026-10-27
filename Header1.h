#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Student
{
	string name;
	string surname;
	string university;
	int age;
public:
	Student() {}
	Student(string n, string sur, string un, int a)
	{
		name = n;
		surname = sur;
		university = un;
		age = a;
	}
	void Init()
		cout << "Name: ";
	cin >> name;
	    cout << "Surname: ";
		cin >> surname;
		cout << "University: ";
		cin >> university;
		cout << "Age: ";
		cin.ignire()
		cin >> age;
		void Print()
		{
			cout << "Name: " << name << endl<<
			"Surname: " << surname << endl<<
			"University: " << university << endl << 
			"Age: " << age << endl;
	}

		void WriteFile(string filename)
		{
			ofstream write(filename, ios::app | ios::out);
			write << "Name: " << name << endl <<
				"Surname: " << surname << endl <<
				"University: " << university << endl <<
				"Age: " << age << endl;
			write.close();
	}
	static void ReadFile(string filename);
	ifstream read(filename, ios::in);
	char buffer[100];
	do
	{
		read.getline(buffer, 100);
		cout << buffer << endl;
	} while (read);

	read close();

};
