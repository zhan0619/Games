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
cout << "                               !!數字炸彈!!"                             << endl ;
cout << "=======================================================================" << endl ;   
srand(time(NULL));     
y=rand()%high+low;    
do{     
cout << "=========================請輸入 " << low << " ～ " << high << " 的數字 ======================";
cin >> x;
if (x>high || x<low){    
cout << "輸入範圍錯誤!" << endl; 
continue;
}
i++;     
if (x==y){
cout << "!!恭喜答對 炸彈解除!!" << endl;
break;
} else if (i==10) {    
cout << "BANG!!! 炸彈拆除失敗" << endl;
cout << "正確密碼是 " << y << endl;     
break;
} else {
cout << "密碼錯誤!剩餘次數: " << 10-i << " 次" << endl; 
(x>y)?high=x-1:low=x+1;     
}
} while (x!=y);
system("pause");
return 0;
}
