#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int x;      
int y;     
int low=1,high=100;     
int i=0;  
cout << "                               !!�Ʀr���u!!"                             << endl ;
cout << "=======================================================================" << endl ;   
srand(time(NULL));     
y=rand()%high+low;    
do{     
cout << "=========================�п�J " << low << " �� " << high << " ���Ʀr ======================";
cin >> x;
if (x>high || x<low){    
cout << "��J�d����~!" << endl; 
continue;
}
i++;     
if (x==y){
cout << "!!���ߵ��� ���u�Ѱ�!!" << endl;
break;
} else if (i==10) {    
cout << "BANG!!! ���u�����" << endl;
cout << "���T�K�X�O " << y << endl;     
break;
} else {
cout << "�K�X���~!�Ѿl����: " << 10-i << " ��" << endl; 
(x>y)?high=x-1:low=x+1;     
}
} while (x!=y);
system("pause");
return 0;
}
