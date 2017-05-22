#include <iostream>
using namespace std;
 
int main(){
	int N, P, aux, i;
 
	while((cin >> N >> P) && N && P){
		aux = N%P > 0 ? (N/P) + 1 : (N/P);
		if(aux <= 6)
			cout << "Poodle" << endl;
		else if(aux > 20)
			cout << "Poooooooooooooooodle" << endl;
		else{
			cout << "P";
			for(i=0; i<(aux-4); i++)
				cout << "o";
			cout << "dle" << endl;
		}
	}
}
 
