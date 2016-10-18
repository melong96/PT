#include <iostream>
#include <list>


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

	static void command(Object* obj, void(Object::*input_obj)()) {

//		obj->
	}


	void exe() {
		(this->*callback)();
	}
	void drawCircle() {
		std::cout << "Draw Circle" << std::endl;
	}

	void drawBox() {
		std::cout << "Draw Box" << std::endl;
	}

	static Object* getPT(const std::string type_name) {

		auto new_obj = new Object;
		
		if (type_name == "Box")
			new_obj->callback = &Object::drawBox;
		if (type_name == "Circle")
			new_obj->callback = &Object::drawCircle;

		return new_obj;
	}
};

int main(void) {

	std::list<Object*> go_list;

	go_list.push_back(Object::getPT("Box"));
	go_list.push_back(Object::getPT("Circle"));

	for (auto itr : go_list) itr->exe();

//	Object my_box, my_circle;
//	my_box.callback = &Object::drawBox;
//	my_circle.callback = &Object::drawCircle;
//
////	(my_box.*my_box.callback)();
//	my_box.exe();

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