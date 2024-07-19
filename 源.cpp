/**
 * @file abstract.cpp
 * @brief
 * �������У��ڳ�Ա�����ڿ��Ե��ô��麯�����ڹ��캯��/���������ڲ�����ʹ�ô��麯��
 * ���һ����ӳ���������������������ʵ���˻����е����д��麯�������ܳ�Ϊ�ǳ�����
 * @author ���
 * @version v1
 * @date 2019-07-20
 */

#include <iostream>
using namespace std;

class A {
public:
	virtual void f() = 0; // ���麯��
	void g() { this->f(); } //����ʲô���ã�
	A() {}  //Ĭ�Ϲ��캯��
};
class B : public A {  //������B�̳��� ����A
public:
	void f() { cout << "B:f()" << endl; }
};

int main() {
	B b;
	b.g();
	return 0;
}
