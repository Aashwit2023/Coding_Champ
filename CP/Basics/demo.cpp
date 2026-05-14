#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	// Writing output to STDOUT
	if(num>=1 || num<=10){
    int count=1;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
            count++;
		}
        cout<<endl;
		}
	}
	return 0;
}