#include <iostream>
#include <iomanip>
using namespace std;

#include <conio.h>

class Recur
{
private:
	int *a, n, stop;
	void MakePoints(int c);
public:
	void Print();
	Recur(int count);
	~Recur();
};

void Recur::MakePoints(int c)
{
	for(int i = 0; i <= 9; i++)
	{
		a[c] = i;
		if(c < n-1)
			MakePoints(c+1);
		else
		{
			for(int j = 0; j < n; j++)
				cout << setw(4) << a[j];
			stop++;
			if(!(stop % 4))
			{
				cout << " Press any key! ";
				getch();
			}
			cout << endl;
		}
	}
}

Recur::Recur(int count)
{
	n = count;
	a = new int[n];
}

Recur::~Recur()
{
	delete []a;
}

void Recur::Print()
{
	stop = 0;
	MakePoints(0);
}

int main()
{
	Recur ob(3);
	ob.Print();
	return 0;
}
