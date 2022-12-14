#include "gdexample.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void GDExample::_bind_methods() {
    ClassDB::bind_method(D_METHOD("move"), &GDExample::move);
    BIND_ENUM_CONSTANT(FIRST);
	BIND_ENUM_CONSTANT(ANSWER_TO_EVERYTHING);
}

GDExample::GDExample() {
    // initialize any variables here
    time_passed = 0.0;
}

GDExample::~GDExample() {
    // add your cleanup here
}

void GDExample::_process(float delta) {
    // move(delta);
}

void GDExample::move(float delta) {
    time_passed += delta;

    Vector2 new_position = Vector2(10.0 + (10.0 * sin(time_passed * 2.0)), 10.0 + (10.0 * cos(time_passed * 1.5)));

    set_position(new_position);
}