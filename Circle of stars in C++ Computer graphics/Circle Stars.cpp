#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0,0,0);
glPointSize(30.0);

glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(320,460);
glVertex2i(310,480);
glVertex2i(300,460);
glVertex2i(275,460);
glVertex2i(290,450);
glVertex2i(280,425);
glVertex2i(310,440);
glVertex2i(340,425);
glVertex2i(330,450);
glVertex2i(345,460);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(320,35);
glVertex2i(310,55);
glVertex2i(300,35);
glVertex2i(275,35);
glVertex2i(290,25);
glVertex2i(280,0);
glVertex2i(310,15);
glVertex2i(340,0);
glVertex2i(330,25);
glVertex2i(345,35);
glEnd();
glFlush ();

glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(45,248);
glVertex2i(35,268);
glVertex2i(25,248);
glVertex2i(0,248);
glVertex2i(15,238);
glVertex2i(5,213);
glVertex2i(35,225);
glVertex2i(65,213);
glVertex2i(55,238);
glVertex2i(70,248);
glEnd();
glFlush ();

glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(615,248);
glVertex2i(605,268);
glVertex2i(595,248);
glVertex2i(570,248);
glVertex2i(585,238);
glVertex2i(575,213);
glVertex2i(605,225);
glVertex2i(635,213);
glVertex2i(625,238);
glVertex2i(640,248);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(555,308);
glVertex2i(545,328);
glVertex2i(535,308);
glVertex2i(510,308);
glVertex2i(525,298);
glVertex2i(515,273);
glVertex2i(545,285);
glVertex2i(575,273);
glVertex2i(565,298);
glVertex2i(580,308);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(555,188);
glVertex2i(545,208);
glVertex2i(535,188);
glVertex2i(510,188);
glVertex2i(525,178);
glVertex2i(515,153);
glVertex2i(545,165);
glVertex2i(575,153);
glVertex2i(565,178);
glVertex2i(580,188);
glEnd();
glFlush ();

glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(105,188);
glVertex2i(95,208);
glVertex2i(85,188);
glVertex2i(60,188);
glVertex2i(75,178);
glVertex2i(65,153);
glVertex2i(95,165);
glVertex2i(125,153);
glVertex2i(115,178);
glVertex2i(130,188);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(105,308);
glVertex2i(95,328);
glVertex2i(85,308);
glVertex2i(60,308);
glVertex2i(75,298);
glVertex2i(65,273);
glVertex2i(95,285);
glVertex2i(125,273);
glVertex2i(115,298);
glVertex2i(130,308);
glEnd();
glFlush ();

glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(185,108);
glVertex2i(175,128);
glVertex2i(165,108);
glVertex2i(140,108);
glVertex2i(155,98);
glVertex2i(145,73);
glVertex2i(175,85);
glVertex2i(205,73);
glVertex2i(195,98);
glVertex2i(210,108);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(475,108);
glVertex2i(465,128);
glVertex2i(455,108);
glVertex2i(430,108);
glVertex2i(445,98);
glVertex2i(435,73);
glVertex2i(465,85);
glVertex2i(495,73);
glVertex2i(485,98);
glVertex2i(500,108);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(475,108);
glVertex2i(465,128);
glVertex2i(455,108);
glVertex2i(430,108);
glVertex2i(445,98);
glVertex2i(435,73);
glVertex2i(465,85);
glVertex2i(495,73);
glVertex2i(485,98);
glVertex2i(500,108);
glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(475,388);
glVertex2i(465,408);
glVertex2i(455,388);
glVertex2i(430,388);
glVertex2i(445,378);
glVertex2i(435,353);
glVertex2i(465,365);
glVertex2i(495,353);
glVertex2i(485,378);
glVertex2i(500,388);
glEnd();
glFlush ();

glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(185,388);
glVertex2i(175,408);
glVertex2i(165,388);
glVertex2i(140,388);
glVertex2i(155,378);
glVertex2i(145,353);
glVertex2i(175,365);
glVertex2i(205,353);
glVertex2i(195,378);
glVertex2i(210,388);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0,0,255,255);
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
