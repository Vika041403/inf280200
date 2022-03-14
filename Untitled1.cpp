#include <iostream>
using namespace std;
int main(){
	int x=1;
	int y;
	int i;
for (i=1;i<=10;i++){
	y=x*x;
	cout<<x<<'\t'<<y<<endl;
	x+=3;
}
return 0;
}