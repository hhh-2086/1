/*	�򵥵������ơ���account������
������������

�и�������Ҫ����һ���û�������򣬹���Ҫ�����£�

1����¼�û����˺š��������Ա����䡢���д��

2�����Զ�̬�����û��Ĵ��

��1�����û���Ǯʱ�������ӵ����д����

  (2�����û�ȡǮʱ���������˻��п۳�

  (3)  ���ȡǮ�������д���ܾ�ȡǮ������

  (4) ���¼��Ϊ100.897Ԫ����Ϊ��Ч���룬Ӧ�þܾ�������ԭ��¼����������ԡ�Ԫ��Ϊ��λ��������С��λ�Ƿ֡���ͬѧ�ǿ���һ�£��������ЧӦ���������⡣*/
#include <iostream>
#include <iomanip>
using namespace std;
//���ڴ˴�����Account��Ķ���
class Account
{
    public:
    void init(char *rnumber,char *rname,char *rsex,int rage,double rremain);
    void printmoney();
    void deposit(double dmoney);
    void withdraw(double wmoney);
    private:
    char *number,*name,*sex;
    int age;
    double remain;
};
void Account::init (char *rnumber,char *rname,char *rsex,int rage,double rremain)
{	
    number=rnumber;
    name=rname;
    sex=rsex;
    age=rage;
	if(rremain*100-(int)(rremain*100)>0)
		{cout<<"������Ľ��Ϸ�"<<endl;
		remain=0;}
	else
	remain=rremain;
}
void Account::printmoney()
{
    cout<<name<<"�Ĵ��Ϊ"<<fixed<<setprecision(2)<<remain<<endl;
}
void Account::deposit(double dmoney)
{
    if(dmoney*100-(int)(dmoney*100)>0)
        cout<<"������Ľ��Ϸ�"<<endl;
    else
        remain+=dmoney;
}
void Account::withdraw(double wmoney)
{
    if(wmoney*100-(int)(wmoney*100)>0)
        cout<<"������Ľ��Ϸ�"<<endl;
	else if(remain-wmoney<0)
		cout<<"���Ĵ�����"<<endl;
    else
        remain-=wmoney;
}


int main()
{
    Account tom;
    tom.init("32020320011001876X", "Tom Black", "��", 19, 2000.89);
    tom.printmoney();//�����Tom Black�Ĵ��Ϊ2000.89
    tom.deposit(89.471);//�����������Ľ��Ϸ�
    tom.printmoney();//�����Tom Black�Ĵ��Ϊ2000.89
    tom.deposit(10000);
    tom.printmoney();//�����Tom Black�Ĵ��Ϊ12000.89
    tom.withdraw(10001);
    tom.printmoney();//�����Tom Black�Ĵ��Ϊ1999.89
    tom.withdraw(10000.123);//�����������Ľ��Ϸ�
    tom.printmoney();//�����Tom Black�Ĵ��Ϊ1999.89
    tom.withdraw(10000.9);//��������Ĵ�����
    tom.printmoney();//�����Tom Black�Ĵ��Ϊ1999.89
    Account jerry;
    jerry.init("320203200910116569", "Jerry Black", "Ů", 11, 100.956);//�����������Ľ��Ϸ�
    jerry.printmoney();//�����Jerry Black�Ĵ��Ϊ0.00
}

