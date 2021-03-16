#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glPointSize(100.0);
glColor3ub (192,192,192);
glBegin(GL_QUADS);
glVertex2i(280,270);
glVertex2i(280,210);
glVertex2i(360,210);
glVertex2i(360,270);
glEnd();
glFlush ();
glBegin(GL_QUADS);
glVertex2i(260,250);
glVertex2i(260,230);
glVertex2i(380,230);
glVertex2i(380,250);



glEnd();
glFlush ();
glColor3ub (218,165,32);
glBegin(GL_QUADS);
glVertex2i(260,230);
glVertex2i(260,210);
glVertex2i(280,210);
glVertex2i(280,230);



glEnd();
glFlush ();
glBegin(GL_QUADS);
glVertex2i(360,230);
glVertex2i(360,210);
glVertex2i(380,210);
glVertex2i(380,230);



glEnd();
glFlush ();
glBegin(GL_QUADS);
glVertex2i(295,290);
glVertex2i(295,270);
glVertex2i(345,270);
glVertex2i(345,290);



glEnd();
glFlush ();
glColor3ub (184,134,11);
glBegin(GL_QUADS);
glVertex2i(295,290);
glVertex2i(295,270);
glVertex2i(312,270);
glVertex2i(312,290);



glEnd();
glFlush ();
glColor3ub (0,0,0);
glBegin(GL_QUADS);
glVertex2i(295,350);
glVertex2i(295,290);
glVertex2i(312,290);
glVertex2i(312,350);



glEnd();
glFlush ();
glColor3ub (0,0,255);
glBegin(GL_QUADS);
glVertex2i(312,330);
glVertex2i(312,290);
glVertex2i(328,290);
glVertex2i(328,330);



glEnd();
glFlush ();
glBegin(GL_QUADS);
glVertex2i(328,350);
glVertex2i(328,290);
glVertex2i(345,290);
glVertex2i(345,350);



glEnd();
glFlush ();
glColor3ub (128,128,128);
glBegin(GL_QUADS);
glVertex2i(295,250);
glVertex2i(295,230);
glVertex2i(345,230);
glVertex2i(345,250);



glEnd();
glFlush ();
glColor3ub (0,0,255);
glBegin(GL_QUADS);
glVertex2i(260,210);
glVertex2i(260,190);
glVertex2i(280,190);
glVertex2i(280,210);



glEnd();
glFlush ();
glColor3ub (0,0,255);
glBegin(GL_QUADS);
glVertex2i(360,210);
glVertex2i(360,190);
glVertex2i(380,190);
glVertex2i(380,210);



glEnd();
glFlush ();
glColor3ub (255,255,0);
glBegin(GL_QUADS);
glVertex2i(280,210);
glVertex2i(280,190);
glVertex2i(360,190);
glVertex2i(360,210);



glEnd();
glFlush ();

glColor3ub (0,0,255);
glBegin(GL_QUADS);
glVertex2i(280,190);
glVertex2i(280,170);
glVertex2i(360,170);
glVertex2i(360,190);



glEnd();
glFlush ();
glBegin(GL_QUADS);
glVertex2i(295,170);
glVertex2i(295,150);
glVertex2i(345,150);
glVertex2i(345,170);



glEnd();
glFlush ();

glColor3ub (0,0,128);
glBegin(GL_QUADS);
glVertex2i(280,190);
glVertex2i(280,170);
glVertex2i(295,170);
glVertex2i(295,190);



glEnd();
glFlush ();
glColor3ub (105,105,105);
glBegin(GL_QUADS);
glVertex2i(280,170);
glVertex2i(280,110);
glVertex2i(295,110);
glVertex2i(295,170);

glVertex2i(330,150);
glVertex2i(330,110);
glVertex2i(345,110);
glVertex2i(345,150);

glEnd();
glFlush ();
glColor3ub (192,192,192);
glBegin(GL_QUADS);
glVertex2i(345,170);
glVertex2i(345,110);
glVertex2i(360,110);
glVertex2i(360,170);

glVertex2i(295,150);
glVertex2i(295,110);
glVertex2i(310,110);
glVertex2i(310,150);


glEnd();
glFlush ();

glColor3ub (0,0,128);
glBegin(GL_QUADS);
glVertex2i(280,110);
glVertex2i(280,90);
glVertex2i(295,90);
glVertex2i(295,110);

glVertex2i(330,110);
glVertex2i(330,90);
glVertex2i(345,90);
glVertex2i(345,110);

glEnd();
glFlush ();
glColor3ub (0,0,255);
glBegin(GL_QUADS);
glVertex2i(345,110);
glVertex2i(345,90);
glVertex2i(360,90);
glVertex2i(360,110);

glVertex2i(295,110);
glVertex2i(295,90);
glVertex2i(310,90);
glVertex2i(310,110);


glEnd();
glFlush ();

glColor3ub (0,0,0);
glBegin(GL_QUADS);
glVertex2i(260,190);
glVertex2i(260,130);
glVertex2i(280,130);
glVertex2i(280,190);

glBegin(GL_QUADS);
glVertex2i(360,190);
glVertex2i(360,130);
glVertex2i(380,130);
glVertex2i(380,190);

glVertex2i(310,150);
glVertex2i(310,130);
glVertex2i(330,130);
glVertex2i(330,150);

glEnd();
glFlush ();
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
/*
glBegin(GL_LINE_LOOP);
glVertex2i(445,280);
glVertex2i(350,280);
glVertex2i(320,380);
glVertex2i(290,280);
glVertex2i(195,280);
glVertex2i(270,228);
glVertex2i(240,130);
glVertex2i(320,200);
glVertex2i(400,130);
glVertex2i(370,228);


glEnd();
glFlush ();  */
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
glClearColor(255.0, 255.0, 255.0,255.0);
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
