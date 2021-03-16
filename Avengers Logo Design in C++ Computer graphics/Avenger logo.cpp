#include<stdio.h>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;

float Xp,Yp,X1,Y1,R,d,E,SE,R2,R3;

void plot(float X, float Y)
{
glClear (GL_COLOR_BUFFER_BIT);
glPointSize(2.0);
glBegin(GL_POLYGON);
glVertex2i(X,Y);

}
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0,0,0);
glPointSize(30.0);
d=(1-R);
Xp=0;
Yp=R;
glBegin(GL_POLYGON);
while(true)
{
    if(Xp<Yp)
    {
        if(d<0)
        {
            cout<<"d:"<<" "<<d<<endl;
            d=d+((2*Xp)+3);
            Xp=Xp+1;
            Yp=Yp;
            cout<<Xp+X1<<Yp+Y1<<endl;

        }
        else if(d>=0)
        {

            cout<<"d:"<<" "<<d<<endl;
            d=d+((2*(Xp-Yp))+5);
            Xp=Xp+1;
            Yp=Yp-1;
            cout<<Xp+X1<<Yp+Y1<<endl;

        }

        glColor3ub (255,0,0);
        plot(X1+Xp,Y1+Yp);
        plot(X1+Xp,Y1-Yp);
        plot(X1-Xp,Y1-Yp);
        plot(X1-Xp,Y1+Yp);
        plot(X1+Yp,Y1+Xp);
        plot(X1+Yp,Y1-Xp);
        plot(X1-Yp,Y1+Xp);
        plot(X1-Yp,Y1-Xp);




    }

    else
    {
        break;
    }
}
glEnd();
glFlush();
glBegin(GL_POLYGON);
d=(1-R2);
Xp=0;
Yp=R2;
while(true)
{
    if(Xp<Yp)
    {
        if(d<0)
        {
            cout<<"d:"<<" "<<d<<endl;
            d=d+((2*Xp)+3);
            Xp=Xp+1;
            Yp=Yp;
            cout<<Xp+X1<<Yp+Y1<<endl;

        }
        else if(d>=0)
        {

            cout<<"d:"<<" "<<d<<endl;
            d=d+((2*(Xp-Yp))+5);
            Xp=Xp+1;
            Yp=Yp-1;
            cout<<Xp+X1<<Yp+Y1<<endl;

        }

        glColor3ub (255,255,255);
        plot(X1+Xp,Y1+Yp);
        plot(X1+Xp,Y1-Yp);
        plot(X1-Xp,Y1-Yp);
        plot(X1-Xp,Y1+Yp);
        plot(X1+Yp,Y1+Xp);
        plot(X1+Yp,Y1-Xp);
        plot(X1-Yp,Y1+Xp);
        plot(X1-Yp,Y1-Xp);


    }

    else
    {
        break;
    }
}
glEnd();
glFlush();
glBegin(GL_POLYGON);
glColor3ub (255,0,0);
glVertex2i(205,140);
glVertex2i(220,130);
glVertex2i(340,380);
glVertex2i(320,380);


glEnd();
glFlush ();

glBegin(GL_POLYGON);
glColor3ub (255,0,0);
glVertex2i(400,360);
glVertex2i(390,360);
glVertex2i(390,280);
glVertex2i(400,280);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glColor3ub (255,0,0);
glVertex2i(240,100);
glVertex2i(260,100);
glVertex2i(310,200);
glVertex2i(290,200);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
d=(1-R3);
Xp=0;
Yp=R3;

while(true)
{
    if(Xp<Yp)
    {
        if(d<0)
        {
            cout<<"d:"<<" "<<d<<endl;
            d=d+((2*Xp)+3);
            Xp=Xp+1;
            Yp=Yp;
            cout<<Xp+X1<<Yp+Y1<<endl;

        }
        else if(d>=0)
        {

            cout<<"d:"<<" "<<d<<endl;
            d=d+((2*(Xp-Yp))+5);
            Xp=Xp+1;
            Yp=Yp-1;
            cout<<Xp+X1<<Yp+Y1<<endl;

        }

        glColor3ub (255,0,0);
        plot(X1+Xp,Y1+Yp);
        plot(X1+Xp,Y1-Yp);
        plot(X1-Xp,Y1-Yp);
        plot(X1-Xp,Y1+Yp);
        plot(X1+Yp,Y1+Xp);
        plot(X1+Yp,Y1-Xp);
        plot(X1-Yp,Y1+Xp);
        plot(X1-Yp,Y1-Xp);



    }

    else
    {
        break;
    }
}

/*
D=(1-R2);
xp=0;
yp=R2;

while(true)
{
    if(xp<yp)
    {
        if(D<0)
        {
            cout<<"d:"<<" "<<d<<endl;
            D=D+((2*xp)+3);
            xp=xp+1;
            yp=yp;
            cout<<xp+x1<<yp+yy1<<endl;

        }
        else if(d>=0)
        {

            cout<<"d:"<<" "<<d<<endl;
            D=D+((2*(xp-yp))+5);
            xp=xp+1;
            yp=yp-1;
            cout<<xp+x1<<yp+yy1<<endl;

        }

        glColor3ub (0,255,0);
        plot(x1+xp,yy1+yp);
        plot(x1+xp,yy1-yp);
        plot(x1-xp,yy1+yp);
        plot(x1-xp,yy1-yp);
        plot(x1+yp,yy1+xp);
        plot(x1+yp,yy1-xp);
        plot(x1-yp,yy1+xp);
        plot(x1-yp,yy1-xp);



    }

    else
    {
        break;
    }
}


*/




glEnd();
glFlush();

glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2i(180,60);
glVertex2i(230,60);
glVertex2i(390,400);
glVertex2i(340,400);


glEnd();
glFlush ();


glBegin(GL_POLYGON);

glColor3ub (255,255,255);
glVertex2i(350,250);
glVertex2i(390,210);
glVertex2i(390,400);
glVertex2i(350,400);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glVertex2i(390,190);
glVertex2i(350,230);
glVertex2i(350,150);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glVertex2i(390,130);
glVertex2i(390,170);
glVertex2i(350,130);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glVertex2i(350,212);
glVertex2i(260,212);
glVertex2i(240,168);
glVertex2i(350,168);


glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0,0,0,255);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
X1=330;
Y1=220;
R=160;
R2=140;
R3=120;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA);
glutInitWindowSize (640, 480);
glutInitWindowPosition (300,300);
glutCreateWindow (" CG Lab");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
