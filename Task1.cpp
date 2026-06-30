#include <windows.h>
#include <GL/glut.h>

void mydisplay() 
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);



    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.3f, 0.2f);
	glVertex2f(0.3f, 0.2f);
    glEnd();

   glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.3f, 0.2f);
	glVertex2f(0.3f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.3f, -0.2f);
	glVertex2f(-0.3f, -0.2f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.3f, 0.2f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.9f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.5f, 0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.9f, 0.4f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.2f, 0.4f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.5f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.8f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.5f, 0.7f);
    glEnd();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("GL Points");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return 0;
}
