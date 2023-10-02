#include <iostream>
#include <cstring>
using namespace std;

class student
{
private:
	char *name;
	int day;
	int month;
	int year;
public:
	student(char* name, int day, int month, int year)
	{
		int len = strlen(name) + 1;
		this->name = new char[len];
		strcpy(this->name, name);
		this->day = day;
		this->month = month;
		this->year = year;
	}
	student()
	{
		name = NULL;
		day = 0;
		month = 0;
		year = 0;
	}
	int GetYear()
	{
		return year;
	}
	int GetMonth()
	{
		return month;
	}
	int GetDay()
	{
		return day;
	}
	void GetName()
	{
		cout << name << endl;
	}
	void SetInfo(char* name, int day, int month, int year)
	{
		this->name = name;
		this->day = day;
		this->month = month;
		this->year = year;
	}
};

int compare(const void* first, const void* second)
{
	student A = *(student*)first;
	student B = *(student*)second;

	if (A.GetYear() > B.GetYear())
		return 1;
	else if (A.GetYear() < B.GetYear())
		return -1;
	else
	{
		if (A.GetMonth() > B.GetMonth())
			return 1;
		else if (A.GetMonth() < B.GetMonth())
			return -1;
		else
		{
			if (A.GetDay() > B.GetDay())
				return 1;
			else if (A.GetDay() < B.GetDay())
				return -1;
		}
	}
}

int main(void)
{
	student sarr[100];
	char name[16];
	char* strptr;
	int day, month, year;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", &name, &day, &month, &year);
		int len = strlen(name) + 1;
		strptr = new char[len];
		strcpy(strptr, name);
		sarr[i].SetInfo(strptr, day, month, year);
	}

	qsort(sarr, n, sizeof(student), compare);

	sarr[n - 1].GetName();
	sarr[0].GetName();
}