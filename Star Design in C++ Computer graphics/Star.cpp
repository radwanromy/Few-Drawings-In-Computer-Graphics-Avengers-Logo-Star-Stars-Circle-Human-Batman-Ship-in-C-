#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (192,192,192);
glPointSize(30.0);
/*
glBegin(GL_LINES);
glVertex2i(320,480);
glVertex2i(320,0);
glVertex2i(0,240);
glVertex2i(640,240);
glEnd();
glFlush ();
glBegin(GL_LINES);
glVertex2i(360,50);
glVertex2i(360,100);
glVertex2i(360,100);
glVertex2i(385,80);
glVertex2i(385,80);
glVertex2i(410,100);
glVertex2i(410,100);
glVertex2i(410,50);

glEnd();
glFlush (); */

glBegin(GL_LINE_LOOP);
//glVertex2i(320,240);
glVertex2i(455,280);
glVertex2i(350,280);
glVertex2i(320,380);
glVertex2i(290,280);
glVertex2i(185,280);
glVertex2i(270,228);
glVertex2i(240,130);
glVertex2i(320,200);
glVertex2i(400,130);
glVertex2i(370,228);


glEnd();
glFlush ();
/*
glBegin(GL_POLYGON);
glVertex2i(420,340);
glVertex2i(370,290);

glVertex2i(420, 315);
glVertex2i(470,290);

glEnd();
glFlush ();
glBegin(GL_TRIANGLES);
glVertex2i(100, 290);
glVertex2i(200, 290);
glVertex2i(150, 340);
glVertex2i(100, 390);
glVertex2i(200, 390);
glVertex2i(150, 340);
glEnd();
glFlush ();

glBegin(GL_QUADS);

glVertex2i(100,50);

glVertex2i(150,50);
glVertex2i(150,100);
glVertex2i(100,100);

glVertex2i(70,70);

glVertex2i(120,70);
glVertex2i(120,120);
glVertex2i(70,120);
glEnd();
glFlush (); */
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA);
glutInitWindowSize (640, 480);
glutInitWindowPosition (300,300);
glutCreateWindow (" CG Lab");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
