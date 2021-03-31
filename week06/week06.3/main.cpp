#include <GL/glut.h>
float angle=0; ///TODO:
void hand(){
     glPushMatrix();
        glScalef(0.5,0.1,0.1);///細長的
        glColor3f(0,0,1);///藍色的
        glutSolidCube(1);///方塊
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清空
    glPushMatrix();
        glRotatef(angle, 0, 0, 1);///對中心轉動
        glTranslatef(0.25,0,0);///把關節移到中心
        hand();///細長藍色小手
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

