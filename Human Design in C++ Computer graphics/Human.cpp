#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glPointSize(100.0);
glColor3ub (0,0,0);
glBegin(GL_QUADS);
glVertex2i(280,370);
glVertex2i(280,245);
glVertex2i(360,245);
glVertex2i(360,370);

glVertex2i(340,380);
glVertex2i(340,370);
glVertex2i(350,370);
glVertex2i(350,380);

glVertex2i(260,360);
glVertex2i(260,215);
glVertex2i(380,215);
glVertex2i(380,360);

glVertex2i(280,85);
glVertex2i(280,25);
glVertex2i(310,25);
glVertex2i(310,85);

glVertex2i(330,85);
glVertex2i(330,25);
glVertex2i(360,25);
glVertex2i(360,85);


glVertex2i(250,45);
glVertex2i(250,25);
glVertex2i(280,25);
glVertex2i(280,45);

glVertex2i(360,45);
glVertex2i(360,25);
glVertex2i(390,25);
glVertex2i(390,45);

glEnd();
glFlush ();
glColor3ub (105,105,105);
glBegin(GL_QUADS);
glVertex2i(280,245);
glVertex2i(280,235);
glVertex2i(360,235);
glVertex2i(360,245);

glVertex2i(315,295);
glVertex2i(315,245);
glVertex2i(325,245);
glVertex2i(325,295);


glEnd();
glFlush ();
glColor3ub (222,184,135);
glBegin(GL_QUADS);
glVertex2i(300,430);
glVertex2i(300,350);
glVertex2i(340,350);
glVertex2i(340,430);

glVertex2i(270,430);
glVertex2i(270,370);
glVertex2i(300,370);
glVertex2i(300,430);



glEnd();
glFlush ();
glColor3ub (65,105,225);
glBegin(GL_QUADS);
glVertex2i(280,235);
glVertex2i(280,85);
glVertex2i(310,85);
glVertex2i(310,235);

glVertex2i(330,235);
glVertex2i(330,85);
glVertex2i(360,85);
glVertex2i(360,235);

glVertex2i(310,235);
glVertex2i(310,205);
glVertex2i(330,205);
glVertex2i(330,235);
glEnd();
glFlush ();

glColor3ub (222,184,135);
glBegin(GL_QUADS);
glVertex2i(260,220);
glVertex2i(260,190);
glVertex2i(280,190);
glVertex2i(280,220);

glVertex2i(280,220);
glVertex2i(280,210);
glVertex2i(290,210);
glVertex2i(290,220);

glVertex2i(360,220);
glVertex2i(360,190);
glVertex2i(380,190);
glVertex2i(380,220);

glVertex2i(350,220);
glVertex2i(350,210);
glVertex2i(360,210);
glVertex2i(360,220);


glEnd();
glFlush ();

glColor3ub (135,206,250);
glBegin(GL_QUADS);
glVertex2i(280,85);
glVertex2i(280,65);
glVertex2i(310,65);
glVertex2i(310,85);

glVertex2i(330,85);
glVertex2i(330,65);
glVertex2i(360,65);
glVertex2i(360,85);


glEnd();
glFlush ();

glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(300,350);
glVertex2i(300,330);
glVertex2i(340,330);
glVertex2i(340,350);

glVertex2i(308,330);
glVertex2i(308,310);
glVertex2i(332,310);
glVertex2i(332,330);

glVertex2i(315,310);
glVertex2i(315,290);
glVertex2i(325,290);
glVertex2i(325,310);


glEnd();
glFlush ();

glColor3ub (0,0,0);
glBegin(GL_QUADS);
glVertex2i(250,460);
glVertex2i(250,430);
glVertex2i(350,430);
glVertex2i(350,460);

glVertex2i(330,430);
glVertex2i(330,400);
glVertex2i(350,400);
glVertex2i(350,430);

glVertex2i(320,430);
glVertex2i(320,420);
glVertex2i(330,420);
glVertex2i(330,430);


glVertex2i(310,430);
glVertex2i(310,385);
glVertex2i(320,385);
glVertex2i(320,430);

glVertex2i(250,480);
glVertex2i(250,430);
glVertex2i(290,430);
glVertex2i(290,480);

glVertex2i(250,420);
glVertex2i(250,410);
glVertex2i(300,410);
glVertex2i(300,420);

glVertex2i(250,410);
glVertex2i(250,400);
glVertex2i(270,400);
glVertex2i(270,410);

glVertex2i(280,410);
glVertex2i(280,400);
glVertex2i(300,400);
glVertex2i(300,410);


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
gluOrtho2D(0.0, 640.0, 0.0, 500.0);
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
