#include <GL/glut.h>
float angle=0;
void drawArml(){
    glPushMatrix();
        glScalef(1,0.5,0.5);///變細長的手臂
        glColor3f(0,1,0);
        glutSolidCube(0.2);///綠色的手臂
    glPopMatrix();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glColor3f(1,1,1);
        glutSolidCube(0.4);///白色的身體
        glPushMatrix();
            glTranslatef(-0.2,0.2,0);///掛上肩膀
            glRotated(angle,0,0,1);///轉動
            glTranslatef(-0.1,0,0);///把旋轉中心(關節)先移到畫面最中心
            drawArml();///綠色的手臂
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
        ///glRotated(angle,0,0,1);
        ///glutSolidSphere(0.3,30,30);///實心///0.3是半徑
        ///glutWireSphere(0.3,30,30);///線框
}
int diff=2;
void timer(int t){///timer響起時,做你要做的事
    glutTimerFunc(20,timer,t+1);///設定新鬧鐘
    //glClearColor(1,0,0,0);///清背景色:紅色
    if(angle>90) diff=-2;
    if(angle<0) diff=+2;
    angle+=diff;
    display();///重畫畫面
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

