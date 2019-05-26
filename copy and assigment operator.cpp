#include<iostream>
using namespace std;
class student {
public:
	student(const string anun1, const string azganun1, const unsigned& gnahatakan1, const unsigned& bacakaneri_qanak1)
		:anun(anun1), azganun(azganun1), gnahatak(gnahatakan1), bacakaneri_qanak(bacakaneri_qanak1) {}
	student(const student& other)
	{
		anun = other.anun;
		azganun = other.azganun;
		gnahatak = other.gnahatak;
		bacakaneri_qanak = other.bacakaneri_qanak;
	}
	student& operator=(const student& other)
	{
		if (this != &other)
		{

			anun = other.anun;
			azganun = other.azganun;
			gnahatak = other.gnahatak;
			bacakaneri_qanak = other.bacakaneri_qanak;
		}
	}
	void good_student()
	{
		if (gnahatak > 85 && gnahatak <= 90 && bacakaneri_qanak < 15)
		{
			cout << anun << " is good student: ";
		}
		else if (gnahatak >= 40 && gnahatak <= 85 && bacakaneri_qanak < 30)
		{
			cout << anun << " is a normally student:";
		}
		else
		{
			cout << anun << "is a bad student: ";
		}

	}
private:
	string anun;
	string azganun;
	unsigned gnahatak;
	unsigned bacakaneri_qanak;


};
int main()
{
	student* hummen = new student("Aram", "Hakobyan", 90, 2);
	hummen->good_student();
	student obj(*hummen);

	cout << "\n \n";

	obj.good_student();

	student* ptr = new student("Argam", "Makaryan", 45, 14);
	cout << "\n \n";
	student obj1 = *ptr;
	obj1.good_student();

	cout << "\n \n";
	student hummen1("Vahram", "Avagyan", 40, 120);
	hummen1.good_student();
	cout << "\n \n";

}
