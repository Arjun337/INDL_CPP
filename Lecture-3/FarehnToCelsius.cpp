// FarehnToCelsius
#include <iostream>
using namespace std;

int main(){
	int init,fval,step;
	cin>>init>>fval>>step;
	int f=init;
	while(f<=fval){
		int c=5*(f-32)/9;

		cout<<f<<" "<<c<<endl;

		f=f+step;
	}




	cout<<endl;
	return 0;
}