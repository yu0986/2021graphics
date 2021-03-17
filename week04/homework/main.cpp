 #include <GL/glut.h>

#include <math.h>

void display()

{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_POLYGON);

        glColor3f(255/255.0, 255/255.0, 255/255.0);

        glVertex2f(  (0-150)/150.0,   -(0-150)/150.0);

        glVertex2f((300-150)/150.0,   -(0-150)/150.0);

        glVertex2f((300-150)/150.0, -(300-150)/150.0);

        glVertex2f(  (0-150)/150.0, -(300-150)/150.0);

    glEnd();      ///以上是背景


     glBegin(GL_POLYGON);

   glColor3f(0/255.0, 0/255.0, 0/255.0);

    for(float angle=0;angle<3.14159265359358979*2;angle+=0.01){

        glVertex2f(0.9*cos(angle)+(140-150)/150.0,0.9*sin(angle)+(-(140-150)/150.0));

    }

    glEnd();    ///圓

    glBegin(GL_POLYGON);

   glColor3f(255/255.0, 255/255.0, 62/255.0);

    for(float angle=0;angle<3.14159265359358979*2;angle+=0.01){

        glVertex2f(0.8*cos(angle)+(140-150)/150.0,0.8*sin(angle)+(-(140-150)/150.0));

    }

    glEnd();    ///圓

glBegin(GL_TRIANGLES);

   glColor3f(0/255.0, 0/255.0, 0/255.0);


        glVertex2f((250-150)/150.0, -(70-150)/150.0);

        glVertex2f((152-150)/150.0, -(147-150)/150.0);

        glVertex2f((260-150)/150.0, -(200-150)/150.0);

    glEnd();    ///三角形

glBegin(GL_TRIANGLES);

   glColor3f(255/255.0, 255/255.0, 255/255.0);


        glVertex2f((280-150)/150.0, -(70-150)/150.0);

        glVertex2f((180-150)/150.0, -(145-150)/150.0);

        glVertex2f((280-150)/150.0, -(190-150)/150.0);

    glEnd();    ///三角形

glBegin(GL_POLYGON);

   glColor3f(0/255.0, 0/255.0, 0/255.0);

    for(float angle=0;angle<3.14159265359358979*2;angle+=0.01){

        glVertex2f(0.15*cos(angle)+(120-150)/150.0,0.15*sin(angle)+(-(90-150)/150.0));

    }

    glEnd();    ///圓

    glutSwapBuffers();

}



int main(int argc,char**argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE |GLUT_DEPTH);

    glutCreateWindow("08163034");

     glutDisplayFunc(display);

     glutMainLoop();

}

