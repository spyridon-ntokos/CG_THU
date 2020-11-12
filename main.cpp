// BadproG.com
#include <GL\glew.h>
#include <GL\freeglut.h>

/**
* glVertex2f(float x, float y).
* The point (0.0, 0.0) represents the middle of the window (not the top left corner).
* The "2f" suffix means 2 values of float type (x and y).
*/
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);                    // bottom left
    glVertex2f(0.5, 0.0);                    // bottom right
    glVertex2f(0.5, 0.5);                    // top right
    glVertex2f(0.0, 0.5);                    // top left
    glEnd();
    glFlush();
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        
    }
}

int main(int argc, char** argv) {
    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    // Window size
    glutInitWindowSize(1100, 800);
    // Distance from the top-left screen
    glutInitWindowPosition(0, 0);
    // Message displayed on top bar window
    glutCreateWindow("Nine Men's Morris");
    // Register display callback handler for window re-paint
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    // Enter the event-processing loop
    glutMainLoop();
    return 0;
}