#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
using namespace std;
class begin{           //��ʼ�࣬�����ʼλ�� 
	int x,y,x1,y1;
	public:
		begin(){
			x=y=x1=y1=10;     //��ʼ������ǣ�10,10�������ԸĶ� ����������Ļ�м�ȽϺÿ� 
		}
	void move();             //����begin�����move���� 
	~begin(){               //�������������ڵ��ø���ʱ�������� 
		
	}
};
void print(int m,int n){       //�����·���print 
	int i;
	system("cls");            //windows�������������������ȥ��֮��·���ģ���û���Ƴɹ��������Ű� 
	for(i=0;i<n;i++){
		cout<<endl;             //���в�����Ϊ�˰�*�ܹ������ƶ������ǻ��� 
	}
	for(i=0;i<m-1;i++){      //�˴�m-1�Ǹ�*���˸�λ�� 
		cout<<' ';                //�����ƶ� 
	}
	cout<<"*";                     //��ʾ�������������� 
}
void begin::move(){                   //д��begin��move���� 
	char ch;
	int a,b;
	a=x1,b=y1;
	cout<<"��ʱ���ڣ�"<<"("<<x<<","<<y<<")"<<endl;
	cout<<"�����w,a,s,d���������ƶ�����ʼ������С�����ո����"<<endl;
	cout<<"*";
	ch=getch();           //�õ���ʼ���� ��wasd�������� 
	while(1) {             //Ҫ���ƶ���λ�úͶ�Ӧ�Ĳ�����ϵ��һ������while(1) 
		ch=getch();        
		switch(ch){                  // �жϲ�����ִ�� 
			case 'w':b=b-1;break;
			case 's':b=b+1;break;
			case 'a':a=a-1;break;
			case 'd':a=a+1;break;
			default:break;
		}
		print(a,b);          //����print���������������ڵ�λ�� 
		if(ch==' '){
			int x=0;
			cout<<"�����е��ˣ�"<<"("<<a<<","<<b<<")"<<endl;
			x=sqrt((a-10)*(a-10)+(b-10)*(b-10)); 
			cout<<"�������ˣ�"<<x<<endl;
			break; 
		}
	}
}
int main(){
	begin people;
	people.move();
}
