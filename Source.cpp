#include <iostream>


// function pointer 
/*
void drawCircle() {
	std::cout << "Draw Circle" << std::endl;
}

void drawBox() {
	std::cout << "Draw Box" << std::endl;
}
*/

// polymorphism
class Object {

public:
	void(Object::*callback)(void) = nullptr;




	void exe() {
		(this->*callback)();
	}
	void drawCircle() {
		std::cout << "Draw Circle" << std::endl;
	}

	void drawBox() {
		std::cout << "Draw Box" << std::endl;
	}
};

int main(void) {


	Object my_box, my_circle;
	my_box.callback = &Object::drawBox;
	my_circle.callback = &Object::drawCircle;

//	(my_box.*my_box.callback)();
	my_box.exe();

//	my_circle.callback();




	/*
	int a = 123;
	int* ptr_a = nullptr;


	void(*func_ptr)(void) = nullptr;

	func_ptr = &drawCircle;

	std::cout << func_ptr << std::endl;
	func_ptr();
	(*func_ptr)();

	func_ptr = &drawBox;

	func_ptr();
	(*func_ptr)();
	*/






/*
	ptr_a = &a;


	if (ptr_a != nullptr) std::cout << ptr_a << std::endl;

	ptr_a = new int[100];


	delete[] ptr_a;
*/

	return 0;


}