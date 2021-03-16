#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0,0,0);
glPointSize(30.0);

glBegin(GL_QUADS);

glVertex2i(320,240);
glVertex2i(370,240);
glVertex2i(370,310);
glVertex2i(320,310);

glVertex2i(380,240);
glVertex2i(400,240);
glVertex2i(400,250);
glVertex2i(380,250);

glVertex2i(380,255);
glVertex2i(400,255);
glVertex2i(400,265);
glVertex2i(380,265);


glVertex2i(380,270);
glVertex2i(400,270);
glVertex2i(400,280);
glVertex2i(380,280);


glVertex2i(380,285);
glVertex2i(400,285);
glVertex2i(400,295);
glVertex2i(380,295);

glVertex2i(405,240);
glVertex2i(425,240);
glVertex2i(425,250);
glVertex2i(405,250);

glVertex2i(405,255);
glVertex2i(425,255);
glVertex2i(425,265);
glVertex2i(405,265);


glVertex2i(405,270);
glVertex2i(425,270);
glVertex2i(425,280);
glVertex2i(405,280);


glVertex2i(405,285);
glVertex2i(425,285);
glVertex2i(425,295);
glVertex2i(405,295);


glVertex2i(430,240);
glVertex2i(450,240);
glVertex2i(450,250);
glVertex2i(430,250);

glVertex2i(430,255);
glVertex2i(450,255);
glVertex2i(450,265);
glVertex2i(430,265);


glVertex2i(430,270);
glVertex2i(450,270);
glVertex2i(450,280);
glVertex2i(430,280);


glVertex2i(430,285);
glVertex2i(450,285);
glVertex2i(450,295);
glVertex2i(430,295);

glVertex2i(460,240);
glVertex2i(475,240);
glVertex2i(475,310);
glVertex2i(460,310);


///

glVertex2i(485,240);
glVertex2i(505,240);
glVertex2i(505,250);
glVertex2i(485,250);


glVertex2i(485,255);
glVertex2i(505,255);
glVertex2i(505,265);
glVertex2i(485,265);


glVertex2i(485,270);
glVertex2i(505,270);
glVertex2i(505,280);
glVertex2i(485,280);


glVertex2i(485,285);
glVertex2i(505,285);
glVertex2i(505,295);
glVertex2i(485,295);

/////6
glVertex2i(290,240);
glVertex2i(310,240);
glVertex2i(310,250);
glVertex2i(290,250);


glVertex2i(290,255);
glVertex2i(310,255);
glVertex2i(310,265);
glVertex2i(290,265);


glVertex2i(290,270);
glVertex2i(310,270);
glVertex2i(310,280);
glVertex2i(290,280);


glVertex2i(290,285);
glVertex2i(310,285);
glVertex2i(310,295);
glVertex2i(290,295);

////5
glVertex2i(265,240);
glVertex2i(285,240);
glVertex2i(285,250);
glVertex2i(265,250);


glVertex2i(265,255);
glVertex2i(285,255);
glVertex2i(285,265);
glVertex2i(265,265);


glVertex2i(265,270);
glVertex2i(285,270);
glVertex2i(285,280);
glVertex2i(265,280);


glVertex2i(265,285);
glVertex2i(285,285);
glVertex2i(285,295);
glVertex2i(265,295);
////4
glVertex2i(240,240);
glVertex2i(260,240);
glVertex2i(260,250);
glVertex2i(240,250);


glVertex2i(240,255);
glVertex2i(260,255);
glVertex2i(260,265);
glVertex2i(240,265);


glVertex2i(240,270);
glVertex2i(260,270);
glVertex2i(260,280);
glVertex2i(240,280);


glVertex2i(240,285);
glVertex2i(260,285);
glVertex2i(260,295);
glVertex2i(240,295);
////3
glVertex2i(215,240);
glVertex2i(235,240);
glVertex2i(235,250);
glVertex2i(215,250);

glVertex2i(215,255);
glVertex2i(235,255);
glVertex2i(235,265);
glVertex2i(215,265);


glVertex2i(215,270);
glVertex2i(235,270);
glVertex2i(235,280);
glVertex2i(215,280);


glVertex2i(215,285);
glVertex2i(235,285);
glVertex2i(235,295);
glVertex2i(215,295);

////2
glVertex2i(190,240);
glVertex2i(210,240);
glVertex2i(210,250);
glVertex2i(190,250);

glVertex2i(190,255);
glVertex2i(210,255);
glVertex2i(210,265);
glVertex2i(190,265);


glVertex2i(190,270);
glVertex2i(210,270);
glVertex2i(210,280);
glVertex2i(190,280);


glVertex2i(190,285);
glVertex2i(210,285);
glVertex2i(210,295);
glVertex2i(190,295);

////1
glVertex2i(165,240);
glVertex2i(185,240);
glVertex2i(185,250);
glVertex2i(165,250);

glVertex2i(165,255);
glVertex2i(185,255);
glVertex2i(185,265);
glVertex2i(165,265);


glVertex2i(165,270);
glVertex2i(185,270);
glVertex2i(185,280);
glVertex2i(165,280);


glVertex2i(165,285);
glVertex2i(185,285);
glVertex2i(185,295);
glVertex2i(165,295);
glEnd();
glFlush ();

glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2i(200,240);
glVertex2i(190,243);
glVertex2i(190,240);

glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2i(195,240);
glVertex2i(175,248);
glVertex2i(100,248);
glVertex2i(80,240);

glEnd();
glFlush ();
////black down
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2i(200,230);
glVertex2i(165,243);
glVertex2i(100,243);
glVertex2i(135,230);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2i(515,225);
glVertex2i(525,235);
glVertex2i(121,235);
glVertex2i(150,225);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2i(500,200);
glVertex2i(510,218);
glVertex2i(155,218);
glVertex2i(185,200);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2i(498,195);
glVertex2i(500,200);
glVertex2i(185,200);
glVertex2i(180,195);
glEnd();
glFlush ();
////2
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2i(460,290);
glVertex2i(460,310);
glVertex2i(465,310);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2i(370,290);
glVertex2i(370,310);
glVertex2i(360,310);


glEnd();
glFlush ();

}

void myInit (void)
{
glClearColor(255,255,255,255);
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
