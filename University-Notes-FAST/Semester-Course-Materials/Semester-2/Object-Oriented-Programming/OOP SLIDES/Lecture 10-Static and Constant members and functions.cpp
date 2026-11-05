//#include <iostream>
//using namespace std;
//
//class box {
//public:
//	int length;
//	int* breadth;
//	int height;
//
//	box()
//	{
//		breadth = new int;
//	}
//
//	void set_dimension(int len, int brea,
//		int heig)
//	{
//		length = len;
//		*breadth = brea;
//		height = heig;
//	}
//
//	void show_data()
//	{
//		cout << " Length = " << length
//			<< "\n Breadth = " << *breadth
//			<< "\n Height = " << height
//			<< endl;
//	}
//
//	box(box& sample)
//	{
//		length = sample.length;
//		breadth = new int;
//		*breadth = *(sample.breadth);
//		height = sample.height;
//	}
//
//	// Destructors
//	~box()
//	{
//		delete breadth;
//	}
//};
//
//int main()
//{
//	box first;
//
//	first.set_dimension(12, 14, 16);
//
//	first.show_data();
//
//	box second(first);
//
//	second.show_data();
//
//	*(first.breadth) = 5;
//
//	second.show_data();
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//class box {
//private:
//	int length;
//	int breadth;
//	int height;
//
//public:
//	box(int length = 0, int breadth = 0, int height = 0)
//	{
//		this->length = length;
//		this->breadth= breadth;
//		this->height= height;
//
//	}
//
//	void set_dimensions(int length1, int breadth1,
//		int height1)
//	{
//		length = length1;
//		breadth = breadth1;
//		height = height1;
//	}
//
//	void show_data()
//	{
//		cout << " Length = " << length
//			<< "\n Breadth = " << breadth
//			<< "\n Height = " << height
//			<< endl;
//	}
//
//	box(box& sample)
//	{
//		length = sample.length;
//		breadth = sample.breadth;
//		height = sample.height;
//
//	}
//
//};
//
//int main()
//{
//	box B1, B3;
//
//	B1.set_dimensions(14, 12, 16);
//	B1.show_data();
//
//	box B2(B1);
//	B2.show_data();
//
//	B3 = B1;
//	B3.show_data();
//
//	cout << &B1 << endl << &B2 << endl << &B3;
//
//	cout << endl << endl;
//	B1.set_dimensions(99, 99, 99);
//
//	cout << "B1 : ";
//	B1.show_data();
//	cout << endl;
//
//	cout << "B2 : ";
//	B2.show_data();
//	cout << endl;
//
//	cout << "B3 : ";
//	B3.show_data();
//	cout << endl;
//
//
//
//	return 0;
//}


 //Example: of Constant member function

//#include<iostream>
//using namespace std;
//
//class Demo
//{
//	const int x;
//
//public:
//
//	void set_data(int a)
//	{
//		x = a;
//	}
//
//	int get_data() const		 //constant member function
//	{
//		++x;				 // Error while attempting to modify the data member
//		return x;
//	}
//
//};
//
//int main()
//{
//	Demo d;
//	d.set_data(10);
//	cout << endl << d.get_data();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Demo
//{
//	const int value;
//public:
//	Demo(int v = 0) 
//	{ 
//		value = v; 
//	}
//	void showMessage()
//	{
//		cout << "Hello World, "
//			" showMessage() Function" << endl;
//	}
//	void display()const
//	{
//		cout << "Hello world : this is the value " << value << endl;
//	}
//	int inc()
//	{
//		value = value + 1;
//		return value;
//	}
//
//	int getData()
//	{
//		return value;
//	}
//};
//int main()
//{
//	Demo dummy(100);
//	const Demo d1(dummy.getData());
//	d1.display();
//	int alpha = d1.getData();
//	return(0);
//}

//
//#include <iostream>  
//using namespace std;
//class Employee {
//    int id;
//    string name;
//    float salary;
//public:
//    Employee(int id, string name, float salary)
//    {
//        this->id = id;
//        this->name = name;
//        this->salary = salary;
//    }
//    Employee& setsalary(int salary)
//    {
//        this->salary = salary;
//        return *this;
//    }
//
//    Employee& setid(int id)
//    {
//        this->id = id;
//        return *this;
//    }
//
//    void display()
//    {
//        cout << name << ",  " << salary << ",  " << id<< endl;
//    }
//};
//int main(void) {
//    Employee e1 = Employee(101, "Saddie", 890000);  
//    Employee e2 = Employee(102, "Hussen", 59000);
//    Employee dummy = e1;
//    e1.display();
//    Employee e3 = dummy.setsalary(10000).setid(103);
//
//    e3.display();
//    e1.display();
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//class A {
//    int y;
//    int x;
//public:
//    A()
//    {
//        x = 0;
//        y = 0;
//    }
//    int getStatic(int alpha)
//    {
//        x = x + alpha;
//        return x;
//    }
//};
//
////int A::x = 1;
//
//int main()
//{
//    A a, b;
//    cout << a.getStatic(5) << endl;
//    cout << b.getStatic(5);
//
//}
