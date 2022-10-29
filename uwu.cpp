#include <iostream>
using namespace std;
int main() {
	//1	
	/*int k=0;
	int s = 0;
	int x;
	do {
		cin >> x;
		k++;
		s += x;
	} while (x != 0);
	double sp = (double)s / k;
	cout << k << " " << s << " " << sp <<endl;*/
	//2
	/*int	a, b, i, s = 0;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 != 0) {
			s += i;
			
		}
		i += 1;
	} while (i <= b);
	cout << s << " ";*/
	//3
	 //^
  //  ^^^
  // ^^^^^
	//int h , i ;
	//cin >> h;
 //   i = 1;
	//do {
	//	for (int j = 1; j <= h - i; j++)
	//		cout << ' ';
	//	for (int j = 1; j <= 2 * i - 1; j++)
	//		cout << '^';
	//	cout << endl;
	//	i++;
	//} while (i <= h);
    //17.В ЭВМ вводятся по очереди данные о росте N учащихся класса.Определить средний рост учащихся класса.
	/*int n, r, s = 0;
     int i = 1;
	cout << " col. " << endl;
	cin >> n;
	do {
		cin >> r;
		s += r;
		i++;
	} while (i <= n);
	double sr;
	sr = s / n;
	cout << sr << " sred. rosr." << " ";*/
	//29
	//int  a, g;
	//a = 2;
	//g = 100;
	//do {
	//	a++;
	//		if (a % 2 == 0 )
	//		cout << a<< " ";
 //      
	//} while (a <= g);
	//30
	/*int  a, g, sum = 0;
	a = 1;
	g = 99;
	do {
		
		if (a % 2 != 0) {
			sum += a;
		}
		a++;
	} while (a <= g);
    cout << sum ;*/
	//18
	/*int n, i = 1, l = 0;
	cin >> n;
	do {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			l++;
		}
		i++;
	} while (i <= n);
	cout << l;*/
	//22
	int n, i = 1 ;
	double s = 0;
	cin >> n;
	do {
		s = (double)s + 1 / i;
		i++;
	} while (i <= n);
	cout << s;

}