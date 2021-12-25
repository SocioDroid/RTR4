// ------------------ || Shree || ------------------ 
// header files
#include <GL/freeglut.h>
#include <math.h>

// global variables
bool bFullScreen = false;

// Entry-point function
int main(int argc, char* argv[])
{
	// local function declarations
	void initialize(void);
	void resize(int, int);
	void display(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);
	void uninitialize(void);

	// Code
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Aishwarya Sanjay Kendle");
	
	initialize();
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);

	glutMainLoop();

	return(0);
}

void initialize(void)
{
	// Code
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void resize(int width, int height)
{
	// Code
	glViewport(0, 0, width, height);
}

void display(void)
{
	// variable declaration
	const float r = 0.5f;

	// Code
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	

	float x, y;

	for(float angle = 0.0; angle<360.0; angle = angle+0.01)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(0, 0, 0.0f); // Center of the circle 
		
		x = cos(angle)*r;
		y = sin(angle)*r;
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex3f(x, y, 0.0f);
	}

	glEnd();

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	// code
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
	// code
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		glutLeaveMainLoop();
		break;
	default:
		break;
	}
}

void uninitialize(void)
{
	// code
}
