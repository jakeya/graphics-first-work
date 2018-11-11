#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(4.0);
glLineWidth(8);
glBegin(GL_POLYGON);
glVertex2i(30, 70);
glVertex2i(50, 70);
glVertex2i(50, 200);
glVertex2i(30, 200);

glEnd();

glColor3f (1, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(180, 70);
glVertex2i(200, 70);
glVertex2i(200, 80);
glVertex2i(180, 80);
glEnd();

glColor3f (1, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(170, 80);
glVertex2i(210, 80);
glVertex2i(210, 90);
glVertex2i(170, 90);

glEnd();


glColor3f (1, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(160, 90);
glVertex2i(220, 90);
glVertex2i(220, 100);
glVertex2i(160, 100);
glEnd();

glColor3f (1, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(150, 100);
glVertex2i(230, 100);
glVertex2i(230, 110);
glVertex2i(150, 110);
glEnd();


glColor3f (1, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(140, 110);
glVertex2i(240, 110);
glVertex2i(240, 160);
glVertex2i(140, 160);
glEnd();


glColor3f (1, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(150, 160);
glVertex2i(180, 160);
glVertex2i(180, 170);
glVertex2i(150, 170);
glEnd();

glColor3f (1, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(200, 160);
glVertex2i(230, 160);
glVertex2i(230, 170);
glVertex2i(200, 170);
glEnd();

glColor3f (0, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(290, 70);
glVertex2i(330, 70);
glVertex2i(330, 80);
glVertex2i(290, 80);
glEnd();

glColor3f (0, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(280, 80);
glVertex2i(340, 80);
glVertex2i(340, 90);
glVertex2i(280, 90);
glEnd();

glColor3f (0, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(270, 90);
glVertex2i(300, 90);
glVertex2i(300, 100);
glVertex2i(270, 100);
glEnd();

glColor3f (0, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(260, 100);
glVertex2i(280, 100);
glVertex2i(280, 200);
glVertex2i(260, 200);
glEnd();

glColor3f (0, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(320, 90);
glVertex2i(340, 90);
glVertex2i(340, 100);
glVertex2i(320, 100);
glEnd();

glColor3f (0, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(320, 90);
glVertex2i(350, 90);
glVertex2i(350, 100);
glVertex2i(320, 100);
glEnd();

glColor3f (0, 0, 0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(340, 100);
glVertex2i(360, 100);
glVertex2i(360, 200);
glVertex2i(340, 200);
glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(255, 255, 0, 0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
 main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 550);
glutInitWindowPosition (100, 150);
glutCreateWindow ("BATMAN LOGO");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
