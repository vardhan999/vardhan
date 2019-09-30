 #include<iostream>
 using namespace std;
 void copyupper()
{
	ifstream fin;

	fin.open("FIRST.TXT");
	ofstream fout;
	fout.open("SECOND.TXT");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		ch=toupper(ch);
		fout<<ch;
	}
	fin.close();
	fout.close();
}
 



