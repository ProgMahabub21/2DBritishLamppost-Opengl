#include <windows.h>  // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void display()
{
    glClearColor(0.8f, 0.8f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(5);


    glBegin(GL_QUADS);
    glColor3ub(15, 15, 57);
    glVertex2i(70,-70);
    glVertex2i(73, -70);
    glVertex2i(73, -61);
    glVertex2i(70, -61);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(15, 15, 57);
    glVertex2f(70.0, -61.0);
    glVertex2f(70.5, -58.0);
    glVertex2f(72.5, -58.0);
    glVertex2f(73.0, -61.0);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(15, 15, 57);
    glVertex2f(70.5, -58.0);
    glVertex2f(72.5, -58.0);
    glVertex2f(72.0, 8.0);
    glVertex2f(71.0, 8.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(69.0, 8.0);
    glVertex2f(74.0, 8.0);
    glVertex2f(76.5, 20.0);
    glVertex2f(73.0, 22.0);
    glVertex2f(66.5, 20.0);
    glVertex2f(73.0, 22.0);
    glVertex2f(71.5, 8.0);
    glVertex2f(71.8, 8.0);
    glVertex2f(73.3, 22.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(69.5, 8.5);
    glVertex2f(73.7, 8.5);
    glVertex2f(76.2, 19.2);
    glVertex2f(72.7, 21.2);
    glVertex2f(67.0, 19.2);

    glEnd();


    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitWindowSize(1080, 600);    // Set the window's initial width & height
    glutCreateWindow("Lamppost"); // Create a window with the given title
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
