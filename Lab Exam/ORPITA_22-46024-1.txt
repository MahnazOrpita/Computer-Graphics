////////TASK-2/////////////////////



#include <windows.h>
#include <GL/glut.h>
#include <iostream>


void drawLine(int x1, int y1, int x2, int y2)
 {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = x1 < x2 ? 1 : -1;
    int sy = y1 < y2 ? 1 : -1;
    int err = dx - dy;

    while (true) {
        glBegin(GL_POINTS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2i(x1, y1);
        glEnd();
        glFlush();

        if (x1 == x2 && y1 == y2) break;

        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}


void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    int x1 = 120, y1 = 350;
    int x2 = 530, y2 = 780;


    drawLine(x1, y1, x2, y2);


    int y_at_x_500 = y1 + (500 - x1) * (y2 - y1) / (x2 - x1);
    std::cout << "The value of y when x=500 is: " << y_at_x_500 << std::endl;


    float slope = static_cast<float>(y2 - y1) / (x2 - x1);
    std::cout << "The slope of the line (m) is: " << slope << std::endl;

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Line Drawing");
    glutInitWindowSize(640, 480);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}




////////////TASK-1////////////////////////////////
#include <windows.h>
#include <GL/glut.h>

void mydisplay()
{
	glClearColor(1.0f, 1.0f, 0.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
	glPointSize(5.0);


    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.1f, 0.0f);
	glVertex2f(0.3f, 0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.1f, 0.0f);
	glVertex2f(0.09f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.09f, 0.25f);
	glVertex2f(0.02f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.02f, 0.1f);
	glVertex2f(-0.02f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.02f, 0.1f);
	glVertex2f(-0.09f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.09f, 0.25f);
	glVertex2f(-0.1f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.3f, 0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.4f, 0.5f);
    glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.3f, 0.3f);
	glVertex2f(0.4f, 0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.7f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.4f, 0.5f);
	glVertex2f(0.7f, 0.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.7f, -0.0f);
	glVertex2f(-0.5f, -0.2f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.7f, -0.0f);
	glVertex2f(0.5f, -0.2f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.0f, -0.9f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.5f, -0.2f);
	glVertex2f(0.0f, -0.9f);
    glEnd();


	glFlush();
}


int main(int argc, char** argv)
 {


    glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);

	glutCreateWindow("GL Points");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return 0;
}
