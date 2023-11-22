#include <Windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw a colored triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0.0f, 1.0f);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-1.0f, -1.0f);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(1.0f, -1.0f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(" A Colored Triangle");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}