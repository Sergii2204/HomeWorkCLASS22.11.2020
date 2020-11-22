#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;

class Student
{
public:
	string name;
	string sername;
	void setName(string _Name)
	{
		
		
		for (int i = 0; i < _Name.length(); i++)
		{
			if ((_Name[i] >= 'a') && (_Name[i] <= 'z') || (_Name[i] >= 'A') && (_Name[i] <= 'Z'))
			{
				name = _Name;

			}
			else
				name = "The name must be without numbers";
			
			if(_Name[0] >='a' && _Name[0]<='z')
			{
				_Name[0] = toupper(_Name[0]);
				name = _Name;
			}
		}
    }
	string getName()
	{
		return name;
	}

	void setSername(string _Sername)
	{
		for (int i = 0; i < _Sername.length(); i++)
		{
			if ((_Sername[i] >= 'a') && (_Sername[i] <= 'z') || (_Sername[i] >= 'A') && (_Sername[i] <= 'Z'))
			{
		sername = _Sername;

			}
			else
				sername = "The name must be without numbers";

			if (_Sername[0] >= 'a' && _Sername[0] <= 'z')
			{
				_Sername[0] = toupper(_Sername[0]);
				sername = _Sername;
			}
		}
	}
	string getSername()
	{
		return  sername;
	}

	void setAge(int _age)
	{
		age = _age;
	}
	int getAge()
	{
		return  age;
	}

	void setmarksPROG(int prog)
	{
		if (prog >= 1 && prog <= 12)
		{
			marksPROG = prog;

		}
		else
		{

			cout << "error 1-12" << endl;
		marksPROG = 0;
		}
	}
	int getmarksPROG()
	{
		return marksPROG;
	}

	void setmarksADMIN(int admin)
	{
		if (admin >= 1 && admin <= 12)
		{
		marksADMIN = admin;
		}
		else
		{
			cout << "error 1-12" << endl;
		marksADMIN = 0;
		}
	}

	int getmarksADMIN()
	{
		return	marksADMIN;
	}

	void print()
	{
		cout << "¹ " << counter+1 << endl;
		cout << "name       " << name << endl;
		cout << "sername    " << sername << endl;
		cout << "age        " << age << endl;
		cout << "marksPROG  " << marksPROG << endl;
		cout << "marksADMIN " << marksADMIN << endl;
	}
private:

	int counter=0;
	int marksPROG;
	int marksADMIN;

	protected:

	int age;

};

void main()
{
	setlocale(LC_ALL, "rus");
	
	int size = 2;
	int m;
	string na;
	string se;
	int age;
	int marksPROG;
	int marksADMIN;
	int counter=0;
	Student* FirstStudent = new Student [size];
	
		for (int i = 0; i < size; i++)
		{
	cout << "Name";
	getline(cin, na);
	cout << "sername";
	getline(cin, se);
	cout << "age";
	cin >> age;
	cout << "marksPROG";
	cin >> marksPROG;
	cout << "marksADMIN";
	cin >> marksADMIN;
	cin.ignore();

	FirstStudent[i].setName(na);
	FirstStudent[i].setSername(se);
	FirstStudent[i].setAge(age);
	FirstStudent[i].setmarksPROG(marksPROG);
	FirstStudent[i].setmarksADMIN(marksADMIN);

	/*FirstStudent->getName();
	FirstStudent->getSername();
	FirstStudent->getAge();
	FirstStudent->getmarksPROG();
	FirstStudent->getmarksADMIN();*/
	FirstStudent[i].print();
	//counter++;
	    }
	
	


	do
	{
	cout << "ÌÅÍÞ" << endl;
		cout << "ÂÛÁÎÐ ÌÅÍÞ" << endl;
		cout << "ÂÛÁÅÐÈ ÑÒÓÄÅÍÒÀ";
		cin >> size;
			 cout<<"1. Change Name"<<endl;
			 cout<<"2. Change marker programs"<<endl;
			 cout<<"3. Change marker adminka"<<endl;
			 cout<<"4. Change Age"<<endl;
			 cout<<"0. Exit" << endl;

		cin >> m;
		if (m == 1)
		{
			cout << "Change Name";
			cin.ignore();
			getline(cin, na);
			FirstStudent[size].setName(na);
			FirstStudent[size].print();
			cout << FirstStudent[size].name << endl;
		}
		if (m == 2)
		{
			cout << "Change marker programs";
			cin >> marksPROG;
			FirstStudent[size].setmarksPROG(marksPROG);
			FirstStudent[size].print();
		}
		if (m == 3)
		{
			cout << "Change marker adminka";
			cin >> marksADMIN;
			FirstStudent[size].setmarksADMIN(marksADMIN);
			FirstStudent[size].print();
		}
		if (m == 4)
		{
			cout << "Change Age";
			cin >> age;
			FirstStudent[size].setAge(age);
			FirstStudent[size].print();
		}

	} while (m != 0);
}
