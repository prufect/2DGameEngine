#ifndef TRANSFORM_COMPONENT_HPP
#define TRANSFORM_COMPONENT_HPP

#include "components.hpp"
#include "../vector2d.hpp"

class TransformComponent: public Component {
public:

    Vector2D position;
    Vector2D velocity;

    int speed = 3;

    TransformComponent() {
        position.x = 0.0f;
        position.y = 0.0f;
    }

    TransformComponent(float x, float y) {
        position.x = x;
        position.y = y;
    }

    void init() override  {
        velocity.x = 0;
        velocity.y = 0;
    }

    void update() override {
        position.x += velocity.x * speed;
        position.y += velocity.y * speed;    
    }
};

#endif // TRANSFORM_COMPONENT_HPP