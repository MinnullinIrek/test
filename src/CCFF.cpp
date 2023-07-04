#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
void HomePicture(){

	string symbol;
		int size;
		int Xz = 8;
		int Xz1 = 3;
		cout << "введите символ и размер изображения(до 8):" << endl;
			cin >> symbol >> size;
			cout << "          " << symbol << endl;
			cout << "         " << symbol << " " << symbol << endl;
			for (int j = 0; j < size; j++ ){


		     for(int i = 0; i < Xz; i++){
		    	 cout << " ";
		     }
		     Xz--;
		     cout << symbol;
		     for(int i = 0; i < Xz1;i++){
		    	 cout << " ";
		     }
		     Xz1 = Xz1 + 2;
		     cout << symbol << endl;
			}
			 for(int i = 0; i < Xz; i++){
				    	 cout << " ";
				     }
			for(int j = 0;j < Xz1 + 2;j++){
				cout << symbol;
			}
			cout << endl;
	       for(int i = 0;i < size; i++){
	    	   for(int i = 0; i < Xz; i++){
	    	  	    	 cout << " ";
	    	  	     }
	    	   cout << symbol;
	    	   for(int i = 0; i < Xz1; i++){
	    	  	    	 cout << " ";
	    	  	     }
	    	   cout << symbol << endl;
	       }
	       for(int i = 0; i < Xz; i++){
	      	    	 cout << " ";
	      	     }
	       for(int i = 0; i < Xz1 + 2; i++){
	    	   cout << symbol;
	       }

}
void MemoryProgram(){
	bool logic = true;
		int a,b,f,g;
		string d,c;
		map<string , int> NameToValue;
		while (logic){
			cout << "1 изменить" << endl << "2 не менять" << endl;
			cin >> f;
			if (f == 2) {logic = false;}
			if (f == 1){
				cout << "ведите название" << endl;
				cin >> d;
				cout << "присвойте значение" << endl;
				cin >> a;
				NameToValue[d] = a;
				cout << d << " =" << a << endl;

				cout << "ведите название" << endl;
				cin >> c;
				cout << "присвойте значение" << endl;
				cin >> b;
				NameToValue[c] = b;
				cout << c << "=" << b << endl;

				cout  << "1 продолжить"<< "2 изменить " << endl;
				cin >> g;
				if (g == 1){
					logic = false;
				}
			}

		}
		string name;
		while (true) {
			cout << "введите название" << endl;
			cin >> name;
			cout << NameToValue[name];
			cout << endl;
		}

}
void Calculator(){
	cout << "выберите режим счёта" << endl << "1 = сложение вычетание" << endl << "2 = умножение деление" << endl;
		int a;
		cin >> a;
		if(a == 1){
		cout <<"введите числа и знак" << endl;
		int x ,j, y;

		cin >> x >> j >> y;
		if(j == 1)
		{
			cout << x + y << endl;
		}
		else
	    {
			cout << x - y << endl;
		}
		}else{
			cout <<"введите числа и знак" << endl;
				int x ,j, y;

				cin >> x >> j >> y;
				if(j == 1)
				{
					cout << x * y << endl;
				}
				else
			    {
					cout << x / y << endl;
				}
		}

}
void sort (int a, int b,int c){
	if(a < b && a < c && c < b){cout << a << " "<< c << " " << b;}
	if(a < b && a < c && b < c){cout << a << " " << b << " " << c;}
	if(c < b && c < a && b < a){cout << c << " " << b << " " << a;}
	if(b < c && b < a && a < c){cout << b << " " << a << " " << c;}
	if(c < a && c < b && a < b){cout << c << " " << a << " " << b;}
	if(b < a && b < c && c < a){cout << b << " " << c << " " << a;}
}
void VoiceValue(){
	int num;
		cin >> num;
		int La = num;
	if((num / 1000) % 10 == 1){cout << "тысяча ";}
	if((num / 1000) % 10 == 2){cout << "две тысячи ";}
	if((num / 1000) % 10 == 3){cout << "три тысячи ";}
	if((num / 1000) % 10 == 4){cout << "четыре тысячи ";}
	if((num / 1000) % 10 == 5){cout << "пять тысяч ";}
	if((num / 1000) % 10 == 6){cout << "шесть тысяч ";}
	if((num / 1000) % 10 == 7){cout << "семь тысяч ";}
	if((num / 1000) % 10 == 8){cout << "восемь тысяч ";}
	if((num / 1000) % 10 == 9){cout << "девять тысяч ";}
	if((num / 1000) % 10 == 10){cout << "десять тысяч ";}

	if((num / 100) % 10 == 1){cout << "сто ";}
	if((num / 100) % 10 == 2){cout << "двести ";}
	if((num / 100) % 10 == 3){cout << "триста ";}
	if((num / 100) % 10 == 4){cout << "четыреста ";}
	if((num / 100) % 10 == 5){cout << "пятьсот ";}
	if((num / 100) % 10 == 6){cout << "шестьсот ";}
	if((num / 100) % 10 == 7){cout << "семьсот ";}
	if((num / 100) % 10 == 8){cout << "восемсот ";}
	if((num / 100) % 10 == 9){cout << "девятсот ";}

	if((La / 10) % 10 == 1){cout << "десять ";}
	if((La / 10) % 10 == 2){cout << "двадцать ";}
	if((La / 10) % 10 == 3){cout << "тридцать ";}
	if((La / 10) % 10 == 4){cout << "сорок ";}
	if((La / 10) % 10 == 5){cout << "пятьдесят ";}
	if((La / 10) % 10 == 6){cout << "шестьдесят ";}
	if((La / 10) % 10 == 7){cout << "семьдесят ";}
	if((La / 10) % 10 == 8){cout << "восемдесят ";}
	if((La / 10) % 10 == 9){cout << "девяносто ";}

}
int main() {
	int key;
	cout << "Выберите программу:" << endl;
	cout << "1 рисунок дома" << endl << "2 программа памяти" << endl << "3 калькулятор" << endl <<"4 сортировка трёх чисел" << endl << "5 озвучить число до 9999" << endl;
	cin >> key;
	if (key == 1){HomePicture();}
	if (key == 2){MemoryProgram();}
	if (key == 3){Calculator();}
	if (key == 4){int a,b,c; cin >> a >> b >> c; sort(a,b,c);}
	if (key == 5){VoiceValue();}
	return 0;
}
