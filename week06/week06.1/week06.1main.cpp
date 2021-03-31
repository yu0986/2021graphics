#include <GL/glut.h>
float angle=0; ///TODO:
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///²MªÅ

    glPushMatrix();
        glRotatef( angle, 0,0,1);
        glutSolidCube(1);///TODO: µe­Ó¤è¶ô
       glPopMatrix();
    glutSwapBuffers();
    angle++; ///todo:
}
int main(int argc, char ** argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("08163034 !!!");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}

