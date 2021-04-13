#include <GL/glut.h>
#include <math.h>

float angle=0; ///TODO:
void hand(){
     glPushMatrix();
        glScalef(0.5,0.1,0.1);///細長的
        glColor3f(1,1,1);///白色的
        glutSolidCube(1);///方塊
    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清空
    glColor3f(1,1,1); glutSolidCube(0.5);///大身體
    glBegin(GL_POLYGON);

   glColor3f(255/255.0, 255/255.0, 255/255.0);

    for(float angle=0;angle<3.14159265359358979*2;angle+=0.01){

        glVertex2f(0.2*cos(angle)+(140-150)/3000.0,0.2*sin(angle)+(-(140-150)/25.0));

    }

    glEnd();    ///圓

    glPushMatrix();
        glTranslatef(0.25,0.25,0);///(3)整個移到右上角掛著
        glRotatef(angle, 0, 0, 1);///(2)對中心轉動
        glTranslatef(0.25,0,0);///(1)把關節移到中心
        hand();///細長白色小手
        glPushMatrix();
            glTranslatef(0.25,0,0);///(3)往右上過去
            glRotatef(angle, 0,0,1);///(2)
            glTranslatef(0.25,0,0);///(1)
            hand();///下手臂/手肘
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();///左半邊
        glTranslatef(-0.25,0.25,0);///(3)整個移到左上角掛著
        glRotatef(-angle, 0, 0, 1);///(2)對中心轉動
        glTranslatef(-0.25,0,0);///(1)把關節移到中心
        hand();///細長白色上手臂
        glPushMatrix();
            glTranslatef(-0.25,0,0);///(3)往左上過去
            glRotatef(-angle, 0,0,1);///(2)
            glTranslatef(-0.25,0,0);///(1)
            hand();///下手臂/手肘
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
