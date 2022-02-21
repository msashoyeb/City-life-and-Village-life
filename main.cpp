#include<cstdio>
#include<math.h>
#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <GL/glu.h>
#include<windows.h>
using namespace std;

const double PI = 2.0 * acos(0.0);
GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat i = 0.0f;

GLfloat ship_position = 0.0f;
GLfloat ship_speed = 0.03f;

GLfloat cloud1_position = 0.0f;
GLfloat cloud1_speed = 0.01f;

GLfloat cloud2_position = 0.0f;
GLfloat cloud2_speed = 0.02f;

GLfloat bird_position = 0.0f;
GLfloat bird_speed = 0.06f;

GLfloat rain_position = 0.0f;
GLfloat rain_speed = 0.3f;

void init();
void update(int value);
void handleMouse(int button, int state, int x, int y);
void handleKeypress(unsigned char key, int x, int y);

void day_sky();
void night_sky();
void day_sea();
void night_sea();
void sun();
void moon();
void star();
void cloud1();
void cloud2();
void island1();
void island2();
void windmill();
void hut();
void roadside_tree();
void big_tree();
void straw();
void road();
void bridge();
void building();
void car1();
void car2();
void ship();
void ship2();
void birds();
void boat();
void rain();

void day_display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    day_sky();
    day_sea();
    sun();
    cloud1();
    cloud2();
    island1();
    island2();
    straw();
    hut();
    windmill();
    road();
    building();
    roadside_tree();
    big_tree();
    car1();
    car2();
    ship();
    boat();
    birds();
    glFlush();
}

void night_display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    night_sky();
    night_sea();
    star();
    moon();
    cloud1();
    cloud2();
    island1();
    island2();
    straw();
    hut();
    windmill();
    road();
    building();
    roadside_tree();
    big_tree();
    car1();
    car2();
    ship();
    boat();
    glFlush();
}

void rain_display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    day_sky();
    day_sea();
    cloud1();
    cloud2();
    island1();
    island2();
    straw();
    hut();
    windmill();
    road();
    building();
    roadside_tree();
    big_tree();
    car1();
    car2();
    ship();
    boat();
    rain();
    glFlush();
}
void night_rain_display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    night_sky();
    night_sea();
    cloud1();
    cloud2();
    island1();
    island2();
    straw();
    hut();
    windmill();
    road();
    building();
    roadside_tree();
    big_tree();
    car1();
    car2();
    ship();
    boat();
    rain();
    glFlush();
}

void Idle()
{
    glutPostRedisplay();
}
void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
}
void update(int value)
{
    if(position > 2.0)
        position = -1.0f;
    position += speed;
    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}

void ship_update(int value)
{
    if(ship_position > 2.0)
        ship_position = -1.0f;
    ship_position += ship_speed;
    glutPostRedisplay();
    glutTimerFunc(100, ship_update, 0);
}

void cloud1_update(int value)
{
    if(cloud1_position > 2.0)
        cloud1_position = -1.0f;
    cloud1_position += cloud1_speed;
    glutPostRedisplay();
    glutTimerFunc(100, cloud1_update, 0);
}

void cloud2_update(int value)
{
    if(cloud2_position > 2.0)
        cloud2_position = -1.0f;
    cloud2_position += cloud2_speed;
    glutPostRedisplay();
    glutTimerFunc(100, cloud2_update, 0);
}

void bird_update(int value)
{
    if(bird_position > 2.0)
        bird_position = -1.0f;
    bird_position += bird_speed;
    glutPostRedisplay();
    glutTimerFunc(100, bird_update, 0);
}

