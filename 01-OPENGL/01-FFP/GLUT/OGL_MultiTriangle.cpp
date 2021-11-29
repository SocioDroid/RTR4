// header files
#include<GL/freeglut.h>

// global variables
bool bFullScreen = false;

// main
int main(int argc, char* argv[])
{

	// local function declarations
	void initialize();
	void resize(int, int);
	void display();
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);
	void uninitialize();

	// code
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(1000, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Mr. Aishwarya Sanjay Kendle");

	initialize();

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);

	glutMainLoop();

	return 0;
}

void initialize()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void resize(int width, int height)
{
	// code
	glViewport(0, 0, width, height);
}
float convertColor(int val)
{
	return val / 255.0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(convertColor(0), convertColor(255), convertColor(255));
	glVertex3f(-0.5f, 0.2f, 1.0f);
	glColor3f(convertColor(255), convertColor(0), convertColor(255));

	glVertex3f(0.5f, 0.2f, 1.0f);
	glColor3f(convertColor(255), convertColor(255), convertColor(0));

	glVertex3f(0.0f, -0.7f, 1.0f);
	glEnd();

	// glVertex3f(0.0f, 1.0f, 0.0f);
	// glVertex3f(-1.0f, 1.0f, 0.0f);
	// glVertex3f(1.0f, 1.0f, 0.0f);


	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
		if (bFullScreen == false)
		{
			glutFullScreen();
			bFullScreen = true;
		}
		else
		{
			glutLeaveFullScreen();
			bFullScreen = false;
		}
		break;
	default:
		break;
	}
}

void mouse(int button, int state, int x, int y)
{
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		glutLeaveMainLoop();
		break;
	default:
		break;
	}
}

void uninitialize()
{

}
