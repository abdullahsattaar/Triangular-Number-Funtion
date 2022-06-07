#include <iostream>
using namespace std;
int Triangular (int num)
{
	int i=1;
	while(num>0)
	{
		num=num-i;
	    i=i+1;
	}
	if(num==0)
	  return 1;
	 else
		return 0;
	
}	
int main()
{
	int num,x;
	cout<<"Enter a number: "<<endl;
	cin>> num;
	x=Triangular (num);
	if(x==1)
		cout<<"Number is Triangular."<<endl;
	else
		cout<<"Not Triangular."<<endl;

	system("pause");
	return 0;
}