#ifndef ITEM_CLASS_H
#define ITEM_CLASS_H

#include <godot_cpp/classes/resource.hpp>

using namespace godot;

class Item : public Resource {

    GDCLASS(Item, Resource);

private:
    int max_stack;

protected:
    static void _bind_methods();

public:
	Item();
	~Item();
    void set_max_stack(const int &new_max_stack);
	int get_max_stack() const;
};

#endif