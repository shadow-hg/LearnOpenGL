#include "OpenGL/GLFW/include/GLFW/glfw3.h"

void tang(GLfloat f1, GLfloat f2, GLfloat f3, GLfloat f4, GLfloat f5, GLfloat f6, GLfloat c1, GLfloat c2, GLfloat c3, GLfloat a1);
int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1920, 1080, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    
    GLuint VBO;
    

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */

        glClear(GL_COLOR_BUFFER_BIT);





        
        
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

void tang(GLfloat f1,GLfloat f2, GLfloat f3, GLfloat f4, GLfloat f5, GLfloat f6, GLfloat c1, GLfloat c2, GLfloat c3, GLfloat a1)
{
    glBegin(GL_TRIANGLES);

    //glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glVertex2f(f1, f1);
    glVertex2f(f1, f1);
    glVertex2f(f1, f1);
    glColor4f(c1, c2, c3, a1);
    glEnd;
    return;
}