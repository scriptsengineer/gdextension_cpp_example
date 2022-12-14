#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <godot_cpp/classes/sprite2d.hpp>

using namespace godot;

class GDExample : public Sprite2D {
    GDCLASS(GDExample, Sprite2D)

private:
    float time_passed;

protected:
    static void _bind_methods();

public:
    enum Constants {
            FIRST,
            ANSWER_TO_EVERYTHING = 42,
    };
    
    GDExample();
    ~GDExample();

    void _init(); // our initializer called by Godot

    void _process(float delta);
    
    void move(float delta);
};

VARIANT_ENUM_CAST(GDExample, Constants);

#endif