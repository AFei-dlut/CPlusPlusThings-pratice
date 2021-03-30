//apple.cpp

#include <iostream>
using namespace std;

//const对象只能访问const成员函数,而非const对象可以访问任意的成员函数,包括const成员函数.
//在一个类中，任何不会修改数据成员的函数都应该声明为const类型
class Apple
{
private:
    int people[100];
public:
    Apple();
    //将常量定义与static结合，也就是：
    static const int apple_number = 3;
    void take(int num) const;
    int add(int num);
    int add(int num) const;
    int getCount() const;

};
//对于类中的const成员变量必须通过初始化列表进行初始化
Apple::Apple()
{

}
int Apple::add(int num) {
    take(num);
    return 1;
}
int Apple::add(int num) const {
    take(num);
    return 1;
}
void Apple::take(int num) const
{
    cout << "take func " << num << endl;
}
int Apple::getCount() const
{
    take(1);
    //add(1); //error
    return apple_number;
}
int main() {
    Apple a;
    cout << a.getCount() << endl;
    a.add(10);
    const Apple b;
    b.add(100);
    return 0;
}
