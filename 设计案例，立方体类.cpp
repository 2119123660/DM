#include<iostream>
using namespace std;
//�����������
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
class Cube
{
public:
	
	//��Ϊ
	
	//���ó�
	void setL(int l)
	{
		m_L=l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}

	//���ÿ�
	void setW(int w)
	{
		m_W=w;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//���ø�
	void setH(int h)
	{
		m_H=h;
		
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}
	// ��ȡ���������
	int calculateS()
	{
		return 2*(m_L*m_H+m_L*m_W+m_W*m_H);
	 } 
	 //��ȡ��������� 
	int calculateV()
	{
		return m_L*m_H*m_W;
	}
	bool isSamebyclass(Cube &c)
	{
		if(m_L ==c.getL() &&m_H ==c.getH() &&m_W ==c.getW() )
	    {
		    return true;
	    } 
	    else return false;
	}
private:
    //����
	int m_L;//�� 
	int m_W;//�� 
	int m_H;//�� 
} ;
//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube &c1,Cube &c2)//����ԭʼ��ʽ���ݲ����ٿ���һ������ 
{
	if(c1.getL() ==c2.getL() &&c1.getH() ==c2.getH() &&c1.getW() ==c2.getW() )
	{
		return true;
	 } 
	else return false;
}
int main()
{
	//����һ����������� 
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);   
	cout<<"c1�����Ϊ��"<<c1.calculateS() <<endl;
	cout<<"c1�����Ϊ��"<<c1.calculateV() <<endl;
	//�����ڶ���������
	Cube c2;
	c2.setL(100);
	c2.setW(10);
	c2.setH(10);   
	//����ȫ�ֺ����ж� 
	bool ret=isSame(c1,c2);
	if(ret)
	{
		cout<<"ȫ�ֺ����жϣ�c1��c2���"<<endl; 
	}
	else cout<<"ȫ�ֺ����жϣ�c1��c2�����"<<endl;
	//���ó�Ա�����ж� 
	ret=c1.isSamebyclass(c2); 
	if(ret)
	{
		cout<<"��Ա�����жϣ�c1��c2���"<<endl; 
	}
	else cout<<"��Ա�����ж�c1��c2�����"<<endl;
	//cout<<"c2�����Ϊ��"<<c2.calculateS() <<endl;
	//cout<<"c2�����Ϊ��"<<c2.calculateV() <<endl;
	return 0;
}
