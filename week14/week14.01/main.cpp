#include <GL/glut.h>
float angle=0;
void drawArml(){
    glPushMatrix();
        glScalef(1,0.5,0.5);///�ܲӪ������u
        glColor3f(0,1,0);
        glutSolidCube(0.2);///��⪺���u
    glPopMatrix();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glColor3f(1,1,1);
        glutSolidCube(0.4);///�զ⪺����
        glPushMatrix();
            glTranslatef(-0.2,0.2,0);///���W�ӻH
            glRotated(angle,0,0,1);///���
            glTranslatef(-0.1,0,0);///����त��(���`)������e���̤���
            drawArml();///��⪺���u
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
        ///glRotated(angle,0,0,1);
        ///glutSolidSphere(0.3,30,30);///���///0.3�O�b�|
        ///glutWireSphere(0.3,30,30);///�u��
}
int diff=2;
void timer(int t){///timer�T�_��,���A�n������
    glutTimerFunc(20,timer,t+1);///�]�w�s�x��
    //glClearColor(1,0,0,0);///�M�I����:����
    if(angle>90) diff=-2;
    if(angle<0) diff=+2;
    angle+=diff;
    display();///���e�e��
}
int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14 timer");

    glutDisplayFunc(display);
    glutTimerFunc(3000,timer,0);
    glutMainLoop();
}

