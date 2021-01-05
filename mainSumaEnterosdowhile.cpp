#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,suma;
	suma=0;
	i=2;
	do
	{
	suma=suma+i;
	i=i+2;
	cout <<suma <<endl;
    }while (i<=100);
	return 0;
}