void rain_update(int value)
{
    if(rain_position > 2.0)
        rain_position = -1.0f;
    rain_position += rain_speed;
    glutPostRedisplay();
    glutTimerFunc(100, rain_update, 0);
}
void soundDayOn()
{
    PlaySound("evening.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void soundNightOn()
{
    PlaySound("night.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void soundRainOn()
{
    PlaySound("rain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}
void handleKeypress(unsigned char key, int x, int y)
{
switch(key)
	{
    case 'd':
        glutDisplayFunc(day_display);
        soundDayOn();
        glutPostRedisplay();

        break;
    case 'n':
        glutDisplayFunc(night_display);
        soundNightOn();
        glutPostRedisplay();
        break;
    case 'r':
        glutDisplayFunc(rain_display);
        soundRainOn();
        glutPostRedisplay();
        break;
    case 'e':
        glutDisplayFunc(night_rain_display);
//        soundEveningOn();
        glutPostRedisplay();
        break;
    glutPostRedisplay();
	}
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600); //960, 540 //1280, 720 //1600, 900 //1920, 1080
    glutInitWindowPosition(50, 50);
    glutCreateWindow("City and village life");
   cout << "#################################################" << endl;
   cout << "#                                               #" << endl;
   cout << "#City and Village view                          #" << endl;
   cout << "#                                               #" << endl;
   cout << "#################################################" << endl;

   cout << "Press 'd' for Day view" << endl;
   cout << "Press 'n' for Night view" << endl;
   cout << "Press 'r' for Day Rain view" << endl;
   cout << "Press 'e' for Night Rain view" << endl;
   cout << "Md.Hasibuzzaman(19-40495-1)" << endl;
   cout << "Showyeab Ahmed (19-39668-1)" << endl;
   cout << "Press 'r' for Day Rain view" << endl;
   cout << "Press 'e' for Night Rain view" << endl;
    soundDayOn();
    glutDisplayFunc(day_display);
    init();
    glutIdleFunc(Idle);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, ship_update, 0);
    glutTimerFunc(100, bird_update, 0);
    glutTimerFunc(100, cloud1_update, 0);
    glutTimerFunc(100, cloud2_update, 0);
    glutTimerFunc(100, rain_update, 0);
    glutMainLoop();
    return 0;
}


void day_sky()
{
    glBegin(GL_QUADS);
    glColor3ub(135,206,250);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.5f);
    glEnd();
}
void night_sky()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.5f);
    glEnd();
}
void day_sea()
{
    glBegin(GL_QUADS);
    glColor3ub(65,105,225);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}
void night_sea()
{
    glBegin(GL_QUADS);
    glColor3ub(39, 64, 139);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();

}
void sun()
{
    glPushMatrix();
    glColor3d(255,255,0);
    glTranslatef(0.5, 0.8, 0.0); //x, y, z
    glutSolidSphere(0.09, 255, 255); // radius, slices, stacks
    glPopMatrix();
}
void moon()
{
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(-0.5, 0.8, 0.0);
    glutSolidSphere(0.1, 255, 255);
    glPopMatrix();
}
void star()
{
    glPointSize(5.0f);
    glBegin(GL_POINTS);
    glColor3ub(255,255,255);
    for(float i = -0.75f; i <= 0.8f; i += 0.2f)
    {
        for(float j =0.9f; j >= 0.55f; j -= 0.3)
        {
            glVertex2f(i, j);
        }
    }
    glEnd();

    glPointSize(5.0f);
    glBegin(GL_POINTS);
    glColor3ub(255,255,255);
    for(float i = -0.9f; i <= 0.9f; i += 0.2f)
    {
        for(float j = 0.8f; j >= 0.55f; j -= 0.3)
        {
            glVertex2f(i, j);
        }
    }
    glEnd();
}
void cloud1()
{
    float theta;
    glPushMatrix();
    glTranslatef(cloud1_position, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3d(255,255,255);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(-0.25+0.05*cos(theta), 0.8+0.05*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(255,255,255);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(-0.28+0.04*cos(theta), 0.78+0.04*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(255,255,255);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(-0.33+0.05*cos(theta), 0.75+0.05*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(255,255,255);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(-0.24+0.06*cos(theta), 0.74+0.06*sin(theta));
    }
    glEnd();
    glPopMatrix();
}
void cloud2()
{
    float theta;
    glPushMatrix();
    glTranslatef(cloud1_position, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3d(255,255,255);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(.2+0.07*cos(theta), 0.85+0.07*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(255,255,255);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(.27+0.05*cos(theta), 0.85+0.05*sin(theta));
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3d(255,255,255);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(0.17+0.05*cos(theta), 0.79+0.05*sin(theta));
    }
    glEnd();
    glPopMatrix();
}
void island1()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(159, 182, 205);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -0.4f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(159, 182, 205);
    glVertex2f(-0.15f,0.5f);
    glVertex2f(0.05f,-0.05f);
    glVertex2f(-0.15f,-0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(159, 182, 205);
    glVertex2f(-0.15f,-0.4f);
    glVertex2f(-1.0f,-0.4f);
    glVertex2f(-1.0f,0.5f);
    glVertex2f(-0.15f,0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);
    glVertex2f(0.05f,-0.05f);
    glVertex2f(-0.15f,-0.4f);
    glVertex2f(-0.15f,-0.45f);
    glVertex2f(0.05f,-0.15f);
    glEnd();
    glBegin(GL_POLYGON  );
    glColor3ub(64, 64, 64);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -0.56f);
    glVertex2f(-0.3f, -0.47f);
    glEnd();
    glBegin(GL_POLYGON  );
    glColor3ub(64, 64, 64);
    glVertex2f(-0.15f,-0.4f);
    glVertex2f(-0.15f,-0.45f);
    glVertex2f(-0.3f, -0.47f);
    glVertex2f(-0.3f, -0.4f);
    glEnd();
}
void island2()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 139, 34);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(1.0f, -0.4f);
    glVertex2f(1.0f, 0.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(139, 69, 19);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.5f, 0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 139, 34);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.25f, -0.4f);
    glVertex2f(1.0f, -0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19);
    glVertex2f(1.0f,-0.4f);
    glVertex2f(0.25f,-0.4f);
    glVertex2f(0.25f, -0.45f);
    glVertex2f(1.0f, -0.45f);
    glEnd();
}

void windmill()
{
    float step_angle=0.2f;
    float center_X=0.58f;
    float center_Y=0.3f;

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 250, 205);
    glVertex2f(.55f, 0.1f);
    glVertex2f(.6f, 0.1f);
    glVertex2f(.58f, 0.3f);
    glEnd();

    glPushMatrix();
    glTranslatef(center_X,center_Y,0.0f);
    glRotatef(i,0.0,0.0,0.2);
    glTranslatef(-center_X,-center_Y,0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2f(.58f, 0.3f);
    glVertex2f(.7f, 0.4f);
    glVertex2f(.72f, 0.38f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2f(.58f, 0.3f);
    glVertex2f(.45f, 0.4f);
    glVertex2f(.43f, 0.38f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2f(.58f, 0.3f);
    glVertex2f(.58f, 0.14f);
    glVertex2f(.6f, 0.14f);
    glEnd();
    i +=4.0f;

    int j;
    GLfloat x=.58f;
    GLfloat y=0.3f;
    GLfloat radius=0.02f;
    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x,y);
    for(j=0; j<=triangleAmount; j++)
    {
        glVertex2f(
            x+(radius*cos(j*twicePi/triangleAmount)),
            y+(radius*sin(j*twicePi/triangleAmount))
        );
    }
    glEnd();
    glPopMatrix();
}
void hut()
{
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 236, 139);
    glVertex2f(.62f,.32f);
    glVertex2f(.62f,.4f);
    glVertex2f(.70f,.4f);
    glVertex2f(.70f,.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(.64f,.33f);
    glVertex2f(.64f,.37f);
    glVertex2f(.68f,.37f);
    glVertex2f(.68f,.323f);
    glPopMatrix();
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 165, 79);
    glVertex2f(0.62f,0.4f);
    glVertex2f(0.7f,0.4f);
    glVertex2f(0.66f,0.48f);
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(205, 190, 112);
    glVertex2f(.70f,.30f);
    glVertex2f(.70f,.4f);
    glVertex2f(.92f,.4f);
    glVertex2f(.92f,.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(.78f,.30f);
    glVertex2f(.78f,.37f);
    glVertex2f(.82f,.37f);
    glVertex2f(.82f,.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(139, 139, 122);
    glVertex2f(.705f,.39f);
    glVertex2f(.66f,.48f);
    glVertex2f(.88f,.48f);
    glVertex2f(.93f,.39f);
    glPopMatrix();
    glEnd();
}
void roadside_tree()
{
    glBegin(GL_QUADS);
glPushMatrix();
glColor3ub(139, 134, 78);
glVertex2f(-.84f,.00f);
glVertex2f(-.84f,.06f);
glVertex2f(-.80f,.06f);
glVertex2f(-.80f,.00f);
glPopMatrix();
glEnd();



glBegin(GL_TRIANGLES);
glPushMatrix();
glColor3ub(118, 238, 0);
glVertex2f(-0.88f,0.06f);
glVertex2f(-0.82f,0.12f);
glVertex2f(-0.76f,0.06f);



glVertex2f(-0.88f,0.09f);
glVertex2f(-0.82f,0.15f);
glVertex2f(-0.76f,0.09f);



glVertex2f(-0.88f,0.12f);
glVertex2f(-0.82f,0.17f);
glVertex2f(-0.76f,0.12f);



glVertex2f(-0.88f,0.15f);
glVertex2f(-0.82f,0.19f);
glVertex2f(-0.76f,0.15f);



glVertex2f(-0.88f,0.17f);
glVertex2f(-0.82f,0.22f);
glVertex2f(-0.76f,0.17f);
glPopMatrix();
glEnd();



glBegin(GL_QUADS);
glPushMatrix();
glColor3ub(139, 134, 78);
glVertex2f(-.64f,.00f);
glVertex2f(-.64f,.06f);
glVertex2f(-.60f,.06f);
glVertex2f(-.60f,.00f);
glPopMatrix();
glEnd();



glBegin(GL_TRIANGLES);
glPushMatrix();
glColor3ub(118, 238, 0);



glVertex2f(-0.68f,0.06f);
glVertex2f(-0.62f,0.12f);
glVertex2f(-0.56f,0.06f);



glVertex2f(-0.68f,0.09f);
glVertex2f(-0.62f,0.15f);
glVertex2f(-0.56f,0.09f);



glVertex2f(-0.68f,0.12f);
glVertex2f(-0.62f,0.17f);
glVertex2f(-0.56f,0.12f);



glVertex2f(-0.68f,0.15f);
glVertex2f(-0.62f,0.19f);
glVertex2f(-0.56f,0.15f);



glVertex2f(-0.68f,0.17f);
glVertex2f(-0.62f,0.22f);
glVertex2f(-0.56f,0.17f);



glPopMatrix();
glEnd();



glBegin(GL_QUADS);
glPushMatrix();
glColor3ub(139, 134, 78);
glVertex2f(-.44f,.00f);
glVertex2f(-.44f,.06f);
glVertex2f(-.40f,.06f);
glVertex2f(-.40f,.00f);
glPopMatrix();
glEnd();



glBegin(GL_TRIANGLES);
glPushMatrix();
glColor3ub(118, 238, 0);



glVertex2f(-0.48f,0.06f);
glVertex2f(-0.42f,0.12f);
glVertex2f(-0.36f,0.06f);



glVertex2f(-0.48f,0.09f);
glVertex2f(-0.42f,0.15f);
glVertex2f(-0.36f,0.09f);



glVertex2f(-0.48f,0.12f);
glVertex2f(-0.42f,0.17f);
glVertex2f(-0.36f,0.12f);



glVertex2f(-0.48f,0.15f);
glVertex2f(-0.42f,0.19f);
glVertex2f(-0.36f,0.15f);



glVertex2f(-0.48f,0.17f);
glVertex2f(-0.42f,0.22f);
glVertex2f(-0.36f,0.17f);



glPopMatrix();
glEnd();



glBegin(GL_QUADS);
glPushMatrix();
glColor3ub(139, 134, 78);
glVertex2f(-.24f,.00f);
glVertex2f(-.24f,.06f);
glVertex2f(-.20f,.06f);
glVertex2f(-.20f,.00f);
glPopMatrix();
glEnd();



glBegin(GL_TRIANGLES);
glPushMatrix();
glColor3ub(118, 238, 0);



glVertex2f(-0.28f,0.06f);
glVertex2f(-0.22f,0.12f);
glVertex2f(-0.16f,0.06f);



glVertex2f(-0.28f,0.09f);
glVertex2f(-0.22f,0.15f);
glVertex2f(-0.16f,0.09f);



glVertex2f(-0.28f,0.12f);
glVertex2f(-0.22f,0.17f);
glVertex2f(-0.16f,0.12f);



glVertex2f(-0.28f,0.15f);
glVertex2f(-0.22f,0.19f);
glVertex2f(-0.16f,0.15f);



glVertex2f(-0.28f,0.17f);
glVertex2f(-0.22f,0.22f);
glVertex2f(-0.16f,0.17f);



glPopMatrix();
glEnd();
//right side tree
glBegin(GL_QUADS);
glPushMatrix();
glColor3ub(139, 134, 78);
glVertex2f(.74f,.00f);
glVertex2f(.74f,.06f);
glVertex2f(.70f,.06f);
glVertex2f(.70f,.00f);
glPopMatrix();
glEnd();



glBegin(GL_TRIANGLES);
glPushMatrix();
glColor3ub(118, 238, 0);



glVertex2f(0.78f,0.06f);
glVertex2f(0.72f,0.12f);
glVertex2f(0.66f,0.06f);



glVertex2f(0.78f,0.09f);
glVertex2f(0.72f,0.15f);
glVertex2f(0.66f,0.09f);



glVertex2f(0.78f,0.12f);
glVertex2f(0.72f,0.17f);
glVertex2f(0.66f,0.12f);



glVertex2f(0.78f,0.15f);
glVertex2f(0.72f,0.19f);
glVertex2f(0.66f,0.15f);



glVertex2f(0.78f,0.17f);
glVertex2f(0.72f,0.22f);
glVertex2f(0.66f,0.17f);



glPopMatrix();
glEnd();
glBegin(GL_QUADS);
glPushMatrix();
glColor3ub(139, 134, 78);
glVertex2f(.94f,.00f);
glVertex2f(.94f,.06f);
glVertex2f(.90f,.06f);
glVertex2f(.90f,.00f);
glPopMatrix();
glEnd();



glBegin(GL_TRIANGLES);
glPushMatrix();
glColor3ub(118, 238, 0);



glVertex2f(0.98f,0.06f);
glVertex2f(0.92f,0.12f);
glVertex2f(0.86f,0.06f);



glVertex2f(0.98f,0.09f);
glVertex2f(0.92f,0.15f);
glVertex2f(0.86f,0.09f);



glVertex2f(0.98f,0.12f);
glVertex2f(0.92f,0.17f);
glVertex2f(0.86f,0.12f);



glVertex2f(0.98f,0.15f);
glVertex2f(0.92f,0.19f);
glVertex2f(0.86f,0.15f);



glVertex2f(0.98f,0.17f);
glVertex2f(0.92f,0.22f);
glVertex2f(0.86f,0.17f);



glPopMatrix();
glEnd();
}
void straw()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.59f,0.4f);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.6f,0.5f);
    glVertex2f(0.59f,0.5f);
    glEnd();

    float theta;
    glBegin(GL_POLYGON);
    glColor3ub(218, 165, 32);
    for(int i=0; i<180; i++)
    {
        theta=i*PI/180;
        glVertex2f(0.6+0.1*cos(theta),0.35+0.10*sin(theta));
    }
    glEnd();
    glPopMatrix();
}

