#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;


//************************

class color{
	
	public :
		
		static const char Black = '0', Blue = '1', Green = '2',
				 Red = '4', Purple = '5', Yellow = '6', White = '7', Gray = '8',
				 LightBlue = '9', LightGreen = 'A', LightRed = 'C', LightPurple = 'D',
				 LightYellow = 'E', BrightWhite = 'F';
};
//************************

class random{
	
	public :
	
	int Next(int num){
		
		srand(time(0));
		return rand() % num ;
	}
	int Next(int from, int to){
		
		srand(time(0));
		
		int randomNumber = rand() % to + from ;
		
		if(randomNumber > to)
			
			return randomNumber - from ;
			
			return randomNumber;
	}
	int Next(){
		
		srand(time(0));
		return rand() % 2 ;
	}
	
};
//*************************	

class CMD{
	
	public :
		
		template<class T>
		void WriteLine(T str){
			
			cout << str << endl ;
		}
		
		template<class T>
		void Write(T str){
			
			cout << str ;
		}
	
		string ReadLine(){
			
			string str = "\0";
			cin >> str ;
			return str;
		}
		string ReadLine(int size, char sep){
			
			char str[] = "\0";
			cin.get(str,size,sep);
			return str;
		}
		string ReadLine(int size){
			
			char str[] = "\0";
			cin.get(str,size);
			return str;
		}
		void Clear(){
			
			system("cls");
		}
		void SetColors(char Back, char Fore){
			
			char str[9] = {'c','o','l','o','r',' '};
			
			str[6] =  Back ;
			str[7] =  Fore ;
			str[8] = '\0';
			
			system(str);
			
		}
		
};
//**************************

CMD Console ;
color Color; 
random Random;
