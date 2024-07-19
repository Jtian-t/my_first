/**
 * @file abstract.cpp
 * @brief
 * 抽象类中：在成员函数内可以调用纯虚函数，在构造函数/析构函数内部不能使用纯虚函数
 * 如果一个类从抽象类派生而来，它必须实现了基类中的所有纯虚函数，才能成为非抽象类
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */

#include <iostream>
using namespace std;

class A {
public:
	virtual void f() = 0; // 纯虚函数
	void g() { this->f(); } //这是什么作用？
	A() {}  //默认构造函数
};
class B : public A {  //派生类B继承自 基类A
public:
	void f() { cout << "B:f()" << endl; }
};

int main() {
	B b;
	b.g();
cout<<"hello git"<<endl;
	return 0;
}