void big_tree()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19);
    glVertex2f(0.88f,0.25f);
    glVertex2f(0.88f,0.6f);
    glVertex2f(0.92f,0.6f);
    glVertex2f(0.92f,0.25f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3d(0,255,0);
    glTranslatef(0.8, 0.57, 0.0);
    glutSolidSphere(0.09, 255, 255);
    glPopMatrix();

    glPushMatrix();
    glColor3d(0,255,0);
    glTranslatef(0.85, 0.7, 0.0);
    glutSolidSphere(0.09, 255, 255);
    glPopMatrix();

    glPushMatrix();
    glColor3d(0,255,0);
    glTranslatef(0.97, 0.6, 0.0);
    glutSolidSphere(0.09, 255, 255);
    glPopMatrix();
}
void road()
{
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(112, 128, 144);
    glVertex2f(-1.00f,.00f);
    glVertex2f(-1.00f,-.30f);
    glVertex2f(1.00f,-.30f);
    glVertex2f(1.00f,.00f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(137, 104, 205);
    glVertex2f(-.12f,-.30f);
    glVertex2f(-.12f,-.40f);
    glVertex2f(-.08f,-.40f);
    glVertex2f(-.08f,-.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(137, 104, 205);
    glVertex2f(-.0f,-.30f);
    glVertex2f(-.0f,-.36f);
    glVertex2f(.04f,-.36f);
    glVertex2f(.04f,-.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(137, 104, 205);
    glVertex2f(.08f,-.30f);
    glVertex2f(.08f,-.40f);
    glVertex2f(.12f,-.40f);
    glVertex2f(.12f,-.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(137, 104, 205);
    glVertex2f(.18f,-.30f);
    glVertex2f(.18f,-.36f);
    glVertex2f(.22f,-.36f);
    glVertex2f(.22f,-.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(137, 104, 205);
    glVertex2f(.26f,-.30f);
    glVertex2f(.26f,-.40f);
    glVertex2f(.30f,-.40f);
    glVertex2f(.30f,-.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 240, 245);
    glVertex2f(-.85f,-.10f);
    glVertex2f(-.85f,-.16f);
    glVertex2f(-.65f,-.16f);
    glVertex2f(-.65f,-.10f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 240, 245);
    glVertex2f(-.45f,-.10f);
    glVertex2f(-.45f,-.16f);
    glVertex2f(-.25f,-.16f);
    glVertex2f(-.25f,-.10f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 240, 245);
    glVertex2f(-.05f,-.10f);
    glVertex2f(-.05f,-.16f);
    glVertex2f(.15f,-.16f);
    glVertex2f(.15f,-.10f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 240, 245);
    glVertex2f(.35f,-.10f);
    glVertex2f(.35f,-.16f);
    glVertex2f(.55f,-.16f);
    glVertex2f(.55f,-.10f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 240, 245);
    glVertex2f(.75f,-.10f);
    glVertex2f(.75f,-.16f);
    glVertex2f(.95f,-.16f);
    glVertex2f(.95f,-.10f);
    glPopMatrix();
    glEnd();
}

void building()
{
    //left building
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(205, 92, 92);
    glVertex2f(-.95f,.12f);
    glVertex2f(-.95f,.74f);
    glVertex2f(-.75f,.74f);
    glVertex2f(-.75f,.12f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.93f,.14f);
    glVertex2f(-.93f,.28f);
    glVertex2f(-.766f,.28f);
    glVertex2f(-.766f,.14f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 228, 225);
    glVertex2f(-.93f,.30f);
    glVertex2f(-.93f,.36f);
    glVertex2f(-.766f,.36f);
    glVertex2f(-.766f,.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.93f,.38f);
    glVertex2f(-.93f,.52f);
    glVertex2f(-.766f,.52f);
    glVertex2f(-.766f,.38f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 228, 225);
    glVertex2f(-.93f,.54f);
    glVertex2f(-.93f,.60f);
    glVertex2f(-.766f,.60f);
    glVertex2f(-.766f,.54f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.93f,.62f);
    glVertex2f(-.93f,.72f);
    glVertex2f(-.766f,.72f);
    glVertex2f(-.766f,.62f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(205, 92, 92);
    glVertex2f(-.93f,.74f);
    glVertex2f(-.93f,.84f);
    glVertex2f(-.766f,.84f);
    glVertex2f(-.766f,.74f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 228, 225);
    glVertex2f(-.916f,.74f);
    glVertex2f(-.916f,.82f);
    glVertex2f(-.776f,.82f);
    glVertex2f(-.776f,.74f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(205, 92, 92);
    glVertex2f(-.9f,.82f);
    glVertex2f(-.9f,.94f);
    glVertex2f(-.79f,.94f);
    glVertex2f(-.79f,.82f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.88f,.85f);
    glVertex2f(-.88f,.92f);
    glVertex2f(-.81f,.92f);
    glVertex2f(-.81f,.85f);
    glPopMatrix();
    glEnd();
//middle building
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(205, 92, 92);
    glVertex2f(-.72f,.12f);
    glVertex2f(-.72f,.68f);
    glVertex2f(-.46f,.68f);
    glVertex2f(-.46f,.12f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.70f,.14f);
    glVertex2f(-.70f,.30f);
    glVertex2f(-.48f,.30f);
    glVertex2f(-.48f,.14f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 228, 225);
    glVertex2f(-.70f,.32f);
    glVertex2f(-.70f,.38f);
    glVertex2f(-.48f,.38f);
    glVertex2f(-.48f,.32f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.70f,.40f);
    glVertex2f(-.70f,.56f);
    glVertex2f(-.48f,.56f);
    glVertex2f(-.48f,.40f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 228, 225);
    glVertex2f(-.70f,.58f);
    glVertex2f(-.70f,.64f);
    glVertex2f(-.48f,.64f);
    glVertex2f(-.48f,.58f);
    glPopMatrix();
    glEnd();
//right building
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(205, 92, 92);
    glVertex2f(-.42f,.12f);
    glVertex2f(-.42f,.58f);
    glVertex2f(-.19f,.58f);
    glVertex2f(-.19f,.12f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.4f,.14f);
    glVertex2f(-.4f,.25f);
    glVertex2f(-.32f,.25f);
    glVertex2f(-.32f,.14f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.4f,.30f);
    glVertex2f(-.4f,.41f);
    glVertex2f(-.32f,.41f);
    glVertex2f(-.32f,.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.4f,.46f);
    glVertex2f(-.4f,.56f);
    glVertex2f(-.32f,.56f);
    glVertex2f(-.32f,.46f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 228, 225);;
    glVertex2f(-.31f,.14f);
    glVertex2f(-.31f,.25f);
    glVertex2f(-.29f,.25f);
    glVertex2f(-.29f,.14f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 228, 225);
    glVertex2f(-.31f,.30f);
    glVertex2f(-.31f,.41f);
    glVertex2f(-.29f,.41f);
    glVertex2f(-.29f,.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(255, 228, 225);
    glVertex2f(-.31f,.46f);
    glVertex2f(-.31f,.56f);
    glVertex2f(-.29f,.56f);
    glVertex2f(-.29f,.46f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.28f,.14f);
    glVertex2f(-.28f,.25f);
    glVertex2f(-.20f,.25f);
    glVertex2f(-.20f,.14f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.28f,.30f);
    glVertex2f(-.28f,.41f);
    glVertex2f(-.20f,.41f);
    glVertex2f(-.20f,.30f);
    glPopMatrix();
    glEnd();
    glBegin(GL_QUADS);
    glPushMatrix();
    glColor3ub(71, 60, 139);
    glVertex2f(-.28f,.46f);
    glVertex2f(-.28f,.56f);
    glVertex2f(-.20f,.56f);
    glVertex2f(-.20f,.46f);
    glPopMatrix();
    glEnd();
}
void car1()
{
    float theta;
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.7f,.0f);
    glVertex2f(-.74f,-.05f);
    glVertex2f(-.55f,-.05f);
    glVertex2f(-.6f,.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(-.54f,-.04f);
    glVertex2f(-.8f,-.04f);
    glVertex2f(-.8f,-.08f);
    glVertex2f(-.5f,-.08f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(-0.58+0.03*cos(theta),-0.08+0.03*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(-0.7+0.03*cos(theta),-0.08+0.03*sin(theta));
    }
    glEnd();
    glPopMatrix();
}
void car2()
{
    float theta;
    glPushMatrix();
    glTranslatef(-position,0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(.84f,-.15f);
    glVertex2f(.8f,-.12f);
    glVertex2f(.7f,-.12f);
    glVertex2f(.65f,-.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.9f,-.15f);
    glVertex2f(.9f,-.2f);
    glVertex2f(.6f,-.2f);
    glVertex2f(.63f,-.15f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(0.68+0.03*cos(theta),-0.2+0.03*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    for(int i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(0.82+0.03*cos(theta),-0.2+0.03*sin(theta));
    }
    glEnd();
    glPopMatrix();
}
void ship()
{
    glPushMatrix();
    glTranslatef(ship_position, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(47, 79, 79);
    glVertex2f(-.40f,-.70f);
    glVertex2f(-.40f,-.78f);
    glVertex2f(.08f,-.78f);
    glVertex2f(.08f,-.70f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(47, 79, 79);
    glVertex2f(0.08f,-0.7f);
    glVertex2f(0.08f,-0.78f);
    glVertex2f(0.18f,-0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105, 105, 105);
    glVertex2f(-.35f,-.70f);
    glVertex2f(.08f,-.70f);
    glVertex2f(.02f,-.65f);
    glVertex2f(-.35f,-.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105, 105, 105);
    glVertex2f(-.30f,-.65f);
    glVertex2f(.00f,-.65f);
    glVertex2f(-.05f,-.60f);
    glVertex2f(-.30f,-.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105, 105, 105);
    glVertex2f(-.25f,-.60f);
    glVertex2f(-.06f,-.60f);
    glVertex2f(-.10f,-.55f);
    glVertex2f(-.25f,-.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 215, 00);
    glVertex2f(-.32f,-.69f);
    glVertex2f(-.32f,-.66f);
    glVertex2f(-.23f,-.66f);
    glVertex2f(-.23f,-.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 215, 00);
    glVertex2f(-.18f,-.69f);
    glVertex2f(-.18f,-.66f);
    glVertex2f(-.09f,-.66f);
    glVertex2f(-.09f,-.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 215, 00);
    glVertex2f(-.04f,-.69f);
    glVertex2f(-.04f,-.66f);
    glVertex2f(.02f,-.66f);
    glVertex2f(.02f,-.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 215, 00);
    glVertex2f(-.13f,-.64f);
    glVertex2f(-.13f,-.61f);
    glVertex2f(-.04f,-.61f);
    glVertex2f(-.04f,-.64f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 215, 00);
    glVertex2f(-.27f,-.64f);
    glVertex2f(-.27f,-.61f);
    glVertex2f(-.18f,-.61f);
    glVertex2f(-.18f,-.64f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 215, 00);
    glVertex2f(-.20f,-.59f);
    glVertex2f(-.20f,-.56f);
    glVertex2f(-.11f,-.56f);
    glVertex2f(-.11f,-.59f);
    glEnd();
    glPopMatrix();
}

void boat()
{
    glBegin(GL_POLYGON);
    glColor3ub(59, 59, 59);
    glVertex2f(.1f,.4f);
    glVertex2f(.15f,.35f);
    glVertex2f(.25f,.35f);
    glVertex2f(.30,.40f);
    glVertex2f(.35,.40f);
    glEnd();
}

void rain()
{
    glPushMatrix();
    glTranslated(0.0f, rain_position, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, 0.9f);
    glVertex2f(0.32f, 0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.28f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.52f, 0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f, -0.3f);
    glVertex2f(-0.78f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.08f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.5f, -0.4f);
    glVertex2f(0.52f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, -0.8f);
    glVertex2f(0.32f, -0.9f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.18f, 0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.82f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.72f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.78f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.02, -0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.82f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.02f, -0.9f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(-0.48f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.72f, -0.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.92f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.9f, 1.0f);
    glVertex2f(0.92f, 0.9f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.95f, 0.8f);
    glVertex2f(0.97f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.75f, 0.9f);
    glVertex2f(0.77f, 0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-0.98f, 0.9f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.9f, 0.8f);
    glVertex2f(-0.88f, 0.7f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.75f, 0.1f);
    glVertex2f(-0.73f, 0.0f);
    glEnd();
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(0.95f, -0.8f);
    glVertex2f(0.97f, -0.9f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.92f, -0.6f);
    glVertex2f(0.94f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.88f, -0.4f);
    glVertex2f(0.9f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.02f, 0.1f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(-0.98f, -0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.42f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.98f, -1.0f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    glFlush();
}
void birds()
{
    glPushMatrix();
    glTranslatef(bird_position, 0.0f, 0.0f);
    glBegin(GL_LINES);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.07284250254679, 0.92750689896949);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glVertex2f(-0.02162916302197, 0.93457080786947);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.06577859364681, 0.87276160499469);
    glVertex2f(-0.03399100359693, 0.8427399921698);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.03399100359693, 0.8427399921698);
    glVertex2f(-0.00750134522202, 0.86922965054471);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.00839244980292, 0.91691103561953);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glVertex2f(0.05254188042776, 0.91514505839454);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.07284250254679, 0.92750689896949);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glVertex2f(-0.02162916302197, 0.93457080786947);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.00839244980292, 0.91691103561953);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glVertex2f(0.05254188042776, 0.91514505839454);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.07284250254679, 0.92750689896949);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glVertex2f(-0.02162916302197, 0.93457080786947);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.06577859364681, 0.87276160499469);
    glVertex2f(-0.03399100359693, 0.8427399921698);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.03399100359693, 0.8427399921698);
    glVertex2f(-0.00750134522202, 0.86922965054471);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.00839244980292, 0.91691103561953);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glVertex2f(0.05254188042776, 0.91514505839454);
    glEnd();
    glPopMatrix();
}

