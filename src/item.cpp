#include "item.h"

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/global_constants.hpp>

using namespace godot;

void Item::_bind_methods() { 
    ClassDB::bind_method(D_METHOD("set_max_stack", "max_stack"), &Item::set_max_stack);
    ClassDB::bind_method(D_METHOD("get_max_stack"), &Item::get_max_stack);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "max_stack"), "set_max_stack", "get_max_stack");
}

Item::Item() {
}

Item::~Item() {
}

// Properties
void Item::set_max_stack(const int &new_max_stack) {
	max_stack = new_max_stack;
}

int Item::get_max_stack() const {
	return max_stack;
}