#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
using namespace std;
class begin{           //起始类，定义初始位置 
	int x,y,x1,y1;
	public:
		begin(){
			x=y=x1=y1=10;     //初始坐标就是（10,10），可以改动 ，这样在屏幕中间比较好看 
		}
	void move();             //定义begin类里的move方法 
	~begin(){               //析构函数，用于调用该类时创建对象 
		
	}
};
void print(int m,int n){       //定义新方法print 
	int i;
	system("cls");            //windows里的清屏操作，本来想去掉之后画路径的，还没完善成功，先留着吧 
	for(i=0;i<n;i++){
		cout<<endl;             //换行操作，为了把*能够上下移动，就是换行 
	}
	for(i=0;i<m-1;i++){      //此处m-1是给*留了个位置 
		cout<<' ';                //左右移动 
	}
	cout<<"*";                     //显示出你现在在哪里 
}
void begin::move(){                   //写入begin的move方法 
	char ch;
	int a,b;
	a=x1,b=y1;
	cout<<"此时你在："<<"("<<x<<","<<y<<")"<<endl;
	cout<<"请控制w,a,s,d上下左右移动，开始你的旅行。输入空格结束"<<endl;
	cout<<"*";
	ch=getch();           //得到初始命令 ，wasd或者其他 
	while(1) {             //要把移动的位置和对应的操作联系到一起，所以while(1) 
		ch=getch();        
		switch(ch){                  // 判断操作，执行 
			case 'w':b=b-1;break;
			case 's':b=b+1;break;
			case 'a':a=a-1;break;
			case 'd':a=a+1;break;
			default:break;
		}
		print(a,b);          //调用print，在清屏后打出现在的位置 
		if(ch==' '){
			int x=0;
			cout<<"你旅行到了："<<"("<<a<<","<<b<<")"<<endl;
			x=sqrt((a-10)*(a-10)+(b-10)*(b-10)); 
			cout<<"你旅行了："<<x<<endl;
			break; 
		}
	}
}
int main(){
	begin people;
	people.move();
}
