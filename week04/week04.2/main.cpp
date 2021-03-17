#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    printf("botton:%d state:%d x:%d y:%d\n",button,state,x,y);
}
int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08163034");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
}
