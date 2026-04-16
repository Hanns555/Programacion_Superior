#include <iostream>

using namespace std;

void pass(int *x,int *y)
{
	*x= 20;
	*y= 30;
}

int main(){
	int x=5;
	int y=10;
	pass(&x,&y);
	cout<<"Los valores son: "<<x<<" "<<y<<endl;
	return 0;
}
