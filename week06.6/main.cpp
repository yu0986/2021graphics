#include <GL/glut.h>
float angle=0; ///TODO:
void hand(){
     glPushMatrix();
        glScalef(0.5,0.1,0.1);///�Ӫ���
        glColor3f(0,0,1);///�Ŧ⪺
        glutSolidCube(1);///���
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�M��
    glColor3f(1,1,1); glutSolidCube(0.5);///�j����
    glPushMatrix();
        glTranslatef(0.25,0.25,0);///(3)��Ӳ���k�W������
        glRotatef(angle, 0, 0, 1);///(2)�襤�����
        glTranslatef(0.25,0,0);///(1)�����`���줤��
        hand();///�Ӫ��Ŧ�p��
        glPushMatrix();
            glTranslatef(0.25,0,0);///(3)���k�W�L�h
            glRotatef(angle, 0,0,1);///(2)
            glTranslatef(0.25,0,0);///(1)
            hand();///�U���u/��y
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();///���b��
        glTranslatef(-0.25,0.25,0);///(3)��Ӳ��쥪�W������
        glRotatef(-angle, 0, 0, 1);///(2)�襤�����
        glTranslatef(-0.25,0,0);///(1)�����`���줤��
        hand();///�Ӫ��Ŧ�W���u
        glPushMatrix();
            glTranslatef(-0.25,0,0);///(3)�����W�L�h
            glRotatef(-angle, 0,0,1);///(2)
            glTranslatef(-0.25,0,0);///(1)
            hand();///�U���u/��y
        glPopMatrix();
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
