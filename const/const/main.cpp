#include<iostream>
#include <string>
using namespace std;

#define pi 3.1415

void test_define_type()
{
	double a = 100;
	if (typeid(pi) == typeid(a)) {
		cout << 1 << endl;
	}
	else {
		cout << 2 << endl;
	}
	return;
}

//void f(const int a)
//{
//	a++; //const修饰参数不可修改
//}

//本身无意义，因为参数返回本身就是赋值给其他的变量！
//const int func1(const int a)
//{
//	//a = 2;
//	//return a;
//}

void func2(const int var); // 传递过来的参数不可变
void func3(int* const var); // 指针本身不可变

//其中src 是输入参数，dst 是输出参数。给src加上const修饰后，如果函数体内的语句试图改动src的内容，
//编译器将指出错误。这就是加了const的作用之一。
void StringCopy(char* dst, const char* src);

//参数为引用，为了增加效率同时防止修改
// 对于非内部数据类型的参数而言，象void func(A a) 这样声明的函数注定效率比较低。因为函数体内将产生A 类型
//的临时对象用于复制参数a，而临时对象的构造、复制、析构过程都将消耗时间。
//为了提高效率，可以将函数声明改为void func(A& a)，因为“引用传递”仅借用一下参数的别名而已，不需要产生临
//时对象。但是函数void func(A& a) 存在一个缺点：
//“引用传递”有可能改变参数a，这是我们不期望的。解决这个问题很容易，加const修饰即可，因此函数最终成为
//void func(const A& a)。
//以此类推，是否应将void func(int x) 改写为void func(const int& x)，以便提高效率？完全没有必要，因为内部数
//据类型的参数不存在构造、析构的过程，而复制也非常快，“值传递”和“引用传递”的效率几乎相当。
//void func(const A& a)




//int main() 
//{
	//define 定义数据存在类型
	//test_define_type();

	//const int i; //const定义变量时必须初始化,因为常量在定义后就不能被修改，所以定义时必须初始化
	//const int i = 0, j = 0; 

	//const char* a; //指向const对象的指针或者说指向常量的指针。
	//char const* b; //同上
	//char* const c = nullptr; //指向类型对象的const指针。或者说常指针、const指针。
	//const char* const d = nullptr; //指向const对象的const指针。

	//string a1 = "dsad";
	//cout << a1 << endl;
	//const char* p = "das"; //常量字符串
	//char* p = new char[10];
	//char str2[] = "abcd";

	//指向const的指针cptr实际上指向了一个非const对象。尽管它所指向对象非const，
	//但仍然不能使用cptr修改该对象的值，系统会把它所指的所有对象都视为const；
	//如果指向const的指针所指的对象并非const，则可直接给该对象赋值或间接地利用普通的非const指针修改其值，
	//毕竟这个值不是const
	//const int* ptr;
	//int val = 3;
	//ptr = &val; //ok
	//val = 4;
	//cout << val  << " " << *ptr << endl;

	//修改常ptr指针所指向的值，可以通过非const指针来修改。
	//const指针必须进行初始化，且const指针的值不能修改。
	//int num = 0;
	//int num2 = 2;
	//int* const ptr = &num; //const指针必须初始化！且const指针的值不能修改
	//int* t = &num;
	//*t = 1;
	//ptr = &num2;
	//cout << *ptr << endl;

	//把一个const常量的地址赋值给ptr时候，由于ptr指向的是一个变量，
	//而不是const常量，所以会报错，出现：const int* -> int* 错误
	//const int num = 0;
	//const int* const ptr = &num; //error! const int* -> int*
	//cout << *ptr << endl;

	//ptr是一个const指针，然后指向了一个int 类型的const对象。
	//const int p = 3;
	//const int* const ptr = &p;

	/*int x;
	int q = func1(x);
	q = 2;
	cout << q << endl;*/


	//return 1;
//}