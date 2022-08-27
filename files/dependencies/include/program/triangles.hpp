#ifndef _TRIANGLES_H_
#define _TRIANGLES_H_

#include <iostream>
#include <GLEW/glew.h>
#include <GLFW/glfw3.h>
#include <GLM/glm.hpp>

// TODO: finish class
class Triangle {
private:
    float coords[18];
    int points;
    int& VAO;
    int& VBO;
public:
    Triangle(float[18], int&, int&);
    ~Triangle();
    void build();
};

#endif