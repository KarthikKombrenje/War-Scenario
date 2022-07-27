#include<GL/glut.h>
#include<stdio.h>
int x, y;
int rFlag = 0;
GLfloat angle = 45.0f;
int y3 = 0;
void buildings()
{
	glColor3f(1.0, 1.0, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(-479, -100);
	glVertex2f(-479, 70);
	glVertex2f(-420, 70);
	glVertex2f(-420, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.6);
	glVertex2f(-420, -100);
	glVertex2f(-420, 80);
	glVertex2f(-380, 80);
	glVertex2f(-380, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.1, 0.6);
	glVertex2f(-380, -100);
	glVertex2f(-380, 50);
	glVertex2f(-340, 50);
	glVertex2f(-340, -100);
	glEnd();

	glColor3f(1.0, 1.0, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(-179, -100);
	glVertex2f(-179, 70);
	glVertex2f(-139, 70);
	glVertex2f(-139, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.6);
	glVertex2f(-139, -100);
	glVertex2f(-139, 80);
	glVertex2f(-99, 80);
	glVertex2f(-99, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.1, 0.6);
	glVertex2f(-99, -100);
	glVertex2f(-99, 40);
	glVertex2f(-59, 40);
	glVertex2f(-59, -100);
	glEnd();

	glColor3f(1.0, 1.0, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(-179, -100);
	glVertex2f(-179, 70);
	glVertex2f(-139, 70);
	glVertex2f(-139, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.6);
	glVertex2f(-139, -100);
	glVertex2f(-139, 80);
	glVertex2f(-99, 80);
	glVertex2f(-99, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.1, 0.6);
	glVertex2f(-99, -100);
	glVertex2f(-99, 40);
	glVertex2f(-59, 40);
	glVertex2f(-59, -100);
	glEnd();

	glColor3f(1.0, 1.0, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(121, -100);
	glVertex2f(121, 70);
	glVertex2f(161, 70);
	glVertex2f(161, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.6);
	glVertex2f(161, -100);
	glVertex2f(161, 80);
	glVertex2f(201, 80);
	glVertex2f(201, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.1, 0.6);
	glVertex2f(201, -100);
	glVertex2f(201, 40);
	glVertex2f(241, 40);
	glVertex2f(241, -100);
	glEnd();
	
	glColor3f(1.0, 1.0, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(341, -100);
	glVertex2f(341, 70);
	glVertex2f(381, 70);
	glVertex2f(381, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.6);
	glVertex2f(381, -100);
	glVertex2f(381, 80);
	glVertex2f(421, 80);
	glVertex2f(421, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.1, 0.6);
	glVertex2f(421, -100);
	glVertex2f(421, 40);
	glVertex2f(461, 40);
	glVertex2f(461, -100);
	glEnd();

}
void plane() //Russia
{
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.6);
	glVertex2f(-339, 300);
	glVertex2f(-339, 350);
	glVertex2f(-285, 350);
	glVertex2f(-285, 300);
	glEnd();
	glColor3f(1.0, 1.0, 0.6);
	glBegin(GL_TRIANGLES);
	glVertex2f(-339, 300);
	glVertex2f(-339, 350);
	glVertex2f(-369, 370);
	glEnd();
	glColor3f(0.7, 1.0, 0.6);
	glBegin(GL_TRIANGLES);
	glVertex2f(-285, 350);
	glVertex2f(-285, 300);
	glVertex2f(-250, 325);
	glEnd();
	glColor3f(1.0, 0.9, 0.6);
	glBegin(GL_TRIANGLES);
	glVertex2f(-330, 350);
	glVertex2f(-290, 350);
	glVertex2f(-290, 390);
	glEnd();
	glColor3f(1.0,0.9, 0.6);
	glBegin(GL_TRIANGLES);
	glVertex2f(-330, 300);
	glVertex2f(-290, 300);
	glVertex2f(-290, 260);
	glEnd();
}
void tank1()
{
	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-479, -429);
	glVertex2f(-479, -359);
	glVertex2f(-399, -359);
	glVertex2f(-399, -429);
	glEnd();
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-459, -389);
	glVertex2f(-459, -379);
	glVertex2f(-419, -379);
	glVertex2f(-419, -389);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-459, -399);
	glVertex2f(-459, -389);
	glVertex2f(-419, -389);
	glVertex2f(-419, -399);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-459, -409);
	glVertex2f(-459, -399);
	glVertex2f(-419, -399);
	glVertex2f(-419, -409);
	glEnd();
	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-459, -359);
	glVertex2f(-459, -329);
	glVertex2f(-419, -329);
	glVertex2f(-419, -359);
	glEnd();
}
void tankgun()
{
	glBegin(GL_QUADS);
	glVertex2f(-439, -329);
	glVertex2f(-419, -289);
	glVertex2f(-414, -289);
	glVertex2f(-434, -329);
	glEnd();
}
void tank2()
{
	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-329, -429);
	glVertex2f(-329, -359);
	glVertex2f(-249, -359);
	glVertex2f(-249, -429);
	glEnd();
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-309, -389);
	glVertex2f(-309, -379);
	glVertex2f(-269, -379);
	glVertex2f(-269, -389);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-309, -399);
	glVertex2f(-309, -389);
	glVertex2f(-269, -389);
	glVertex2f(-269, -399);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-309, -409);
	glVertex2f(-309, -399);
	glVertex2f(-269, -399);
	glVertex2f(-269, -409);
	glEnd();
	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-309, -359);
	glVertex2f(-309, -329);
	glVertex2f(-269, -329);
	glVertex2f(-269, -359);
	glEnd();
}
void tankgun2()
{
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.1f, 0.0f);
	glVertex2f(-289, -329);
	glVertex2f(-269, -289);
	glVertex2f(-264, -289);
	glVertex2f(-284, -329);
	glEnd();
}
int background()
{
	glColor3f(0.0f, 1.0f, 0.0f);//Green
	glBegin(GL_QUADS);
	glVertex2f(-600, -800);
	glVertex2f(-600, -100);
	glVertex2f(800, -100);
	glVertex2f(800, -800);
	glEnd();
}
float th = 0.0;
float trX = 0.0, trY = 0.0,x3=0.0;
void display()
{
	float x = 0, y = 0;
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	if (rFlag == 1) //Rotate Around origin
	{
		trX += 0.5;
		trY += 0.0;
	}
	background();
	buildings();
	if (rFlag == 3) {
		x3 += 0.5;
		y3 -= .5;
	}
	glPushMatrix();
	if (rFlag == 4) {
		glTranslatef(-x3, 0, 0.0);
		x3 = 0;
	}
	glTranslatef(x3, y3, 0.0);
	plane();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-289.0, -329.0, 0.0);//changing origin of rotation
	glRotatef(angle, 0.0f, 0.0f, 1.0f);//rotating at origin
	glTranslatef(289.0,329.0, 0.0);//
	glPopMatrix();
	glTranslatef(trX, trY, 0.0);
	tankgun2();
	if (rFlag == 2) {
		trX = 0.0;
	}
	tank1();//russia tank
	glTranslatef(x, y, 0);
	tank2();
	glPushMatrix();
	glTranslatef(-439.0, -329.0, 0.0);//changing origin of rotation
	glRotatef(angle, 0.0f, 0.0f, 1.0f);//rotating at origin
	glTranslatef(439.0, 329.0, 0.0);//

	tankgun();
	glPopMatrix();//
	angle = angle + 0.2;
	glutPostRedisplay();
	glutSwapBuffers();
}
void myInit()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-500.0, 500.0, -500.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
}
void rotateMenu(int option)
{
	rFlag = option;
	
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tank Mini Project");
	myInit();
	glutDisplayFunc(display);
	glutCreateMenu(rotateMenu);
	glutAddMenuEntry("Move Russian Tank", 1);
	glutAddMenuEntry("Reset", 2);
	glutAddMenuEntry("Move plane", 3);
	glutAddMenuEntry("Reset plane", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}
