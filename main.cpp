#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>


//Plane moving variables
float move_plane = 0.0f;  //plane
float move_ship_left = 0.0f; //boat
float move_ship_right=0.0f;


//car moving variables-------
float move_car_right = 0.0f;
float move_car_left = 0.0f;

//-----------------------------
//cloud moving variables-------

//cloud-1--------
float move_cloud_left_1= -0.84f;
float move_cloud_left_2= -0.81f;
float move_cloud_left_3= -0.78f;
float move_cloud_left_4= -0.75f;
float move_cloud_left_5= -0.7f;
float move_cloud_left_6= -0.56f;
float move_cloud_left_7= -0.59f;
float move_cloud_left_8= -0.62f;
float move_cloud_left_9= -0.65f;
float move_cloud_left_10=-0.8f;
float move_cloud_left_11= -0.72f;
float move_cloud_left_12= -0.64f;
float move_cloud_left_13= -0.78f;

//cloud-2--------
float move_cloud_right_1= 0.44f;
float move_cloud_right_2= 0.41f;
float move_cloud_right_3= 0.38f;
float move_cloud_right_4= 0.35f;
float move_cloud_right_5= 0.3f;
float move_cloud_right_6= 0.16f;
float move_cloud_right_7= 0.19f;
float move_cloud_right_8= 0.22f;
float move_cloud_right_9= 0.25f;
float move_cloud_right_10=0.4f;
float move_cloud_right_11= 0.32f;
float move_cloud_right_12= 0.24f;
float move_cloud_right_13= 0.32f;

void dis();
void display();

void sky() //801
{
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(179, 217, 255);
glVertex2f(1.0f,1.0f);
glVertex2f(1.0f,0.16f);
glVertex2f(-1.0f,0.16f);
glVertex2f(-1.0f,1.0f);
glPopMatrix();
glEnd();
}


void sun() //802
{
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.62f,0.87f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 57, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
}


void cloud() //803
{

//cloud-1------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_1, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = 1.7*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_2, 0.82f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_3, 0.84f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_4, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
}

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_5, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//-right-side-------------------------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_6, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = 1.7*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_7, 0.82f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_8, 0.84f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_9, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--lower-part------------------
//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_10, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.035;
float x = 1.5*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//------------
//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_11, 0.79f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.035;
float x = 1.5*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
//----------------
//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_12, 0.805f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.035;
float x = 1.5*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_left_13, 0.82f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.035;
float x = 1.5*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//cloud-2------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_1, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = 1.7*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_2, 0.82f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_3, 0.84f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_4, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
}

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_5, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//-right-side-------------------------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_6, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = 1.7*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_7, 0.82f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_8, 0.84f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_9, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//--lower-part------------------
//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_10, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.035;
float x = 1.5*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//------------
//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_11, 0.79f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.035;
float x = 1.5*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
//----------------
//--------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_12, 0.805f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.035;
float x = 1.5*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud_right_13, 0.82f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.035;
float x = 1.5*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
}




//-cloud-1---------------
//205
void update_cloud_left_1(int value)
 {


move_cloud_left_1+=0.02f;
if(move_cloud_left_1 > 1.3)
{
move_cloud_left_1 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_1, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_2(int value) {


move_cloud_left_2+=0.02f;
if(move_cloud_left_2 > 1.3)
{
move_cloud_left_2 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_2, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_3(int value) {


move_cloud_left_3+=0.02f;
if(move_cloud_left_3 > 1.3)
{
move_cloud_left_3 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_3, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_4(int value) {


move_cloud_left_4+=0.02f;
if(move_cloud_left_4 > 1.3)
{
move_cloud_left_4 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_4, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_5(int value) {


move_cloud_left_5+=0.02f;
if(move_cloud_left_5 > 1.3)
{
move_cloud_left_5 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_5, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_6(int value) {


move_cloud_left_6+=0.02f;
if(move_cloud_left_6 > 1.3)
{
move_cloud_left_6 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_6, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_7(int value) {


move_cloud_left_7+=0.02f;
if(move_cloud_left_7 > 1.3)
{
move_cloud_left_7 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_7, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_8(int value) {


move_cloud_left_8+=0.02f;
if(move_cloud_left_8 > 1.3)
{
move_cloud_left_8 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_8, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_9(int value) {


move_cloud_left_9+=0.02f;
if(move_cloud_left_9 > 1.3)
{
move_cloud_left_9 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_9, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_10(int value) {


move_cloud_left_10+=0.02f;
if(move_cloud_left_10 > 1.3)
{
move_cloud_left_10 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_10, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_11(int value) {


move_cloud_left_11+=0.02f;
if(move_cloud_left_11 > 1.3)
{
move_cloud_left_11 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_11, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_12(int value) {


move_cloud_left_12+=0.02f;
if(move_cloud_left_12 > 1.3)
{
move_cloud_left_12 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_12, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_left_13(int value) {


move_cloud_left_13+=0.02f;
if(move_cloud_left_13 > 1.3)
{
move_cloud_left_13 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_left_13, 0); //Notify GLUT to call update again in 25 milliseconds
}


//-cloud-2---------

void update_cloud_right_1(int value) {


move_cloud_right_1+=0.02f;
if(move_cloud_right_1 > 1.3)
{
move_cloud_right_1 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_1, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_2(int value) {


move_cloud_right_2+=0.02f;
if(move_cloud_right_2 > 1.3)
{
move_cloud_right_2 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_2, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_3(int value) {


move_cloud_right_3+=0.02f;
if(move_cloud_right_3 > 1.3)
{
move_cloud_right_3 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_3, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_4(int value) {


move_cloud_right_4+=0.02f;
if(move_cloud_right_4 > 1.3)
{
move_cloud_right_4 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_4, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_5(int value) {


move_cloud_right_5+=0.02f;
if(move_cloud_right_5 > 1.3)
{
move_cloud_right_5 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_5, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_6(int value) {


move_cloud_right_6+=0.02f;
if(move_cloud_right_6 > 1.3)
{
move_cloud_right_6 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_6, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_7(int value) {


move_cloud_right_7+=0.02f;
if(move_cloud_right_7 > 1.3)
{
move_cloud_right_7 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_7, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_8(int value) {


move_cloud_right_8+=0.02f;
if(move_cloud_right_8 > 1.3)
{
move_cloud_right_8 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_8, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_9(int value) {


move_cloud_right_9+=0.02f;
if(move_cloud_right_9 > 1.3)
{
move_cloud_right_9 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_9, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_10(int value) {


move_cloud_right_10+=0.02f;
if(move_cloud_right_10 > 1.3)
{
move_cloud_right_10 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_10, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_11(int value) {


move_cloud_right_11+=0.02f;
if(move_cloud_right_11 > 1.3)
{
move_cloud_right_11 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_11, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_12(int value) {


move_cloud_right_12+=0.02f;
if(move_cloud_right_12 > 1.3)
{
move_cloud_right_12 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_12, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update_cloud_right_13(int value) {


move_cloud_right_13+=0.02f;
if(move_cloud_right_13 > 1.3)
{
move_cloud_right_13 = -1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(400, update_cloud_right_13, 0); //Notify GLUT to call update again in 25 milliseconds
}




void lalbaghFort() //804
{
//Central---gombuj----




//Central---gombuj-top-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.898f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.01;
float x = 1.4*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Central---gombuj-top-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.93f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.01;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Central---gombuj-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.75f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
//(0, 51, 38)
//(0, 153, 115)
//(26, 255, 198)
glColor3ub(0, 153, 115);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.12;
float x = 1.2*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Central---gombuj--top-triangle-------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 153, 115);
glVertex2f(0.0f,0.9f);
glVertex2f(-0.1,0.835f);
glVertex2f(0.1f,0.835f);

glPopMatrix();
glEnd();


//Central---gombuj--top-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,0.898f);
glVertex2f(0.0,0.96f);

glPopMatrix();
glEnd();
//-------------------------------------

//Central---gombuj-top-pillar-left---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 163, 102);
glVertex2f(-0.145f,0.68f);
glVertex2f(-0.05,0.68f);
glVertex2f(-0.05f,0.75f);
glVertex2f(-0.145f,0.75f);
glPopMatrix();
glEnd();

//Central---gombuj-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 179, 128);
glVertex2f(0.05f,0.68f);
glVertex2f(-0.05,0.68f);
glVertex2f(-0.05f,0.75f);
glVertex2f(0.05f,0.75f);
glPopMatrix();
glEnd();

//Central---gombuj-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 163, 102);
//glColor3ub(255, 148, 77);
glVertex2f(0.145f,0.68f);
glVertex2f(0.05,0.68f);
glVertex2f(0.05f,0.75f);
glVertex2f(0.145f,0.75f);
glPopMatrix();
glEnd();


//Central---gombuj-pillar-upper-line--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(179, 71, 0);
glVertex2f(-0.15f,0.725f);
glVertex2f(0.15,0.725f);

glPopMatrix();
glEnd();

////---------------------------------
//left-single-gombuj----------------
//left-single-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f, 0.735f);
glVertex2f(-0.53f, 0.77f);

glPopMatrix();
glEnd();


//left-single-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.53f, 0.735f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0065;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-single-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.53f, 0.755f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0065;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-single-gombuj-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.53f, 0.65f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 194, 153);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = 1.2*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//left-single-gombuj-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.5f,0.58f);
glVertex2f(-0.46,0.58f);
glVertex2f(-0.46f,0.65f);
glVertex2f(-0.5f,0.65f);
glPopMatrix();
glPopMatrix();
glEnd();

//left-single-gombuj-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 179);
glVertex2f(-0.56f,0.58f);
glVertex2f(-0.5,0.58f);
glVertex2f(-0.5f,0.65f);
glVertex2f(-0.56f,0.65f);
glPopMatrix();
glEnd();

//left-single-gombuj-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.6f,0.58f);
glVertex2f(-0.56,0.58f);
glVertex2f(-0.56f,0.65f);
glVertex2f(-0.6f,0.65f);
glPopMatrix();
glEnd();


//left-single-gombuj-upper-last-x-axis--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(179, 71, 0);
glVertex2f(-0.605f,0.62f);
glVertex2f(-0.455,0.62f);
glPopMatrix();
glPopMatrix();
glEnd();


///////----------------------

//Right-single-gombuj--------------------------

//Right-single-gombuj----------------
//Right-single-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.53f, 0.735f);
glVertex2f(0.53f, 0.77f);

glPopMatrix();
glEnd();


//Right-single-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.53f, 0.735f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0065;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-single-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.53f, 0.755f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0065;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-single-gombuj-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.53f, 0.65f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 194, 153);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = 1.2*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//Right-single-gombuj-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.5f,0.58f);
glVertex2f(0.46,0.58f);
glVertex2f(0.46f,0.65f);
glVertex2f(0.5f,0.65f);
glPopMatrix();
glPopMatrix();
glEnd();

//Right-single-gombuj-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 179);
glVertex2f(0.56f,0.58f);
glVertex2f(0.5,0.58f);
glVertex2f(0.5f,0.65f);
glVertex2f(0.56f,0.65f);
glPopMatrix();
glEnd();

//Right-single-gombuj-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.6f,0.58f);
glVertex2f(0.56,0.58f);
glVertex2f(0.56f,0.65f);
glVertex2f(0.6f,0.65f);
glPopMatrix();
glEnd();


//Right-single-gombuj-upper-last-x-axis--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(179, 71, 0);
glVertex2f(0.605f,0.62f);
glVertex2f(0.455,0.62f);
glPopMatrix();
glPopMatrix();
glEnd();

//Body--------------------------
//glColor3ub(255, 194, 153);
//glColor3ub(255, 204, 179);
//glColor3ub(255, 170, 128);

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 179);

glVertex2f(-0.4f,0.58f);
glVertex2f(-0.71f,0.58f);
glVertex2f(-0.71f,0.2f);
glVertex2f(0.71f,0.2f);
glVertex2f(0.71f,0.58f);
glVertex2f(0.4f,0.5f);
glVertex2f(0.4f,0.68f);
glVertex2f(-0.4f,0.68f);

glPopMatrix();
glEnd();



//88888888888888888
//Left---Body---

//left--Body-design-left-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.68f,0.3f);
glVertex2f(-0.62,0.3f);
glVertex2f(-0.62f,0.38f);
glVertex2f(-0.68f,0.38f);
glPopMatrix();
glEnd();

//left--Body-design-left-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.675f,0.305f);
glVertex2f(-0.625,0.305f);
glVertex2f(-0.625f,0.35f);
glVertex2f(-0.675f,0.35f);
glPopMatrix();
glEnd();

//left--Body-design-left-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.65f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//left--Body-design-left-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.68f,0.4f);
glVertex2f(-0.62,0.4f);
glVertex2f(-0.62f,0.48f);
glVertex2f(-0.68f,0.48f);
glPopMatrix();
glEnd();


//left--Body-design-left-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.675f,0.405f);
glVertex2f(-0.625,0.405f);
glVertex2f(-0.625f,0.45f);
glVertex2f(-0.675f,0.45f);
glPopMatrix();
glEnd();

//left--Body-design-left-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.65f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//left--Body-design-door-up-box---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.6f,0.4f);
glVertex2f(-0.4,0.4f);
glVertex2f(-0.4f,0.48f);
glVertex2f(-0.6f,0.48f);
glPopMatrix();
glEnd();

////88888888
//left--Body-design-door-up-box-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.595f,0.405f);
glVertex2f(-0.55,0.405f);
glVertex2f(-0.55f,0.475f);
glVertex2f(-0.595f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.545f,0.405f);
glVertex2f(-0.5,0.405f);
glVertex2f(-0.5f,0.475f);
glVertex2f(-0.545f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.495f,0.405f);
glVertex2f(-0.45,0.405f);
glVertex2f(-0.45f,0.475f);
glVertex2f(-0.495f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.445f,0.405f);
glVertex2f(-0.405,0.405f);
glVertex2f(-0.405f,0.475f);
glVertex2f(-0.445f,0.475f);
glPopMatrix();
glEnd();

//left--Body-design-right-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.38f,0.3f);
glVertex2f(-0.32,0.3f);
glVertex2f(-0.32f,0.38f);
glVertex2f(-0.38,0.38f);
glPopMatrix();
glEnd();



//left--Body-design-right-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.375f,0.305f);
glVertex2f(-0.325,0.305f);
glVertex2f(-0.325f,0.35f);
glVertex2f(-0.375f,0.35f);
glPopMatrix();
glEnd();

//left--Body-design-right-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.35f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left--Body-design-right-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.38f,0.4f);
glVertex2f(-0.32,0.4f);
glVertex2f(-0.32f,0.48f);
glVertex2f(-0.38f,0.48f);
glPopMatrix();
glEnd();

//left--Body-design-right-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.375f,0.405f);
glVertex2f(-0.325,0.405f);
glVertex2f(-0.325f,0.45f);
glVertex2f(-0.375f,0.45f);
glPopMatrix();
glEnd();

//left--Body-design-right-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.35f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
////----------------------

//=--------------

//left-body-left-gate-first-design-red------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.58f,0.38f);
glVertex2f(-0.58f,0.2f);
glVertex2f(-0.42f,0.2f);
glVertex2f(-0.42f,0.38f);

glPopMatrix();
glEnd();

//left-body-left-gate-first-design-head-white----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 230);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.57f,0.3f);
glVertex2f(-0.57f,0.2f);
glVertex2f(-0.43f,0.2f);
glVertex2f(-0.43f,0.3f);

glPopMatrix();
glEnd();

//left-body-left-gate-first-design-head-white-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 230);
glVertex2f(-0.5f,0.37f);
glVertex2f(-0.55f,0.34f);
glVertex2f(-0.45,0.34f);

glPopMatrix();
glEnd();

//left-body-left-gate-first-design-head-white-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.5f, 0.29f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 230, 230);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0675;
float x = 1.04*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//black---

//left-body-left-gate-first-design-black------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.54f,0.29f);
glVertex2f(-0.54f,0.2f);
glVertex2f(-0.46f,0.2f);
glVertex2f(-0.46f,0.29f);

glPopMatrix();
glEnd();


//left-body-left-gate-first-design-black-head-1----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.52f,0.32f);
glVertex2f(-0.52f,0.3f);
glVertex2f(-0.48f,0.3f);
glVertex2f(-0.48f,0.32f);

glPopMatrix();
glEnd();


//left-body-left-gate-first-design-head-black-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.5f, 0.32f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.02;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//glColor3ub(255, 194, 153);
//glColor3ub(255, 204, 179);
//glColor3ub(255, 170, 128);

////-------------------
//left--Body-left-pillar----------------

//left--Body-left-pillar-gombuj-black-dot-lower-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.28f, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.004;
float x = 1.6*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left--Body-left-pillar-gombuj-black-stick-upper-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.28f,0.8f);
glVertex2f(-0.28,0.82f);

glPopMatrix();
glEnd();

//left--Body-left-pillar-gombuj---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.28f, 0.76f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 194, 153);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.023;
float x = r * cos(A);
float y = 1.6*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left--Body-left-pillar----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.3f,0.2f);
glVertex2f(-0.26,0.2f);
glVertex2f(-0.26f,0.75f);
glVertex2f(-0.3f,0.75f);
glPopMatrix();
glEnd();





//left--Body-left-pillar-line-upper-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.0);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.29f,0.75f);
glVertex2f(-0.29f,0.5f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-line-upper-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.28f,0.75f);
glVertex2f(-0.28f,0.5f);
glPopMatrix();
glEnd();


//left--Body-left-pillar-line-upper-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.27f,0.75f);
glVertex2f(-0.27f,0.5f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-upper-line--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(179, 71, 0);
glVertex2f(-0.305f,0.75f);
glVertex2f(-0.255,0.75f);

glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-upper-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.49f);
glVertex2f(-0.26f,0.49f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-upper-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.48f);
glVertex2f(-0.26f,0.48f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-upper-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.47f);
glVertex2f(-0.26f,0.47f);
glPopMatrix();
glEnd();

////left--Body-left-pillar-2nd-line

//left--Body-left-pillar-line-2nd-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.29f,0.46f);
glVertex2f(-0.29f,0.4f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-line-2nd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.28f,0.46f);
glVertex2f(-0.28f,0.4f);
glPopMatrix();
glEnd();


//left--Body-left-pillar-line-2nd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.27f,0.46f);
glVertex2f(-0.27f,0.4f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-2nd-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.39f);
glVertex2f(-0.26f,0.39f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-2nd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.38f);
glVertex2f(-0.26f,0.38f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-2nd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.37f);
glVertex2f(-0.26f,0.37f);
glPopMatrix();
glEnd();


//3rd-line-----
////left--Body-left-pillar-3rd-line

//left--Body-left-pillar-line-3rd-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.29f,0.36f);
glVertex2f(-0.29f,0.3f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-line-3rd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.28f,0.36f);
glVertex2f(-0.28f,0.3f);
glPopMatrix();
glEnd();


//left--Body-left-pillar-line-3rd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.27f,0.36f);
glVertex2f(-0.27f,0.3f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-3rd-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.29f);
glVertex2f(-0.26f,0.29f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-3rd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.28f);
glVertex2f(-0.26f,0.28f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-3rd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.3f,0.27f);
glVertex2f(-0.26f,0.27f);
glPopMatrix();
glEnd();



////left--Body-left-pillar-last-line

//left--Body-left-pillar-line-last-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.29f,0.26f);
glVertex2f(-0.29f,0.2f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-line-last-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.28f,0.26f);
glVertex2f(-0.28f,0.2f);
glPopMatrix();
glEnd();


//left--Body-left-pillar-line-last-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(-0.27f,0.26f);
glVertex2f(-0.27f,0.2f);
glPopMatrix();
glEnd();
//============

//left--Body-main-gate-left-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.24f,0.3f);
glVertex2f(-0.18,0.3f);
glVertex2f(-0.18f,0.38f);
glVertex2f(-0.24,0.38f);
glPopMatrix();
glEnd();

//left--Body-main-gate-left-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.235f,0.305f);
glVertex2f(-0.185,0.305f);
glVertex2f(-0.185f,0.35f);
glVertex2f(-0.235f,0.35f);
glPopMatrix();
glEnd();

//left--Body-main-gate-left-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.21f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//left--Body-main-gate-left-box-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.18,0.4f);
glVertex2f(-0.18f,0.48f);
glVertex2f(-0.24f,0.48f);
glPopMatrix();
glEnd();

//left--Body-main-gate-left-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.235f,0.405f);
glVertex2f(-0.185,0.405f);
glVertex2f(-0.185f,0.45f);
glVertex2f(-0.235f,0.45f);
glPopMatrix();
glEnd();

//left--Body-main-gate-left-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.21f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right--Body-------------------


//Right--Body-design-Right-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.68f,0.3f);
glVertex2f(0.62,0.3f);
glVertex2f(0.62f,0.38f);
glVertex2f(0.68f,0.38f);
glPopMatrix();
glEnd();

//Right--Body-design-Right-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.675f,0.305f);
glVertex2f(0.625,0.305f);
glVertex2f(0.625f,0.35f);
glVertex2f(0.675f,0.35f);
glPopMatrix();
glEnd();

//Right--Body-design-Right-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.65f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//Right--Body-design-Right-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.68f,0.4f);
glVertex2f(0.62,0.4f);
glVertex2f(0.62f,0.48f);
glVertex2f(0.68f,0.48f);
glPopMatrix();
glEnd();


//Right--Body-design-Right-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.675f,0.405f);
glVertex2f(0.625,0.405f);
glVertex2f(0.625f,0.45f);
glVertex2f(0.675f,0.45f);
glPopMatrix();
glEnd();

//Right--Body-design-Right-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.65f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//Right--Body-design-door-up-box---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.6f,0.4f);
glVertex2f(0.4,0.4f);
glVertex2f(0.4f,0.48f);
glVertex2f(0.6f,0.48f);
glPopMatrix();
glEnd();

////88888888
//Right--Body-design-door-up-box-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.595f,0.405f);
glVertex2f(0.55,0.405f);
glVertex2f(0.55f,0.475f);
glVertex2f(0.595f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.545f,0.405f);
glVertex2f(0.5,0.405f);
glVertex2f(0.5f,0.475f);
glVertex2f(0.545f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.495f,0.405f);
glVertex2f(0.45,0.405f);
glVertex2f(0.45f,0.475f);
glVertex2f(0.495f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.445f,0.405f);
glVertex2f(0.405,0.405f);
glVertex2f(0.405f,0.475f);
glVertex2f(0.445f,0.475f);
glPopMatrix();
glEnd();

//Right--Body-design-left-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.38f,0.3f);
glVertex2f(0.32,0.3f);
glVertex2f(0.32f,0.38f);
glVertex2f(0.38,0.38f);
glPopMatrix();
glEnd();



//Right--Body-design-left-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.375f,0.305f);
glVertex2f(0.325,0.305f);
glVertex2f(0.325f,0.35f);
glVertex2f(0.375f,0.35f);
glPopMatrix();
glEnd();

//Right--Body-design-left-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.35f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//888888888***********
//Right--Body-design-left-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.38f,0.4f);
glVertex2f(0.32,0.4f);
glVertex2f(0.32f,0.48f);
glVertex2f(0.38f,0.48f);
glPopMatrix();
glEnd();

//Right--Body-design-left-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.375f,0.405f);
glVertex2f(0.325,0.405f);
glVertex2f(0.325f,0.45f);
glVertex2f(0.375f,0.45f);
glPopMatrix();
glEnd();

//Right--Body-design-left-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.35f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
////----------------------

//=--------------

//Right-body-Right-gate-first-design-red------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.58f,0.38f);
glVertex2f(0.58f,0.2f);
glVertex2f(0.42f,0.2f);
glVertex2f(0.42f,0.38f);

glPopMatrix();
glEnd();

//Right-body-Right-gate-first-design-head-white----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 230);
//glVertex2f(0.0f,0.51f);
glVertex2f(0.57f,0.3f);
glVertex2f(0.57f,0.2f);
glVertex2f(0.43f,0.2f);
glVertex2f(0.43f,0.3f);

glPopMatrix();
glEnd();

//Right-body-Right-gate-first-design-head-white-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 230);
glVertex2f(0.5f,0.37f);
glVertex2f(0.55f,0.34f);
glVertex2f(0.45,0.34f);

glPopMatrix();
glEnd();

//Right-body-right-gate-first-design-head-white-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.5f, 0.29f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 230, 230);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0675;
float x = 1.04*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//black---

//Right-body-Right-gate-first-design-black------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(0.54f,0.29f);
glVertex2f(0.54f,0.2f);
glVertex2f(0.46f,0.2f);
glVertex2f(0.46f,0.29f);

glPopMatrix();
glEnd();


//Right-body-Right-gate-first-design-black-head-1----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(0.52f,0.32f);
glVertex2f(0.52f,0.3f);
glVertex2f(0.48f,0.3f);
glVertex2f(0.48f,0.32f);

glPopMatrix();
glEnd();


//Right-body-Right-gate-first-design-head-black-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.5f, 0.32f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.02;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//glColor3ub(255, 194, 153);
//glColor3ub(255, 204, 179);
//glColor3ub(255, 170, 128);

////-------------------

//Right--Body-Right-pillar----------------
//Right--Body-Right-pillar-gombuj-black-dot-lower-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.28f, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.004;
float x = 1.6*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-gombuj-black-stick-upper-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.28f,0.8f);
glVertex2f(0.28,0.82f);

glPopMatrix();
glEnd();

//Right--Body-Right-pillar-gombuj---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.28f, 0.76f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 194, 153);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.023;
float x = r * cos(A);
float y = 1.6*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right--Body-Right-pillar----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.3f,0.2f);
glVertex2f(0.26,0.2f);
glVertex2f(0.26f,0.75f);
glVertex2f(0.3f,0.75f);
glPopMatrix();
glEnd();





//Right--Body-Right-pillar-line-upper-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.0);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.29f,0.75f);
glVertex2f(0.29f,0.5f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-line-upper-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.28f,0.75f);
glVertex2f(0.28f,0.5f);
glPopMatrix();
glEnd();


//Right--Body-Right-pillar-line-upper-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.27f,0.75f);
glVertex2f(0.27f,0.5f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-upper-line--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(179, 71, 0);
glVertex2f(0.305f,0.75f);
glVertex2f(0.255,0.75f);

glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-upper-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.49f);
glVertex2f(0.26f,0.49f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-upper-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.48f);
glVertex2f(0.26f,0.48f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-upper-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.47f);
glVertex2f(0.26f,0.47f);
glPopMatrix();
glEnd();

////Right--Body-Right-pillar-2nd-line

//Right--Body-Right-pillar-line-2nd-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.29f,0.46f);
glVertex2f(0.29f,0.4f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-line-2nd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.28f,0.46f);
glVertex2f(0.28f,0.4f);
glPopMatrix();
glEnd();


//Right--Body-Right-pillar-line-2nd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.27f,0.46f);
glVertex2f(0.27f,0.4f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-2nd-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.39f);
glVertex2f(0.26f,0.39f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-2nd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.38f);
glVertex2f(0.26f,0.38f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-2nd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.37f);
glVertex2f(0.26f,0.37f);
glPopMatrix();
glEnd();


//3rd-line-----
////Right--Body-Right-pillar-3rd-line

//Right--Body-Right-pillar-line-3rd-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.29f,0.36f);
glVertex2f(0.29f,0.3f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-line-3rd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.28f,0.36f);
glVertex2f(0.28f,0.3f);
glPopMatrix();
glEnd();


//Right--Body-Right-pillar-line-3rd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.27f,0.36f);
glVertex2f(0.27f,0.3f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-3rd-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.29f);
glVertex2f(0.26f,0.29f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-3rd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.28f);
glVertex2f(0.26f,0.28f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-3rd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.3f,0.27f);
glVertex2f(0.26f,0.27f);
glPopMatrix();
glEnd();



////left--Body-Right-pillar-last-line

//Right--Body-left-pillar-line-last-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.29f,0.26f);
glVertex2f(0.29f,0.2f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-line-last-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.28f,0.26f);
glVertex2f(0.28f,0.2f);
glPopMatrix();
glEnd();


//Right--Body-Right-pillar-line-last-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(255, 204, 179);
glVertex2f(0.27f,0.26f);
glVertex2f(0.27f,0.2f);
glPopMatrix();
glEnd();
//============

//Right--Body-main-gate-left-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.24f,0.3f);
glVertex2f(0.18,0.3f);
glVertex2f(0.18f,0.38f);
glVertex2f(0.24,0.38f);
glPopMatrix();
glEnd();

//Right--Body-main-gate-left-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.235f,0.305f);
glVertex2f(0.185,0.305f);
glVertex2f(0.185f,0.35f);
glVertex2f(0.235f,0.35f);
glPopMatrix();
glEnd();

//Right--Body-main-gate-left-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.21f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//Right--Body-main-gate-left-box-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.24f,0.4f);
glVertex2f(0.18,0.4f);
glVertex2f(0.18f,0.48f);
glVertex2f(0.24f,0.48f);
glPopMatrix();
glEnd();

//Right--Body-main-gate-left-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.235f,0.405f);
glVertex2f(0.185,0.405f);
glVertex2f(0.185f,0.45f);
glVertex2f(0.235f,0.45f);
glPopMatrix();
glEnd();

//Right--Body-main-gate-left-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.21f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 170, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//Main-gate--Body-main-gate-side-bar--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);

glVertex2f(-0.12,0.54f);
glVertex2f(0.12,0.54f);
glVertex2f(0.16f,0.58f);
glVertex2f(-0.16f,0.58f);
glVertex2f(-0.16f,0.3f);
glVertex2f(-0.12,0.3f);

glPopMatrix();
glEnd();


//Main-gate--Body-main-gate-side-bar--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.12,0.54f);
glVertex2f(0.12,0.3f);
glVertex2f(0.16f,0.3f);
glVertex2f(0.16f,0.58f);

glPopMatrix();
glEnd();



//Main-gate-first-design-red------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.1,0.2f);
glVertex2f(0.1,0.2f);
glVertex2f(0.1f,0.52f);
glVertex2f(-0.1f,0.52f);

glPopMatrix();
glEnd();

//Main-gate-first-design--white-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 230);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.09f,0.4f);
glVertex2f(-0.09,0.2f);
glVertex2f(0.09,0.2f);
glVertex2f(0.09f,0.4f);

glPopMatrix();
glEnd();

//Main-gate-first-design-head-white-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 230);
glVertex2f(0.0f,0.51f);
glVertex2f(-0.06f,0.47f);
glVertex2f(0.06,0.47f);



glPopMatrix();
glEnd();
//Main-gate-first-design-head-white-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.4f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 230, 230);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.09;
float x = 1.01*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//black---

//Main-gate-first-design-black------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.06f,0.35f);
glVertex2f(-0.06,0.2f);
glVertex2f(0.06,0.2f);
glVertex2f(0.06f,0.35f);

glPopMatrix();
glEnd();

//Main-gate-first-design-head-black-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,0.41f);
glVertex2f(-0.047f,0.38f);
glVertex2f(0.047,0.38f);

glPopMatrix();
glEnd();

//Main-gate-first-design-head-black-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.06;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//----------------
//-Body--Upper--line---------------

//body-upper--line-left-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(153, 61, 0);
glVertex2f(-0.71f,0.505f);
glVertex2f(-0.335,0.505f);
glPopMatrix();
glEnd();


//body-upper--line-left-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(153, 61, 0);
glVertex2f(-0.335f,0.61f);
glVertex2f(-0.335,0.50f);
glPopMatrix();
glEnd();


//body-upper--line-middle--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(153, 61, 0);
glVertex2f(-0.335f,0.605f);
glVertex2f(0.335,0.605f);
glPopMatrix();
glEnd();

//body-upper--line-right-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(153, 61, 0);
glVertex2f(0.71f,0.505f);
glVertex2f(0.335,0.505f);
glPopMatrix();
glEnd();


//body-upper--line-right-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(153, 61, 0);
glVertex2f(0.335f,0.61f);
glVertex2f(0.335,0.50f);
glPopMatrix();
glEnd();



//right-pillar---------------
//Right-pillar

//Right-pillar-1-top-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.8f,0.86f);
glVertex2f(0.8,0.91f);

glPopMatrix();
glEnd();


//Right-pillar-1-top-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8f, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.008;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-pillar-1-top-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8f, 0.89f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.008;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-pillar-1-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8f, 0.75f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 194, 153);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.09;
float x = r * cos(A);
float y = 1.2*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-pillar-1-part-3----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.9f,0.2f);
glVertex2f(0.84,0.2f);
glVertex2f(0.84f,0.5f);
glVertex2f(0.9f,0.5f);
glPopMatrix();
glEnd();

//Right-pillar-1-part-3-upper----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.89f,0.5f);
glVertex2f(0.84,0.5f);
glVertex2f(0.84f,0.7f);
glVertex2f(0.89f,0.7f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-2-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 179);
glVertex2f(0.84f,0.2f);
glVertex2f(0.76,0.2f);
glVertex2f(0.76f,0.7f);
glVertex2f(0.84f,0.7f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-1-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.7f,0.2f);
glVertex2f(0.76,0.2f);
glVertex2f(0.76f,0.5f);
glVertex2f(0.7f,0.5f);
glPopMatrix();
glEnd();


//Right-pillar--1--part-1-upper----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.71f,0.5f);
glVertex2f(0.76,0.5f);
glVertex2f(0.76f,0.7f);
glVertex2f(0.71f,0.7f);
glPopMatrix();
glEnd();





//Right-pillar--1--part-3-design-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.89f,0.4f);
glVertex2f(0.85,0.4f);
glVertex2f(0.85f,0.48f);
glVertex2f(0.89f,0.48f);
glPopMatrix();
glEnd();


////Right-pillar--1--part-3-design-box-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.89f,0.3f);
glVertex2f(0.85,0.3f);
glVertex2f(0.85f,0.38f);
glVertex2f(0.89f,0.38f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-2-design-box-1----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.83f,0.3f);
glVertex2f(0.77,0.3f);
glVertex2f(0.77f,0.38f);
glVertex2f(0.83f,0.38f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-2-design-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.83f,0.4f);
glVertex2f(0.77,0.4f);
glVertex2f(0.77f,0.48f);
glVertex2f(0.83f,0.48f);
glPopMatrix();
glEnd();





//Right-pillar--1--part-1-design-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.71f,0.3f);
glVertex2f(0.75,0.3f);
glVertex2f(0.75f,0.38f);
glVertex2f(0.71f,0.38f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-1-design-box-1----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.71f,0.4f);
glVertex2f(0.75,0.4f);
glVertex2f(0.75f,0.48f);
glVertex2f(0.71f,0.48f);
glPopMatrix();
glEnd();


//Right-piller--line-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(153, 61, 0);
glVertex2f(0.89f,0.51f);
glVertex2f(0.9,0.5f);
glVertex2f(0.7f,0.5f);
glVertex2f(0.71,0.51f);
glPopMatrix();
glEnd();



//Right-pillar--1--part-3-design-box-3-upper-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.5);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);

glVertex2f(0.88f,0.54f);
glVertex2f(0.88,0.52f);
glVertex2f(0.85f,0.52f);
glVertex2f(0.85f,0.54f);


glPopMatrix();
glEnd();

//Right-pillar--1--part-2-design-box-2-upper---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.83f,0.52f);
glVertex2f(0.77,0.52f);
glVertex2f(0.77f,0.54f);
glVertex2f(0.83f,0.54f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-1-design-box-1-upper---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.72f,0.52f);
glVertex2f(0.75,0.52f);
glVertex2f(0.75f,0.54f);
glVertex2f(0.72f,0.54f);
glPopMatrix();
glEnd();


//Right-pillar--1--part-3-design-box-3-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.88f,0.56f);
glVertex2f(0.85,0.56f);
glVertex2f(0.85f,0.65f);
glVertex2f(0.88f,0.65f);
glPopMatrix();
glEnd();



//Right-pillar--line-upper-shelter------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(179, 71, 0);
glVertex2f(0.93f,0.7f);
glVertex2f(0.91f,0.68f);
glVertex2f(0.89,0.68f);
glVertex2f(0.89,0.69f);
glVertex2f(0.84f,0.7f);
glVertex2f(0.76f,0.7f);
glVertex2f(0.71f,0.72f);
glVertex2f(0.89f,0.72f);
//glVertex2f(-0.88f,0.65f);
glPopMatrix();
glEnd();

//Right-pillar--line-upper-shelter------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(179, 71, 0);

glVertex2f(0.67f,0.7f);
glVertex2f(0.69f,0.68f);
glVertex2f(0.71f,0.68f);
glVertex2f(0.71f,0.69f);
glVertex2f(0.76f,0.7f);
glVertex2f(0.71f,0.72f);
glPopMatrix();
glEnd();


////Right-pillar--line-upper-shelter-------------pillar--1--part-3-design-box-3-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8645f, 0.655f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 102, 26);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.015;
float x = r * cos(A);
float y = 1.5*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



////Right-pillar--line-upper-shelter-------------pillar--1--part-3-design-box-3-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(2.5);
glBegin(GL_POINTS);
glColor3ub(255, 102, 26);
glVertex2f(0.865f, 0.678f);
glPopMatrix();
glEnd();




//Right-pillar--1--part-2-design-box-2-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.83f,0.56f);
glVertex2f(0.77,0.56f);
glVertex2f(0.77f,0.65f);
glVertex2f(0.83f,0.65f);
glPopMatrix();
glEnd();

//Right-pillar--2--part-1-design-box-2-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8f, 0.65f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 102, 26);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.03;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//Right-pillar--2--part-1-design-box-2-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(3.5);
glBegin(GL_POINTS);
glColor3ub(255, 102, 26);
glVertex2f(0.8f, 0.68f);
glPopMatrix();
glEnd();


//Right-pillar--1--part-1-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(0.72f,0.56f);
glVertex2f(0.75,0.56f);
glVertex2f(0.75f,0.65f);
glVertex2f(0.72f,0.65f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-1-design-box-1-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.735f, 0.655f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 102, 26);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.015;
float x = r * cos(A);
float y = 1.5*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//Right-pillar--1--part-1-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(2.5);
glBegin(GL_POINTS);
glColor3ub(255, 102, 26);
glVertex2f(0.735f, 0.678f);
glPopMatrix();
glEnd();






//Right-pillar-1-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.89f,0.72f);
glVertex2f(0.84,0.72f);
glVertex2f(0.84f,0.75f);
glVertex2f(0.89f,0.75f);
glPopMatrix();
glEnd();

//Right-pillar-1-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 179);
glVertex2f(0.84f,0.72f);
glVertex2f(0.76,0.72f);
glVertex2f(0.76f,0.75f);
glVertex2f(0.84f,0.75f);
glPopMatrix();
glEnd();

//Right-pillar-1-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(0.76f,0.72f);
glVertex2f(0.71,0.72f);
glVertex2f(0.71f,0.75f);
glVertex2f(0.76f,0.75f);
glPopMatrix();
glEnd();


//left-pillar

//left-pillar-1-top-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.8f,0.86f);
glVertex2f(-0.8,0.91f);

glPopMatrix();
glEnd();


//left-pillar-1-top-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.8f, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.008;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-pillar-1-top-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.8f, 0.89f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.008;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-pillar-1-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.8f, 0.75f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 194, 153);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.09;
float x = r * cos(A);
float y = 1.2*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-pillar-1-part-1----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.9f,0.2f);
glVertex2f(-0.84,0.2f);
glVertex2f(-0.84f,0.5f);
glVertex2f(-0.9f,0.5f);
glPopMatrix();
glEnd();

//left-pillar-1-part-1-upper----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.89f,0.5f);
glVertex2f(-0.84,0.5f);
glVertex2f(-0.84f,0.7f);
glVertex2f(-0.89f,0.7f);
glPopMatrix();
glEnd();

//left-pillar--1--part-2-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 179);
glVertex2f(-0.84f,0.2f);
glVertex2f(-0.76,0.2f);
glVertex2f(-0.76f,0.7f);
glVertex2f(-0.84f,0.7f);
glPopMatrix();
glEnd();

//left-pillar--1--part-3-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.7f,0.2f);
glVertex2f(-0.76,0.2f);
glVertex2f(-0.76f,0.5f);
glVertex2f(-0.7f,0.5f);
glPopMatrix();
glEnd();


//left-pillar--1--part-3-upper----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.71f,0.5f);
glVertex2f(-0.76,0.5f);
glVertex2f(-0.76f,0.7f);
glVertex2f(-0.71f,0.7f);
glPopMatrix();
glEnd();



//left-pillar--1--part-1-design-box-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.89f,0.3f);
glVertex2f(-0.85,0.3f);
glVertex2f(-0.85f,0.38f);
glVertex2f(-0.89f,0.38f);
glPopMatrix();
glEnd();

//left-piller--1--part-1-design-box-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.89f,0.4f);
glVertex2f(-0.85,0.4f);
glVertex2f(-0.85f,0.48f);
glVertex2f(-0.89f,0.48f);
glPopMatrix();
glEnd();


//left-pillar--1--part-2-design-box-3----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.83f,0.3f);
glVertex2f(-0.77,0.3f);
glVertex2f(-0.77f,0.38f);
glVertex2f(-0.83f,0.38f);
glPopMatrix();
glEnd();

//left-pillar--1--part-2-design-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.83f,0.4f);
glVertex2f(-0.77,0.4f);
glVertex2f(-0.77f,0.48f);
glVertex2f(-0.83f,0.48f);
glPopMatrix();
glEnd();





//left-pillar--1--part-3-design-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.71f,0.3f);
glVertex2f(-0.75,0.3f);
glVertex2f(-0.75f,0.38f);
glVertex2f(-0.71f,0.38f);
glPopMatrix();
glEnd();

//left-pillar--1--part-3-design-box-3----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.71f,0.4f);
glVertex2f(-0.75,0.4f);
glVertex2f(-0.75f,0.48f);
glVertex2f(-0.71f,0.48f);
glPopMatrix();
glEnd();


//left-piller--line-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(153, 61, 0);
glVertex2f(-0.89f,0.51f);
glVertex2f(-0.9,0.5f);
glVertex2f(-0.7f,0.5f);
glVertex2f(-0.71,0.51f);
glPopMatrix();
glEnd();



//left-pillar--1--part-1-design-box-1-upper-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.5);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);

glVertex2f(-0.88f,0.54f);
glVertex2f(-0.88,0.52f);
glVertex2f(-0.85f,0.52f);
glVertex2f(-0.85f,0.54f);


glPopMatrix();
glEnd();

//left-pillar--1--part-2-design-box-1-upper---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.83f,0.52f);
glVertex2f(-0.77,0.52f);
glVertex2f(-0.77f,0.54f);
glVertex2f(-0.83f,0.54f);
glPopMatrix();
glEnd();

//left-pillar--1--part-3-design-box-3-upper---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.72f,0.52f);
glVertex2f(-0.75,0.52f);
glVertex2f(-0.75f,0.54f);
glVertex2f(-0.72f,0.54f);
glPopMatrix();
glEnd();


//left-pillar--1--part-1-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.88f,0.56f);
glVertex2f(-0.85,0.56f);
glVertex2f(-0.85f,0.65f);
glVertex2f(-0.88f,0.65f);
glPopMatrix();
glEnd();



//left-pillar--line-upper-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(179, 71, 0);
glVertex2f(-0.93f,0.7f);
glVertex2f(-0.91f,0.68f);
glVertex2f(-0.89,0.68f);
glVertex2f(-0.89,0.69f);
glVertex2f(-0.84f,0.7f);
glVertex2f(-0.76f,0.7f);
glVertex2f(-0.71f,0.72f);
glVertex2f(-0.89f,0.72f);
//glVertex2f(-0.88f,0.65f);
glPopMatrix();
glEnd();

//left-pillar--line-upper-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(179, 71, 0);

glVertex2f(-0.67f,0.7f);
glVertex2f(-0.69f,0.68f);
glVertex2f(-0.71f,0.68f);
glVertex2f(-0.71f,0.69f);
glVertex2f(-0.76f,0.7f);
glVertex2f(-0.71f,0.72f);
glPopMatrix();
glEnd();


//left-pillar--1--part-1-design-box-1-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.865f, 0.655f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 102, 26);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.015;
float x = r * cos(A);
float y = 1.5*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//left-pillar--1--part-1-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(2.5);
glBegin(GL_POINTS);
glColor3ub(255, 102, 26);
glVertex2f(-0.865f, 0.678f);
glPopMatrix();
glEnd();




//left-pillar--1--part-2-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.83f,0.56f);
glVertex2f(-0.77,0.56f);
glVertex2f(-0.77f,0.65f);
glVertex2f(-0.83f,0.65f);
glPopMatrix();
glEnd();

//left-pillar--2--part-1-design-box-1-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.8f, 0.65f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 102, 26);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.03;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//left-pillar--2--part-1-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(3.5);
glBegin(GL_POINTS);
glColor3ub(255, 102, 26);
glVertex2f(-0.8f, 0.68f);
glPopMatrix();
glEnd();


//left-pillar--1--part-3-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 102, 26);
glVertex2f(-0.72f,0.56f);
glVertex2f(-0.75,0.56f);
glVertex2f(-0.75f,0.65f);
glVertex2f(-0.72f,0.65f);
glPopMatrix();
glEnd();

//left-pillar--1--part-3-design-box-1-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.7355f, 0.655f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 102, 26);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.015;
float x = r * cos(A);
float y = 1.5*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//left-pillar--1--part-3-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(2.5);
glBegin(GL_POINTS);
glColor3ub(255, 102, 26);
glVertex2f(-0.735f, 0.678f);
glPopMatrix();
glEnd();






//left-pillar-1-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.89f,0.72f);
glVertex2f(-0.84,0.72f);
glVertex2f(-0.84f,0.75f);
glVertex2f(-0.89f,0.75f);
glPopMatrix();
glEnd();

//left-pillar-1-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 179);
glVertex2f(-0.84f,0.72f);
glVertex2f(-0.76,0.72f);
glVertex2f(-0.76f,0.75f);
glVertex2f(-0.84f,0.75f);
glPopMatrix();
glEnd();

//left-pillar-1-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 170, 128);
glVertex2f(-0.76f,0.72f);
glVertex2f(-0.71,0.72f);
glVertex2f(-0.71f,0.75f);
glVertex2f(-0.76f,0.75f);
glPopMatrix();
glEnd();


////------------------------------
//stair-------------
//left-pillar-line---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(179, 89, 0);
glVertex2f(-0.9f,0.205f);
glVertex2f(-0.91,0.19f);
glVertex2f(-0.69f,0.19f);
glVertex2f(-0.7f,0.205f);
glPopMatrix();
glEnd();

//right-pillar-line---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(179, 89, 0);
glVertex2f(0.9f,0.205f);
glVertex2f(0.91,0.19f);
glVertex2f(0.69f,0.19f);
glVertex2f(0.7f,0.205f);
glPopMatrix();
glEnd();


//center-line---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(179, 89, 0);
glVertex2f(-0.7f,0.195f);
glVertex2f(0.7f,0.195f);
glPopMatrix();
glEnd();

//glColor3ub(255, 163, 102);glColor3ub(255, 179, 128);
//center-line-white--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 179, 128);
glVertex2f(-0.91,0.19f);
glVertex2f(-1.0,0.16f);
glVertex2f(1.0,0.16f);
glVertex2f(0.91,0.19f);
glPopMatrix();
glEnd();


//middle-line-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_POLYGON);
glColor3ub(179, 89, 0);
glVertex2f(-0.2,0.185f);
glVertex2f(-0.21,0.175f);
glVertex2f(0.21,0.175f);
glVertex2f(0.2,0.185f);
glPopMatrix();
glEnd();


//center-line-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(179, 89, 0);
glVertex2f(-1.0,0.16f);
glVertex2f(1.0,0.16f);
glPopMatrix();
glEnd();


}


void field() //805
{
//field-line-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glBegin(GL_POLYGON);
glColor3ub(102, 255, 102);
glVertex2f(-1.0,0.16f);
glVertex2f(-1.0,-0.1f);
glVertex2f(1.0,-0.1f);
glVertex2f(1.0,0.16f);
glPopMatrix();
glEnd();
}


void footpath() //806
{

//upper------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 212, 128);


glVertex2f(-1.0,-0.11f);
glVertex2f(1.0,-0.11f);
glVertex2f(1.0f,-0.09f);
glVertex2f(-1.0f,-0.09f);


glPopMatrix();
glEnd();


   glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glLineWidth(2.0);
glBegin(GL_LINES);
glColor3ub(255, 255, 255);

glVertex2f(-1.0,-0.11f);
glVertex2f(1.0,-0.11f);

glPopMatrix();
glEnd();

//lower------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 212, 128);


glVertex2f(-1.0,-0.35f);
glVertex2f(1.0,-0.35f);
glVertex2f(1.0f,-0.375f);
glVertex2f(-1.0f,-0.375f);


glPopMatrix();
glEnd();

}



void lamppost() //807
{
     glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(101, 91, 78);

glVertex2f(0.0,-0.10f);
glVertex2f(0.0,0.1f);

glPopMatrix();
glEnd();

//left------
glBegin(GL_POLYGON);
glColor3ub(101, 91, 78);


glVertex2f(0.00,0.06f);
glVertex2f(-0.03,0.1f);
glVertex2f(-0.06,0.1f);

glPopMatrix();
glEnd();

//right------
glBegin(GL_POLYGON);
glColor3ub(101, 91, 78);


glVertex2f(0.00,0.06f);
glVertex2f(0.03,0.1f);
glVertex2f(0.06,0.1f);

glPopMatrix();
glEnd();
}


void trees() //808
{
//------------------tree1 start
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19);


glVertex2f(0.86f,0.0f);
glVertex2f(0.86f,-0.10f);
glVertex2f(0.82f,-0.10f);
glVertex2f(0.82f,0.0f);


glPopMatrix();
glEnd();
    //-------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(0, 128, 0);


glVertex2f(0.84f,0.18f);
glVertex2f(0.73f,0.02f);
glVertex2f(0.95f,0.02f);



glPopMatrix();
glEnd();
//--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(0, 128, 0);


glVertex2f(0.84f,0.10f);
glVertex2f(0.72f,-0.02f);
glVertex2f(0.96f,-0.02f);



glPopMatrix();
glEnd();
//------------------- tree1 end
//-----------------tree2 start
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19);


glVertex2f(-0.86f,0.0f);
glVertex2f(-0.86f,-0.10f);
glVertex2f(-0.82f,-0.10f);
glVertex2f(-0.82f,0.0f);


glPopMatrix();
glEnd();
//-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(0, 128, 0);


glVertex2f(-0.84f,0.18f);
glVertex2f(-0.73f,0.02f);
glVertex2f(-0.95f,0.02f);



glPopMatrix();
glEnd();
//-----------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(0, 128, 0);


glVertex2f(-0.84f,0.10f);
glVertex2f(-0.72f,-0.02f);
glVertex2f(-0.96f,-0.02f);



glPopMatrix();
glEnd();
//---------------------tree2 end
//----------------------tree3 start
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19);


glVertex2f(0.40f,0.0f);
glVertex2f(0.40f,-0.10f);
glVertex2f(0.36f,-0.10f);
glVertex2f(0.36f,0.0f);


glPopMatrix();
glEnd();
//-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(0, 128, 0);


glVertex2f(0.38f,0.18f);
glVertex2f(0.265f,0.02f);
glVertex2f(0.49f,0.02f);



glPopMatrix();
glEnd();
//-----------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(0, 128, 0);


glVertex2f(0.38f,0.10f);
glVertex2f(0.255f,-0.02f);
glVertex2f(0.50f,-0.02f);



glPopMatrix();
glEnd();
//---------------------- tree3 end
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19);


glVertex2f(-0.40f,0.0f);
glVertex2f(-0.40f,-0.10f);
glVertex2f(-0.36f,-0.10f);
glVertex2f(-0.36f,0.0f);


glPopMatrix();
glEnd();
//-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(0, 128, 0);


glVertex2f(-0.38f,0.18f);
glVertex2f(-0.265f,0.02f);
glVertex2f(-0.49f,0.02f);



glPopMatrix();
glEnd();
//-----------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(0, 128, 0);


glVertex2f(-0.38f,0.10f);
glVertex2f(-0.255f,-0.02f);
glVertex2f(-0.50f,-0.02f);



glPopMatrix();
glEnd();
}

void bench() //809
{
    //--------------1st bench
//----------------- bench upper side
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(205, 133, 63);


glVertex2f(-0.51f,-0.01f);
glVertex2f(-0.51f,-0.05f);
glVertex2f(-0.70f,-0.05f);
glVertex2f(-0.70f,-0.01f);


glPopMatrix();
glEnd();
//------------------- lower side
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19);


glVertex2f(-0.51f,-0.05f);
glVertex2f(-0.49f,-0.07f);
glVertex2f(-0.72f,-0.07f);
glVertex2f(-0.70f,-0.05f);


glPopMatrix();
glEnd();
//-------------------1st leg
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0);


glVertex2f(-0.68f,-0.07f);
glVertex2f(-0.68f,-0.10f);
glVertex2f(-0.69f,-0.10f);
glVertex2f(-0.69f,-0.07f);


glPopMatrix();
glEnd();
//---------------2nd leg
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0);


glVertex2f(-0.52f,-0.07f);
glVertex2f(-0.52f,-0.10f);
glVertex2f(-0.53f,-0.10f);
glVertex2f(-0.53f,-0.07f);


glPopMatrix();
glEnd();

//----------------------2nd bench
//----------------- bench upper side
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(205, 133, 63);


glVertex2f(0.51f,-0.01f);
glVertex2f(0.51f,-0.05f);
glVertex2f(0.70f,-0.05f);
glVertex2f(0.70f,-0.01f);


glPopMatrix();
glEnd();
//------------------- lower side
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19);


glVertex2f(0.51f,-0.05f);
glVertex2f(0.49f,-0.07f);
glVertex2f(0.72f,-0.07f);
glVertex2f(0.70f,-0.05f);


glPopMatrix();
glEnd();
//-------------------1st leg
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0);


glVertex2f(0.68f,-0.07f);
glVertex2f(0.68f,-0.10f);
glVertex2f(0.69f,-0.10f);
glVertex2f(0.69f,-0.07f);


glPopMatrix();
glEnd();
//---------------2nd leg
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0);


glVertex2f(0.52f,-0.07f);
glVertex2f(0.52f,-0.10f);
glVertex2f(0.53f,-0.10f);
glVertex2f(0.53f,-0.07f);


glPopMatrix();
glEnd();
}




void road() //810
{
  glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128,128,128);


glVertex2f(1.0f,-0.10f);
glVertex2f(1.0f,-0.35f);
glVertex2f(-1.0f,-0.35f);
glVertex2f(-1.0f,-0.10f);


glPopMatrix();
glEnd();
//road lines
 //--------------1 right side
  glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.86f,-0.21f);
glVertex2f(.86f,-0.23f);
glVertex2f(1.0f,-0.23f);
glVertex2f(1.0f,-0.21f);


glPopMatrix();
glEnd();

//------------- 2
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.66f,-0.21f);
glVertex2f(.66f,-0.23f);
glVertex2f(.82f,-0.23f);
glVertex2f(.82f,-0.21f);


glPopMatrix();
glEnd();

//-----------3
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.46f,-0.21f);
glVertex2f(.46f,-0.23f);
glVertex2f(.62f,-0.23f);
glVertex2f(.62f,-0.21f);


glPopMatrix();
glEnd();

//-------- 4
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.26f,-0.21f);
glVertex2f(.26f,-0.23f);
glVertex2f(.42f,-0.23f);
glVertex2f(.42f,-0.21f);


glPopMatrix();
glEnd();
//----------5
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.06f,-0.21f);
glVertex2f(.06f,-0.23f);
glVertex2f(.22f,-0.23f);
glVertex2f(.22f,-0.21f);


glPopMatrix();
glEnd();
//---------6
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.14f,-0.21f);
glVertex2f(-0.14f,-0.23f);
glVertex2f(.02f,-0.23f);
glVertex2f(.02f,-0.21f);


glPopMatrix();
glEnd();
//----------7
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.34f,-0.21f);
glVertex2f(-0.34f,-0.23f);
glVertex2f(-0.18f,-0.23f);
glVertex2f(-0.18f,-0.21f);


glPopMatrix();
glEnd();
//---------------8
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.35f,-0.21f);
glVertex2f(-0.35f,-0.23f);
glVertex2f(-0.30f,-0.23f);
glVertex2f(-0.30f,-0.21f);


glPopMatrix();
glEnd();
//------------8
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.56f,-0.21f);
glVertex2f(-0.56f,-0.23f);
glVertex2f(-0.39f,-0.23f);
glVertex2f(-0.39f,-0.21f);


glPopMatrix();
glEnd();
//-------------9
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.76f,-0.21f);
glVertex2f(-0.76f,-0.23f);
glVertex2f(-0.60f,-0.23f);
glVertex2f(-0.60f,-0.21f);


glPopMatrix();
glEnd();
//--------------10
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.96f,-0.21f);
glVertex2f(-0.96f,-0.23f);
glVertex2f(-0.80f,-0.23f);
glVertex2f(-0.80f,-0.21f);


glPopMatrix();
glEnd();
}


void Cars() //811
{
    //----------- red car
//------------- right side limb
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car_right, 0.0f, 0.0f);
glBegin(GL_POLYGON);
//glColor3ub(0, 92, 230);
glColor3ub(255, 0, 0);

glVertex2f(.99f,-0.29f);
glVertex2f(0.99f,-0.32f);
glVertex2f(0.79f,-0.32f);
glVertex2f(0.79f,-0.29f);
glVertex2f(0.83f,-0.28f);
glVertex2f(0.85f,-0.26f);
glVertex2f(0.95f,-0.26f);
glVertex2f(0.98f,-0.28f);

glPopMatrix();
glEnd();

//----------wheel 1
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car_right, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.01;
float x = 0.85+r * cos(A);
float y = -1.12+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();

//--------------wheel 2
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car_right, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.01;
float x = 0.95+r * cos(A);
float y = -1.12+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();

//---------- glass
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car_right, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);


glVertex2f(0.95f,-0.26f);
glVertex2f(0.98f,-0.28f);
glVertex2f(0.83f,-0.28f);
glVertex2f(0.85f,-0.26f);


glPopMatrix();
glEnd();
//------------- bluecar
//------------- right side limb
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car_left, 0.0f, 0.0f);
glBegin(GL_POLYGON);
//glColor3ub(0, 92, 230);
glColor3ub(0, 0, 255);

glVertex2f(-0.99f,-0.16f);
glVertex2f(-0.99f,-0.18f);
glVertex2f(-0.79f,-0.18f);
glVertex2f(-0.79f,-0.16f);
glVertex2f(-0.83f,-0.15f);
glVertex2f(-0.85f,-0.13f);
glVertex2f(-0.95f,-0.13f);
glVertex2f(-0.98f,-0.15f);

glPopMatrix();
glEnd();

//----------wheel 1
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car_left, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.01;
float x = -0.85+r * cos(A);
float y = -0.98+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();

//--------------wheel 2
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car_left, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.01;
float x = -0.95+r * cos(A);
float y = -0.98+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();

//---------- glass
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car_left, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);


glVertex2f(-0.95f,-0.13f);
glVertex2f(-0.98f,-0.15f);
glVertex2f(-0.83f,-0.15f);
glVertex2f(-0.85f,-0.13f);


glPopMatrix();
glEnd();
}



//202
void update_car_right(int value)
{
   move_car_right -= .02;
if(move_car_right < -1.9)
{
move_car_right = 1.0;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


 glutTimerFunc(20, update_car_right, 0);
}

void update_car_left(int value)
{
   move_car_left += .02;
if(move_car_left > 1.9)
{
move_car_left = -1.0;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


 glutTimerFunc(20, update_car_left, 0);
}




void river() //812
{
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 92, 230);


glVertex2f(1.0f,-0.35f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(-1.0f,-0.35f);


glPopMatrix();
glEnd();
}





void ship_right() //813
{


glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(0, 255, 127);


glVertex2f(.4f,-0.85f);
glVertex2f(.4f,-0.95f);
glVertex2f(.9f,-0.95f);
glVertex2f(.9f,-0.85f);


glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(0, 255, 127);


glVertex2f(.4f,-0.85f);
glVertex2f(.4f,-0.95f);
glVertex2f(.3f,-0.85f);



glPopMatrix();
glEnd();




glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(255, 165, 0);


glVertex2f(.4f,-0.85f);


glVertex2f(.9f,-0.85f);

glVertex2f(.9f,-0.8f);
glVertex2f(.4f,-0.8f);

glPopMatrix();
glEnd();


glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(255, 165, 122);


glVertex2f(.4f,-0.75f);


glVertex2f(.9f,-0.75f);

glVertex2f(.9f,-0.8f);
glVertex2f(.4f,-0.8f);

glPopMatrix();
glEnd();



glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 255);


glVertex2f(.5f,-0.8f);


glVertex2f(.5f,-0.85f);

glVertex2f(.55f,-0.85f);
glVertex2f(.55f,-0.8f);

glPopMatrix();
glEnd();



glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 255);


glVertex2f(.6f,-0.8f);


glVertex2f(.6f,-0.85f);

glVertex2f(.65f,-0.85f);
glVertex2f(.65f,-0.8f);

glPopMatrix();
glEnd();



glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 255);


glVertex2f(.7f,-0.8f);


glVertex2f(.7f,-0.85f);

glVertex2f(.75f,-0.85f);
glVertex2f(.75f,-0.8f);

glPopMatrix();
glEnd();


glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 255);


glVertex2f(.8f,-0.8f);


glVertex2f(.8f,-0.85f);

glVertex2f(.85f,-0.85f);
glVertex2f(.85f,-0.8f);

glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(255, 0,0 );


glVertex2f(.45f,-0.75f);


glVertex2f(.5f,-0.75f);

glVertex2f(.5f,-0.6f);
glVertex2f(.45f,-0.6f);

glPopMatrix();
glEnd();





glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(255, 0,0 );


glVertex2f(.55f,-0.75f);


glVertex2f(.6f,-0.75f);

glVertex2f(.6f,-0.6f);
glVertex2f(.55f,-0.6f);

glPopMatrix();
glEnd();




glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(255, 0,0 );


glVertex2f(.65f,-0.75f);


glVertex2f(.7f,-0.75f);

glVertex2f(.7f,-0.6f);
glVertex2f(.65f,-0.6f);

glPopMatrix();
glEnd ();



glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_right, 0.0f, 0.5f);
glBegin(GL_POLYGON);
glColor3ub(255, 0,0 );


glVertex2f(.75f,-0.75f);


glVertex2f(.8f,-0.75f);

glVertex2f(.8f,-0.6f);
glVertex2f(.75f,-0.6f);

glPopMatrix();
glEnd();





}



void update_ship_right(int value) //203
 {


move_ship_right-=0.02f;
if(move_ship_right <- 2.2)
{
move_ship_right = 1.0f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(40, update_ship_right, 0); //Notify GLUT to call update again in 25 milliseconds
}


void ship_left() //814
{
    glLoadIdentity();
    glPushMatrix();


//	glBegin(GL_QUADS); //compartment1 .35 ,.15
//	glColor3ub(255,255,255);
//	glVertex2f(-.35, -.1);
//	glVertex2f(-.35, -.25);
//	glVertex2f(.0, -.25);
//	glVertex2f(.0, -.1);
//	glEnd();

//	glBegin(GL_QUADS); //window
//	glColor3ub(0,0,0);
//	glVertex2f(-.25, -.125);
//	glVertex2f(-.25, -.225);
//	glVertex2f(-.1, -.225);
//	glVertex2f(-.1, -.125);
//	glEnd();

//	glBegin(GL_QUADS); //compartment2 .55,.15
//	glColor3ub(192,192,192);
//	glVertex2f(-.45, -.25);
//	glVertex2f(-.45, -.4);
//	glVertex2f(.1, -.4);
//	glVertex2f(.1, -.25);
//	glEnd();

//	glBegin(GL_QUADS); //window
//	glColor3ub(0,0,0);
//	glVertex2f(-.3875, -.275);
//	glVertex2f(-.3875, -.375);
//	glVertex2f(-.2375, -.375);
//	glVertex2f(-.2375, -.275);
//	glEnd();
//
//	glBegin(GL_QUADS); //window
//	glColor3ub(0,0,0);
//	glVertex2f(-.1125, -.275);
//	glVertex2f(-.1125, -.375);
//	glVertex2f(.0375, -.375);
//	glVertex2f(.0375, -.275);
//	glEnd();
    glTranslatef(move_ship_left, 0.0f, 0.0f);
	glBegin(GL_QUADS); //compartment3 .75,.15
	glColor3ub(255,255,255);
	glVertex2f(-.85, -.3);
	glVertex2f(-.85, -.45);
	glVertex2f(-0.1, -.45);
	glVertex2f(-0.2, -.3);
	glEnd();

	glBegin(GL_QUADS); //window1
	glColor3ub(244, 208, 63);
	glVertex2f(-.8, -.325);
	glVertex2f(-.8, -.425);
	glVertex2f(-.65, -.425);
	glVertex2f(-.65, -.325);
	glEnd();

	glBegin(GL_QUADS); //window1
	glColor3ub(244, 208, 63);
	glVertex2f(-.55, -.325);
	glVertex2f(-.55, -.425);
	glVertex2f(-.4, -.425);
	glVertex2f(-.4, -.325);
	glEnd();

	glBegin(GL_QUADS); //door
	glColor3ub(244, 208, 63);
	glVertex2f(-0.3, -.325);
	glVertex2f(-0.3, -.455);
	glVertex2f(-0.19, -.455);
	glVertex2f(-0.19, -.325);
	glEnd();

	glBegin(GL_QUADS); //pataton
	glColor3ub(128,128,128);
	glVertex2f(-.9, -.45);
	glVertex2f(-.8, -.7);
	glVertex2f(-0.2, -.7);
	glVertex2f(0.1, -.45);
	glEnd();

	glBegin(GL_QUADS); //uper blue
	glColor3ub(209, 60, 60 );
	glVertex2f(-.87, -.525);
	glVertex2f(-.85, -.575);
	glVertex2f(-0.05, -.575);
	glVertex2f(.01, -.525);
	glEnd();

//	glBegin(GL_QUADS); //uper blue
//	glColor3ub(0,0,255);
//	glVertex2f(-.55, -.675);
//	glVertex2f(-.53, -.725);
//	glVertex2f(.19, -.725);
//	glVertex2f(.25, -.675);
//	glEnd();

//	glBegin(GL_QUADS); //lower
//	glColor3ub(255,0,0);
//	glVertex2f(-.53, -.725);
//	glVertex2f(-.5, -.8);
//	glVertex2f(.1, -.8);
//	glVertex2f(.19, -.725);
//	glEnd();

	glPopMatrix();

	glLoadIdentity();



    //glFlush();
}

void update_ship_left(int value) //204
{
   move_ship_left += .02;
    if(move_ship_left > 1.9)
    {
        move_ship_left= -1.0;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(30, update_ship_left, 0);

}

void plane() //815
{
    glPushMatrix();
    glTranslatef(move_plane, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(93, 109, 126);
    glVertex3f(-1.0f, 0.8f, 0.0f);
    glVertex3f(-0.5f, 0.8f, 0.0f);
    glVertex3f(-0.366f, 0.85f, 0.0f);
    glVertex3f(-0.45f, 0.916f, 0.0f);
    glVertex3f(-0.5f, 0.96f, 0.0f);
    glVertex3f(-1.0f, 0.96f, 0.0f);
    glEnd();

    ////Plane Windows///
    glBegin(GL_POLYGON);
    glColor3ub(246, 228, 43);
    glVertex3f(-0.966f, 0.85f, 0.0f);
    glVertex3f(-0.916f, 0.85f, 0.0f);
    glVertex3f(-0.916f, 0.93f, 0.0f);
    glVertex3f(-0.966f, 0.93f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(246, 228, 43);
    glVertex3f(-0.866f, 0.85f, 0.0f);
    glVertex3f(-0.816f, 0.85f, 0.0f);
    glVertex3f(-0.816f, 0.93f, 0.0f);
    glVertex3f(-0.866f, 0.93f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(246, 228, 43);
    glVertex3f(-0.766f, 0.85f, 0.0f);
    glVertex3f(-0.716f, 0.85f, 0.0f);
    glVertex3f(-0.716f, 0.93f, 0.0f);
    glVertex3f(-0.766f, 0.93f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(246, 228, 43);
    glVertex3f(-0.666f, 0.85f, 0.0f);
    glVertex3f(-0.616f, 0.85f, 0.0f);
    glVertex3f(-0.616f, 0.93f, 0.0f);
    glVertex3f(-0.666f, 0.93f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(246, 228, 43);
    glVertex3f(-0.566f, 0.85f, 0.0f);
    glVertex3f(-0.516f, 0.85f, 0.0f);
    glVertex3f(-0.516f, 0.93f, 0.0f);
    glVertex3f(-0.566f, 0.93f, 0.0f);
    glEnd();

    ////Plane sides////
    glBegin(GL_POLYGON);
    glColor3ub(52, 73, 94);
    glVertex3f(-0.916f, 0.96f, 0.0f);
    glVertex3f(-0.83f, 0.96f, 0.0f);
    glVertex3f(-0.883f, 1.33f, 0.0f);
    glVertex3f(-0.916f, 1.33f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(52, 73, 94);
    glVertex3f(-0.66f, 0.96f, 0.0f);
    glVertex3f(-0.583f, 0.96f, 0.0f);
    glVertex3f(-0.633f, 1.33f, 0.0f);
    glVertex3f(-0.7f, 1.33f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(52, 73, 94);
    glVertex3f(-0.66f, 0.63f, 0.0f);
    glVertex3f(-0.616f, 0.63f, 0.0f);
    glVertex3f(-0.583f, 0.816f, 0.0f);
    glVertex3f(-0.68f, 0.816f, 0.0f);
    glEnd();
    glPopMatrix();
}





void update_plane(int value) //201   //Plane
{
   move_plane += .02;
    if(move_plane> 1.9)
    {
        move_plane = -1.0;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(10, update_plane, 0);

}



/*void init() {
glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}
*/

//Night--------------------------
//---------------------------------

void sky_night() //816
{



glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(89, 89, 89);
glVertex2f(1.0f,1.0f);
glVertex2f(1.0f,0.16f);
glVertex2f(-1.0f,0.16f);
glVertex2f(-1.0f,1.0f);
glPopMatrix();
glEnd();
}


void moon() //817
{
    glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.62f,0.87f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.09;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
}

void stars() //818
{
   glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = 0.85+r * cos(A);
float y = 0.90+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//----------------
   glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = 0.42+r * cos(A);
float y = 0.95+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//----------------------
   glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = -0.42+r * cos(A);
float y = 0.87+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//----------------
   glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = 0.42+r * cos(A);
float y = 0.95+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//----------------------
   glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = 0.22+r * cos(A);
float y = 0.78+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//-------------
 glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = -0.90+r * cos(A);
float y = 0.90+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//--------------
 glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = 0.95+r * cos(A);
float y = 0.50+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//---------------------
 glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = -0.16+r * cos(A);
float y = 0.95+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//-----------------
 glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = -0.95+r * cos(A);
float y = 0.50+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//------------------
 glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = 0.12+r * cos(A);
float y = 0.95+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//---------------
 glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = 0.66+r * cos(A);
float y = 0.75+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
//--------------------
 glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255,255,255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.005;
float x = 0.62+r * cos(A);
float y = 0.97+r * sin(A);
glVertex2f(x,y );
}

glPopMatrix();
glEnd();
}



void lalbaghFort_night() //819
{
//Central---gombuj----

//Central---gombuj-top-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.898f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.01;
float x = 1.4*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Central---gombuj-top-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.93f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.01;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Central---gombuj-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.75f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
//(0, 51, 38)
//(0, 153, 115)
//(26, 255, 198)
glColor3ub(0, 77, 57);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.12;
float x = 1.2*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Central---gombuj--top-triangle-------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 77, 57);
glVertex2f(0.0f,0.9f);
glVertex2f(-0.1,0.835f);
glVertex2f(0.1f,0.835f);

glPopMatrix();
glEnd();


//Central---gombuj--top-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,0.898f);
glVertex2f(0.0,0.96f);

glPopMatrix();
glEnd();
//-------------------------------------

//Central---gombuj-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(-0.145f,0.68f);
glVertex2f(-0.05,0.68f);
glVertex2f(-0.05f,0.75f);
glVertex2f(-0.145f,0.75f);
glPopMatrix();
glEnd();

//Central---gombuj-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.05f,0.68f);
glVertex2f(-0.05,0.68f);
glVertex2f(-0.05f,0.75f);
glVertex2f(0.05f,0.75f);
glPopMatrix();
glEnd();

//Central---gombuj-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();

//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
//glColor3ub(255, 148, 77);
glVertex2f(0.145f,0.68f);
glVertex2f(0.05,0.68f);
glVertex2f(0.05f,0.75f);
glVertex2f(0.145f,0.75f);
glPopMatrix();
glEnd();


//Central---gombuj-pillar-upper-line--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.15f,0.725f);
glVertex2f(0.15,0.725f);

glPopMatrix();
glEnd();

////---------------------------------
//left-single-gombuj----------------
//left-single-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f, 0.735f);
glVertex2f(-0.53f, 0.77f);

glPopMatrix();
glEnd();


//left-single-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.53f, 0.735f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0065;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-single-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.53f, 0.755f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0065;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-single-gombuj-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.53f, 0.65f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 77, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = 1.2*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//left-single-gombuj-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.5f,0.58f);
glVertex2f(-0.46,0.58f);
glVertex2f(-0.46f,0.65f);
glVertex2f(-0.5f,0.65f);
glPopMatrix();
glPopMatrix();
glEnd();

//left-single-gombuj-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 119, 51);
glVertex2f(-0.56f,0.58f);
glVertex2f(-0.5,0.58f);
glVertex2f(-0.5f,0.65f);
glVertex2f(-0.56f,0.65f);
glPopMatrix();
glEnd();

//left-single-gombuj-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.6f,0.58f);
glVertex2f(-0.56,0.58f);
glVertex2f(-0.56f,0.65f);
glVertex2f(-0.6f,0.65f);
glPopMatrix();
glEnd();


//left-single-gombuj-upper-last-x-axis--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.605f,0.62f);
glVertex2f(-0.455,0.62f);
glPopMatrix();
glPopMatrix();
glEnd();


///////----------------------

//Right-single-gombuj--------------------------

//Right-single-gombuj----------------
//Right-single-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.53f, 0.735f);
glVertex2f(0.53f, 0.77f);

glPopMatrix();
glEnd();


//Right-single-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.53f, 0.735f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0065;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-single-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.53f, 0.755f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0065;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-single-gombuj-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.53f, 0.65f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 77, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = 1.2*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//Right-single-gombuj-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.5f,0.58f);
glVertex2f(0.46,0.58f);
glVertex2f(0.46f,0.65f);
glVertex2f(0.5f,0.65f);
glPopMatrix();
glPopMatrix();
glEnd();

//Right-single-gombuj-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 119, 51);
glVertex2f(0.56f,0.58f);
glVertex2f(0.5,0.58f);
glVertex2f(0.5f,0.65f);
glVertex2f(0.56f,0.65f);
glPopMatrix();
glEnd();

//Right-single-gombuj-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.6f,0.58f);
glVertex2f(0.56,0.58f);
glVertex2f(0.56f,0.65f);
glVertex2f(0.6f,0.65f);
glPopMatrix();
glEnd();


//Right-single-gombuj-upper-last-x-axis--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.605f,0.62f);
glVertex2f(0.455,0.62f);
glPopMatrix();
glPopMatrix();
glEnd();

//Body--------------------------
//glColor3ub(255, 194, 153);
//glColor3ub(255, 204, 179);
//glColor3ub(255, 170, 128);

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 119, 51);

glVertex2f(-0.4f,0.58f);
glVertex2f(-0.71f,0.58f);
glVertex2f(-0.71f,0.2f);
glVertex2f(0.71f,0.2f);
glVertex2f(0.71f,0.58f);
glVertex2f(0.4f,0.5f);
glVertex2f(0.4f,0.68f);
glVertex2f(-0.4f,0.68f);

glPopMatrix();
glEnd();



//88888888888888888
//Left---Body---

//left--Body-design-left-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(-0.68f,0.3f);
glVertex2f(-0.62,0.3f);
glVertex2f(-0.62f,0.38f);
glVertex2f(-0.68f,0.38f);
glPopMatrix();
glEnd();

//left--Body-design-left-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.675f,0.305f);
glVertex2f(-0.625,0.305f);
glVertex2f(-0.625f,0.35f);
glVertex2f(-0.675f,0.35f);
glPopMatrix();
glEnd();

//left--Body-design-left-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.65f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//left--Body-design-left-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(-0.68f,0.4f);
glVertex2f(-0.62,0.4f);
glVertex2f(-0.62f,0.48f);
glVertex2f(-0.68f,0.48f);
glPopMatrix();
glEnd();


//left--Body-design-left-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.675f,0.405f);
glVertex2f(-0.625,0.405f);
glVertex2f(-0.625f,0.45f);
glVertex2f(-0.675f,0.45f);
glPopMatrix();
glEnd();

//left--Body-design-left-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.65f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//left--Body-design-door-up-box---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(204, 68, 0);
glVertex2f(-0.6f,0.4f);
glVertex2f(-0.4,0.4f);
glVertex2f(-0.4f,0.48f);
glVertex2f(-0.6f,0.48f);
glPopMatrix();
glEnd();

////88888888
//left--Body-design-door-up-box-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.595f,0.405f);
glVertex2f(-0.55,0.405f);
glVertex2f(-0.55f,0.475f);
glVertex2f(-0.595f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.545f,0.405f);
glVertex2f(-0.5,0.405f);
glVertex2f(-0.5f,0.475f);
glVertex2f(-0.545f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.495f,0.405f);
glVertex2f(-0.45,0.405f);
glVertex2f(-0.45f,0.475f);
glVertex2f(-0.495f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.445f,0.405f);
glVertex2f(-0.405,0.405f);
glVertex2f(-0.405f,0.475f);
glVertex2f(-0.445f,0.475f);
glPopMatrix();
glEnd();

//left--Body-design-right-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(-0.38f,0.3f);
glVertex2f(-0.32,0.3f);
glVertex2f(-0.32f,0.38f);
glVertex2f(-0.38,0.38f);
glPopMatrix();
glEnd();



//left--Body-design-right-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.375f,0.305f);
glVertex2f(-0.325,0.305f);
glVertex2f(-0.325f,0.35f);
glVertex2f(-0.375f,0.35f);
glPopMatrix();
glEnd();

//left--Body-design-right-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.35f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left--Body-design-right-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(-0.38f,0.4f);
glVertex2f(-0.32,0.4f);
glVertex2f(-0.32f,0.48f);
glVertex2f(-0.38f,0.48f);
glPopMatrix();
glEnd();

//left--Body-design-right-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.375f,0.405f);
glVertex2f(-0.325,0.405f);
glVertex2f(-0.325f,0.45f);
glVertex2f(-0.375f,0.45f);
glPopMatrix();
glEnd();

//left--Body-design-right-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.35f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
////----------------------

//=--------------

//left-body-left-gate-first-design-red------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.58f,0.38f);
glVertex2f(-0.58f,0.2f);
glVertex2f(-0.42f,0.2f);
glVertex2f(-0.42f,0.38f);

glPopMatrix();
glEnd();

//left-body-left-gate-first-design-head-white----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 128);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.57f,0.3f);
glVertex2f(-0.57f,0.2f);
glVertex2f(-0.43f,0.2f);
glVertex2f(-0.43f,0.3f);

glPopMatrix();
glEnd();

//left-body-left-gate-first-design-head-white-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 128);
glVertex2f(-0.5f,0.37f);
glVertex2f(-0.55f,0.34f);
glVertex2f(-0.45,0.34f);

glPopMatrix();
glEnd();

//left-body-left-gate-first-design-head-white-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.5f, 0.29f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 204, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0675;
float x = 1.04*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//black---

//left-body-left-gate-first-design-black------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 153, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.54f,0.29f);
glVertex2f(-0.54f,0.2f);
glVertex2f(-0.46f,0.2f);
glVertex2f(-0.46f,0.29f);

glPopMatrix();
glEnd();


//left-body-left-gate-first-design-black-head-1----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 153, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.52f,0.32f);
glVertex2f(-0.52f,0.3f);
glVertex2f(-0.48f,0.3f);
glVertex2f(-0.48f,0.32f);

glPopMatrix();
glEnd();


//left-body-left-gate-first-design-head-black-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.5f, 0.32f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 153, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.02;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//glColor3ub(255, 194, 153);
//glColor3ub(255, 204, 179);
//glColor3ub(255, 170, 128);

////-------------------
//left--Body-left-pillar----------------

//left--Body-left-pillar-gombuj-black-dot-lower-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.28f, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.004;
float x = 1.6*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left--Body-left-pillar-gombuj-black-stick-upper-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.28f,0.8f);
glVertex2f(-0.28,0.82f);

glPopMatrix();
glEnd();

//left--Body-left-pillar-gombuj---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.28f, 0.76f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 77, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.023;
float x = r * cos(A);
float y = 1.6*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left--Body-left-pillar----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(-0.3f,0.2f);
glVertex2f(-0.26,0.2f);
glVertex2f(-0.26f,0.75f);
glVertex2f(-0.3f,0.75f);
glPopMatrix();
glEnd();





//left--Body-left-pillar-line-upper-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.0);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.29f,0.75f);
glVertex2f(-0.29f,0.5f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-line-upper-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.28f,0.75f);
glVertex2f(-0.28f,0.5f);
glPopMatrix();
glEnd();


//left--Body-left-pillar-line-upper-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.27f,0.75f);
glVertex2f(-0.27f,0.5f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-upper-line--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.305f,0.75f);
glVertex2f(-0.255,0.75f);

glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-upper-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.49f);
glVertex2f(-0.26f,0.49f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-upper-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.48f);
glVertex2f(-0.26f,0.48f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-upper-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.47f);
glVertex2f(-0.26f,0.47f);
glPopMatrix();
glEnd();

////left--Body-left-pillar-2nd-line

//left--Body-left-pillar-line-2nd-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.29f,0.46f);
glVertex2f(-0.29f,0.4f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-line-2nd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.28f,0.46f);
glVertex2f(-0.28f,0.4f);
glPopMatrix();
glEnd();


//left--Body-left-pillar-line-2nd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.27f,0.46f);
glVertex2f(-0.27f,0.4f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-2nd-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.39f);
glVertex2f(-0.26f,0.39f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-2nd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.38f);
glVertex2f(-0.26f,0.38f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-2nd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.37f);
glVertex2f(-0.26f,0.37f);
glPopMatrix();
glEnd();


//3rd-line-----
////left--Body-left-pillar-3rd-line

//left--Body-left-pillar-line-3rd-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.29f,0.36f);
glVertex2f(-0.29f,0.3f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-line-3rd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.28f,0.36f);
glVertex2f(-0.28f,0.3f);
glPopMatrix();
glEnd();


//left--Body-left-pillar-line-3rd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.27f,0.36f);
glVertex2f(-0.27f,0.3f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-3rd-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.29f);
glVertex2f(-0.26f,0.29f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-3rd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.28f);
glVertex2f(-0.26f,0.28f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-x-axis-line-3rd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.3f,0.27f);
glVertex2f(-0.26f,0.27f);
glPopMatrix();
glEnd();



////left--Body-left-pillar-last-line

//left--Body-left-pillar-line-last-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.29f,0.26f);
glVertex2f(-0.29f,0.2f);
glPopMatrix();
glEnd();

//left--Body-left-pillar-line-last-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.28f,0.26f);
glVertex2f(-0.28f,0.2f);
glPopMatrix();
glEnd();


//left--Body-left-pillar-line-last-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.27f,0.26f);
glVertex2f(-0.27f,0.2f);
glPopMatrix();
glEnd();
//============

//left--Body-main-gate-left-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(-0.24f,0.3f);
glVertex2f(-0.18,0.3f);
glVertex2f(-0.18f,0.38f);
glVertex2f(-0.24,0.38f);
glPopMatrix();
glEnd();

//left--Body-main-gate-left-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.235f,0.305f);
glVertex2f(-0.185,0.305f);
glVertex2f(-0.185f,0.35f);
glVertex2f(-0.235f,0.35f);
glPopMatrix();
glEnd();

//left--Body-main-gate-left-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.21f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//left--Body-main-gate-left-box-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.18,0.4f);
glVertex2f(-0.18f,0.48f);
glVertex2f(-0.24f,0.48f);
glPopMatrix();
glEnd();

//left--Body-main-gate-left-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.235f,0.405f);
glVertex2f(-0.185,0.405f);
glVertex2f(-0.185f,0.45f);
glVertex2f(-0.235f,0.45f);
glPopMatrix();
glEnd();

//left--Body-main-gate-left-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.21f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right--Body-------------------


//Right--Body-design-Right-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(0.68f,0.3f);
glVertex2f(0.62,0.3f);
glVertex2f(0.62f,0.38f);
glVertex2f(0.68f,0.38f);
glPopMatrix();
glEnd();

//Right--Body-design-Right-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.675f,0.305f);
glVertex2f(0.625,0.305f);
glVertex2f(0.625f,0.35f);
glVertex2f(0.675f,0.35f);
glPopMatrix();
glEnd();

//Right--Body-design-Right-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.65f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//Right--Body-design-Right-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(0.68f,0.4f);
glVertex2f(0.62,0.4f);
glVertex2f(0.62f,0.48f);
glVertex2f(0.68f,0.48f);
glPopMatrix();
glEnd();


//Right--Body-design-Right-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.675f,0.405f);
glVertex2f(0.625,0.405f);
glVertex2f(0.625f,0.45f);
glVertex2f(0.675f,0.45f);
glPopMatrix();
glEnd();

//Right--Body-design-Right-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.65f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//Right--Body-design-door-up-box---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(204, 68, 0);
glVertex2f(0.6f,0.4f);
glVertex2f(0.4,0.4f);
glVertex2f(0.4f,0.48f);
glVertex2f(0.6f,0.48f);
glPopMatrix();
glEnd();

////88888888
//Right--Body-design-door-up-box-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.595f,0.405f);
glVertex2f(0.55,0.405f);
glVertex2f(0.55f,0.475f);
glVertex2f(0.595f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.545f,0.405f);
glVertex2f(0.5,0.405f);
glVertex2f(0.5f,0.475f);
glVertex2f(0.545f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.495f,0.405f);
glVertex2f(0.45,0.405f);
glVertex2f(0.45f,0.475f);
glVertex2f(0.495f,0.475f);
glPopMatrix();
glEnd();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.445f,0.405f);
glVertex2f(0.405,0.405f);
glVertex2f(0.405f,0.475f);
glVertex2f(0.445f,0.475f);
glPopMatrix();
glEnd();

//Right--Body-design-left-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(0.38f,0.3f);
glVertex2f(0.32,0.3f);
glVertex2f(0.32f,0.38f);
glVertex2f(0.38,0.38f);
glPopMatrix();
glEnd();



//Right--Body-design-left-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.375f,0.305f);
glVertex2f(0.325,0.305f);
glVertex2f(0.325f,0.35f);
glVertex2f(0.375f,0.35f);
glPopMatrix();
glEnd();

//Right--Body-design-left-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.35f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//888888888***********
//Right--Body-design-left-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(0.38f,0.4f);
glVertex2f(0.32,0.4f);
glVertex2f(0.32f,0.48f);
glVertex2f(0.38f,0.48f);
glPopMatrix();
glEnd();

//Right--Body-design-left-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.375f,0.405f);
glVertex2f(0.325,0.405f);
glVertex2f(0.325f,0.45f);
glVertex2f(0.375f,0.45f);
glPopMatrix();
glEnd();

//Right--Body-design-left-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.35f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
////----------------------

//=--------------

//Right-body-Right-gate-first-design-red------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.58f,0.38f);
glVertex2f(0.58f,0.2f);
glVertex2f(0.42f,0.2f);
glVertex2f(0.42f,0.38f);

glPopMatrix();
glEnd();

//Right-body-Right-gate-first-design-head-white----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 128);
//glVertex2f(0.0f,0.51f);
glVertex2f(0.57f,0.3f);
glVertex2f(0.57f,0.2f);
glVertex2f(0.43f,0.2f);
glVertex2f(0.43f,0.3f);

glPopMatrix();
glEnd();

//Right-body-Right-gate-first-design-head-white-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 128);
glVertex2f(0.5f,0.37f);
glVertex2f(0.55f,0.34f);
glVertex2f(0.45,0.34f);

glPopMatrix();
glEnd();

//Right-body-right-gate-first-design-head-white-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.5f, 0.29f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 204, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.0675;
float x = 1.04*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//black---

//Right-body-Right-gate-first-design-black------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 153, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(0.54f,0.29f);
glVertex2f(0.54f,0.2f);
glVertex2f(0.46f,0.2f);
glVertex2f(0.46f,0.29f);

glPopMatrix();
glEnd();


//Right-body-Right-gate-first-design-black-head-1----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 153, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(0.52f,0.32f);
glVertex2f(0.52f,0.3f);
glVertex2f(0.48f,0.3f);
glVertex2f(0.48f,0.32f);

glPopMatrix();
glEnd();


//Right-body-Right-gate-first-design-head-black-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.5f, 0.32f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 153, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.02;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//glColor3ub(255, 194, 153);
//glColor3ub(255, 204, 179);
//glColor3ub(255, 170, 128);

////-------------------

//Right--Body-Right-pillar----------------
//Right--Body-Right-pillar-gombuj-black-dot-lower-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.28f, 0.8f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.004;
float x = 1.6*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-gombuj-black-stick-upper-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.28f,0.8f);
glVertex2f(0.28,0.82f);

glPopMatrix();
glEnd();

//Right--Body-Right-pillar-gombuj---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.28f, 0.76f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 77, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.023;
float x = r * cos(A);
float y = 1.6*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right--Body-Right-pillar----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(0.3f,0.2f);
glVertex2f(0.26,0.2f);
glVertex2f(0.26f,0.75f);
glVertex2f(0.3f,0.75f);
glPopMatrix();
glEnd();





//Right--Body-Right-pillar-line-upper-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(2.0);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.29f,0.75f);
glVertex2f(0.29f,0.5f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-line-upper-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.28f,0.75f);
glVertex2f(0.28f,0.5f);
glPopMatrix();
glEnd();


//Right--Body-Right-pillar-line-upper-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.27f,0.75f);
glVertex2f(0.27f,0.5f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-upper-line--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.305f,0.75f);
glVertex2f(0.255,0.75f);

glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-upper-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.49f);
glVertex2f(0.26f,0.49f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-upper-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.48f);
glVertex2f(0.26f,0.48f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-upper-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.47f);
glVertex2f(0.26f,0.47f);
glPopMatrix();
glEnd();

////Right--Body-Right-pillar-2nd-line

//Right--Body-Right-pillar-line-2nd-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.29f,0.46f);
glVertex2f(0.29f,0.4f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-line-2nd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.28f,0.46f);
glVertex2f(0.28f,0.4f);
glPopMatrix();
glEnd();


//Right--Body-Right-pillar-line-2nd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.27f,0.46f);
glVertex2f(0.27f,0.4f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-2nd-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.39f);
glVertex2f(0.26f,0.39f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-2nd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.38f);
glVertex2f(0.26f,0.38f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-2nd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.37f);
glVertex2f(0.26f,0.37f);
glPopMatrix();
glEnd();


//3rd-line-----
////Right--Body-Right-pillar-3rd-line

//Right--Body-Right-pillar-line-3rd-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.29f,0.36f);
glVertex2f(0.29f,0.3f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-line-3rd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.28f,0.36f);
glVertex2f(0.28f,0.3f);
glPopMatrix();
glEnd();


//Right--Body-Right-pillar-line-3rd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.27f,0.36f);
glVertex2f(0.27f,0.3f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-3rd-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.29f);
glVertex2f(0.26f,0.29f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-3rd-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.28f);
glVertex2f(0.26f,0.28f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-x-axis-line-3rd-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.3f,0.27f);
glVertex2f(0.26f,0.27f);
glPopMatrix();
glEnd();



////left--Body-Right-pillar-last-line

//Right--Body-left-pillar-line-last-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
//glLineWidth(3.0);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.29f,0.26f);
glVertex2f(0.29f,0.2f);
glPopMatrix();
glEnd();

//Right--Body-Right-pillar-line-last-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.28f,0.26f);
glVertex2f(0.28f,0.2f);
glPopMatrix();
glEnd();


//Right--Body-Right-pillar-line-last-3--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.27f,0.26f);
glVertex2f(0.27f,0.2f);
glPopMatrix();
glEnd();
//============

//Right--Body-main-gate-left-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(0.24f,0.3f);
glVertex2f(0.18,0.3f);
glVertex2f(0.18f,0.38f);
glVertex2f(0.24,0.38f);
glPopMatrix();
glEnd();

//Right--Body-main-gate-left-box-1-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.235f,0.305f);
glVertex2f(0.185,0.305f);
glVertex2f(0.185f,0.35f);
glVertex2f(0.235f,0.35f);
glPopMatrix();
glEnd();

//Right--Body-main-gate-left-box-1-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.21f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//Right--Body-main-gate-left-box-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.18,0.4f);
glVertex2f(0.18f,0.48f);
glVertex2f(0.24f,0.48f);
glPopMatrix();
glEnd();

//Right--Body-main-gate-left-box-2-inner-design-box-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.235f,0.405f);
glVertex2f(0.185,0.405f);
glVertex2f(0.185f,0.45f);
glVertex2f(0.235f,0.45f);
glPopMatrix();
glEnd();

//Right--Body-main-gate-left-box-2-inner-design-box-head----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.21f, 0.44f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.025;
float x = r * cos(A);
float y = 1.3*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();




//Main-gate--Body-main-gate-side-bar--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);

glVertex2f(-0.12,0.54f);
glVertex2f(0.12,0.54f);
glVertex2f(0.16f,0.58f);
glVertex2f(-0.16f,0.58f);
glVertex2f(-0.16f,0.3f);
glVertex2f(-0.12,0.3f);

glPopMatrix();
glEnd();


//Main-gate--Body-main-gate-side-bar--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 77, 0);
glVertex2f(0.12,0.54f);
glVertex2f(0.12,0.3f);
glVertex2f(0.16f,0.3f);
glVertex2f(0.16f,0.58f);

glPopMatrix();
glEnd();



//Main-gate-first-design-red------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.1,0.2f);
glVertex2f(0.1,0.2f);
glVertex2f(0.1f,0.52f);
glVertex2f(-0.1f,0.52f);

glPopMatrix();
glEnd();

//Main-gate-first-design--white-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 128);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.09f,0.4f);
glVertex2f(-0.09,0.2f);
glVertex2f(0.09,0.2f);
glVertex2f(0.09f,0.4f);

glPopMatrix();
glEnd();

//Main-gate-first-design-head-white-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 204, 128);
glVertex2f(0.0f,0.51f);
glVertex2f(-0.06f,0.47f);
glVertex2f(0.06,0.47f);



glPopMatrix();
glEnd();
//Main-gate-first-design-head-white-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.4f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 204, 128);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.09;
float x = 1.01*r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//black---

//Main-gate-first-design-black------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 153, 0);
//glVertex2f(0.0f,0.51f);
glVertex2f(-0.06f,0.35f);
glVertex2f(-0.06,0.2f);
glVertex2f(0.06,0.2f);
glVertex2f(0.06f,0.35f);

glPopMatrix();
glEnd();

//Main-gate-first-design-head-black-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 153, 0);
glVertex2f(0.0f,0.41f);
glVertex2f(-0.047f,0.38f);
glVertex2f(0.047,0.38f);

glPopMatrix();
glEnd();

//Main-gate-first-design-head-black-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.34f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 153, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.06;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//----------------
//-Body--Upper--line---------------

//body-upper--line-left-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.71f,0.505f);
glVertex2f(-0.335,0.505f);
glPopMatrix();
glEnd();


//body-upper--line-left-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.335f,0.61f);
glVertex2f(-0.335,0.50f);
glPopMatrix();
glEnd();


//body-upper--line-middle--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(-0.335f,0.605f);
glVertex2f(0.335,0.605f);
glPopMatrix();
glEnd();

//body-upper--line-right-1-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.71f,0.505f);
glVertex2f(0.335,0.505f);
glPopMatrix();
glEnd();


//body-upper--line-right-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(128, 51, 0);
glVertex2f(0.335f,0.61f);
glVertex2f(0.335,0.50f);
glPopMatrix();
glEnd();



//right-pillar---------------
//Right-pillar

//Right-pillar-1-top-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.8f,0.86f);
glVertex2f(0.8,0.91f);

glPopMatrix();
glEnd();


//Right-pillar-1-top-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8f, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.008;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-pillar-1-top-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8f, 0.89f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.008;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-pillar-1-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8f, 0.75f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 77, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.09;
float x = r * cos(A);
float y = 1.2*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//Right-pillar-1-part-3----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.9f,0.2f);
glVertex2f(0.84,0.2f);
glVertex2f(0.84f,0.5f);
glVertex2f(0.9f,0.5f);
glPopMatrix();
glEnd();

//Right-pillar-1-part-3-upper----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.89f,0.5f);
glVertex2f(0.84,0.5f);
glVertex2f(0.84f,0.7f);
glVertex2f(0.89f,0.7f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-2-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 119, 51);
glVertex2f(0.84f,0.2f);
glVertex2f(0.76,0.2f);
glVertex2f(0.76f,0.7f);
glVertex2f(0.84f,0.7f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-1-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.7f,0.2f);
glVertex2f(0.76,0.2f);
glVertex2f(0.76f,0.5f);
glVertex2f(0.7f,0.5f);
glPopMatrix();
glEnd();


//Right-pillar--1--part-1-upper----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.71f,0.5f);
glVertex2f(0.76,0.5f);
glVertex2f(0.76f,0.7f);
glVertex2f(0.71f,0.7f);
glPopMatrix();
glEnd();





//Right-pillar--1--part-3-design-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.89f,0.4f);
glVertex2f(0.85,0.4f);
glVertex2f(0.85f,0.48f);
glVertex2f(0.89f,0.48f);
glPopMatrix();
glEnd();


////Right-pillar--1--part-3-design-box-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.89f,0.3f);
glVertex2f(0.85,0.3f);
glVertex2f(0.85f,0.38f);
glVertex2f(0.89f,0.38f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-2-design-box-1----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.83f,0.3f);
glVertex2f(0.77,0.3f);
glVertex2f(0.77f,0.38f);
glVertex2f(0.83f,0.38f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-2-design-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.83f,0.4f);
glVertex2f(0.77,0.4f);
glVertex2f(0.77f,0.48f);
glVertex2f(0.83f,0.48f);
glPopMatrix();
glEnd();





//Right-pillar--1--part-1-design-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.71f,0.3f);
glVertex2f(0.75,0.3f);
glVertex2f(0.75f,0.38f);
glVertex2f(0.71f,0.38f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-1-design-box-1----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.71f,0.4f);
glVertex2f(0.75,0.4f);
glVertex2f(0.75f,0.48f);
glVertex2f(0.71f,0.48f);
glPopMatrix();
glEnd();


//Right-piller--line-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 51, 0);
glVertex2f(0.89f,0.51f);
glVertex2f(0.9,0.5f);
glVertex2f(0.7f,0.5f);
glVertex2f(0.71,0.51f);
glPopMatrix();
glEnd();



//Right-pillar--1--part-3-design-box-3-upper-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.5);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);

glVertex2f(0.88f,0.54f);
glVertex2f(0.88,0.52f);
glVertex2f(0.85f,0.52f);
glVertex2f(0.85f,0.54f);


glPopMatrix();
glEnd();

//Right-pillar--1--part-2-design-box-2-upper---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.83f,0.52f);
glVertex2f(0.77,0.52f);
glVertex2f(0.77f,0.54f);
glVertex2f(0.83f,0.54f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-1-design-box-1-upper---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.72f,0.52f);
glVertex2f(0.75,0.52f);
glVertex2f(0.75f,0.54f);
glVertex2f(0.72f,0.54f);
glPopMatrix();
glEnd();


//Right-pillar--1--part-3-design-box-3-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.88f,0.56f);
glVertex2f(0.85,0.56f);
glVertex2f(0.85f,0.65f);
glVertex2f(0.88f,0.65f);
glPopMatrix();
glEnd();



//Right-pillar--line-upper-shelter------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 51, 0);
glVertex2f(0.93f,0.7f);
glVertex2f(0.91f,0.68f);
glVertex2f(0.89,0.68f);
glVertex2f(0.89,0.69f);
glVertex2f(0.84f,0.7f);
glVertex2f(0.76f,0.7f);
glVertex2f(0.71f,0.72f);
glVertex2f(0.89f,0.72f);
//glVertex2f(-0.88f,0.65f);
glPopMatrix();
glEnd();

//Right-pillar--line-upper-shelter------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 51, 0);

glVertex2f(0.67f,0.7f);
glVertex2f(0.69f,0.68f);
glVertex2f(0.71f,0.68f);
glVertex2f(0.71f,0.69f);
glVertex2f(0.76f,0.7f);
glVertex2f(0.71f,0.72f);
glPopMatrix();
glEnd();


////Right-pillar--1--part-3-design-box-3-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8645f, 0.655f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.015;
float x = r * cos(A);
float y = 1.5*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



////Right---pillar--1--part-3-design-box-3-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(2.5);
glBegin(GL_POINTS);
glColor3ub(255, 173, 51);
glVertex2f(0.865f, 0.678f);
glPopMatrix();
glEnd();




//Right-pillar--1--part-2-design-box-2-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.83f,0.56f);
glVertex2f(0.77,0.56f);
glVertex2f(0.77f,0.65f);
glVertex2f(0.83f,0.65f);
glPopMatrix();
glEnd();

//Right-pillar--2--part-1-design-box-2-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.8f, 0.65f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.03;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//Right-pillar--2--part-1-design-box-2-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(3.5);
glBegin(GL_POINTS);
glColor3ub(255, 173, 51);
glVertex2f(0.8f, 0.68f);
glPopMatrix();
glEnd();


//Right-pillar--1--part-1-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(0.72f,0.56f);
glVertex2f(0.75,0.56f);
glVertex2f(0.75f,0.65f);
glVertex2f(0.72f,0.65f);
glPopMatrix();
glEnd();

//Right-pillar--1--part-1-design-box-1-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.735f, 0.655f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.015;
float x = r * cos(A);
float y = 1.5*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//Right-pillar--1--part-1-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(2.5);
glBegin(GL_POINTS);
glColor3ub(255, 173, 51);
glVertex2f(0.735f, 0.678f);
glPopMatrix();
glEnd();






//Right-pillar-1-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.89f,0.72f);
glVertex2f(0.84,0.72f);
glVertex2f(0.84f,0.75f);
glVertex2f(0.89f,0.75f);
glPopMatrix();
glEnd();

//Right-pillar-1-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 119, 51);
glVertex2f(0.84f,0.72f);
glVertex2f(0.76,0.72f);
glVertex2f(0.76f,0.75f);
glVertex2f(0.84f,0.75f);
glPopMatrix();
glEnd();

//Right-pillar-1-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(0.76f,0.72f);
glVertex2f(0.71,0.72f);
glVertex2f(0.71f,0.75f);
glVertex2f(0.76f,0.75f);
glPopMatrix();
glEnd();


//left-pillar

//left-pillar-1-top-gombuj-bar-line-first------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.8f,0.86f);
glVertex2f(-0.8,0.91f);

glPopMatrix();
glEnd();


//left-pillar-1-top-gombuj-bar-dot-first------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.8f, 0.86f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.008;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-pillar-1-top-gombuj-bar-dot-second-------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.8f, 0.89f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.008;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-pillar-1-top-gombuj---------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.8f, 0.75f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 77, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.09;
float x = r * cos(A);
float y = 1.2*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//left-pillar-1-part-1----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.9f,0.2f);
glVertex2f(-0.84,0.2f);
glVertex2f(-0.84f,0.5f);
glVertex2f(-0.9f,0.5f);
glPopMatrix();
glEnd();

//left-pillar-1-part-1-upper----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.89f,0.5f);
glVertex2f(-0.84,0.5f);
glVertex2f(-0.84f,0.7f);
glVertex2f(-0.89f,0.7f);
glPopMatrix();
glEnd();

//left-pillar--1--part-2-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 119, 51);
glVertex2f(-0.84f,0.2f);
glVertex2f(-0.76,0.2f);
glVertex2f(-0.76f,0.7f);
glVertex2f(-0.84f,0.7f);
glPopMatrix();
glEnd();

//left-pillar--1--part-3-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.7f,0.2f);
glVertex2f(-0.76,0.2f);
glVertex2f(-0.76f,0.5f);
glVertex2f(-0.7f,0.5f);
glPopMatrix();
glEnd();


//left-pillar--1--part-3-upper----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.71f,0.5f);
glVertex2f(-0.76,0.5f);
glVertex2f(-0.76f,0.7f);
glVertex2f(-0.71f,0.7f);
glPopMatrix();
glEnd();



//left-pillar--1--part-1-design-box-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.89f,0.3f);
glVertex2f(-0.85,0.3f);
glVertex2f(-0.85f,0.38f);
glVertex2f(-0.89f,0.38f);
glPopMatrix();
glEnd();

//left-piller--1--part-1-design-box-2--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.89f,0.4f);
glVertex2f(-0.85,0.4f);
glVertex2f(-0.85f,0.48f);
glVertex2f(-0.89f,0.48f);
glPopMatrix();
glEnd();


//left-pillar--1--part-2-design-box-1----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.83f,0.3f);
glVertex2f(-0.77,0.3f);
glVertex2f(-0.77f,0.38f);
glVertex2f(-0.83f,0.38f);
glPopMatrix();
glEnd();

//left-pillar--1--part-2-design-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.83f,0.4f);
glVertex2f(-0.77,0.4f);
glVertex2f(-0.77f,0.48f);
glVertex2f(-0.83f,0.48f);
glPopMatrix();
glEnd();





//left-pillar--1--part-3-design-box-1----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.71f,0.3f);
glVertex2f(-0.75,0.3f);
glVertex2f(-0.75f,0.38f);
glVertex2f(-0.71f,0.38f);
glPopMatrix();
glEnd();

//left-pillar--1--part-3-design-box-2----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.71f,0.4f);
glVertex2f(-0.75,0.4f);
glVertex2f(-0.75f,0.48f);
glVertex2f(-0.71f,0.48f);
glPopMatrix();
glEnd();


//left-piller--line-1--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 51, 0);
glVertex2f(-0.89f,0.51f);
glVertex2f(-0.9,0.5f);
glVertex2f(-0.7f,0.5f);
glVertex2f(-0.71,0.51f);
glPopMatrix();
glEnd();



//left-pillar--1--part-1-design-box-1-upper-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(1.5);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);

glVertex2f(-0.88f,0.54f);
glVertex2f(-0.88,0.52f);
glVertex2f(-0.85f,0.52f);
glVertex2f(-0.85f,0.54f);


glPopMatrix();
glEnd();

//left-pillar--1--part-2-design-box-1-upper---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.83f,0.52f);
glVertex2f(-0.77,0.52f);
glVertex2f(-0.77f,0.54f);
glVertex2f(-0.83f,0.54f);
glPopMatrix();
glEnd();

//left-pillar--1--part-3-design-box-3-upper---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.72f,0.52f);
glVertex2f(-0.75,0.52f);
glVertex2f(-0.75f,0.54f);
glVertex2f(-0.72f,0.54f);
glPopMatrix();
glEnd();


//left-pillar--1--part-1-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.88f,0.56f);
glVertex2f(-0.85,0.56f);
glVertex2f(-0.85f,0.65f);
glVertex2f(-0.88f,0.65f);
glPopMatrix();
glEnd();



//left-pillar--line-upper-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 51, 0);
glVertex2f(-0.93f,0.7f);
glVertex2f(-0.91f,0.68f);
glVertex2f(-0.89,0.68f);
glVertex2f(-0.89,0.69f);
glVertex2f(-0.84f,0.7f);
glVertex2f(-0.76f,0.7f);
glVertex2f(-0.71f,0.72f);
glVertex2f(-0.89f,0.72f);
//glVertex2f(-0.88f,0.65f);
glPopMatrix();
glEnd();

//left-pillar--line-upper-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 51, 0);

glVertex2f(-0.67f,0.7f);
glVertex2f(-0.69f,0.68f);
glVertex2f(-0.71f,0.68f);
glVertex2f(-0.71f,0.69f);
glVertex2f(-0.76f,0.7f);
glVertex2f(-0.71f,0.72f);
glPopMatrix();
glEnd();


//left-pillar--1--part-1-design-box-1-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.865f, 0.655f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.015;
float x = r * cos(A);
float y = 1.5*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//left-pillar--1--part-1-design-box-1-upper-last-gombuj-dot-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(2.5);
glBegin(GL_POINTS);
glColor3ub(255, 173, 51);
glVertex2f(-0.865f, 0.678f);
glPopMatrix();
glEnd();




//left-pillar--1--part-2-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.83f,0.56f);
glVertex2f(-0.77,0.56f);
glVertex2f(-0.77f,0.65f);
glVertex2f(-0.83f,0.65f);
glPopMatrix();
glEnd();

//left-pillar--2--part-1-design-box-1-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.8f, 0.65f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.03;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();


//left-pillar--2--part-1-design-box-1-upper-last-gombuj-dot-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(3.5);
glBegin(GL_POINTS);
glColor3ub(255, 173, 51);
glVertex2f(-0.8f, 0.68f);
glPopMatrix();
glEnd();


//left-pillar--1--part-3-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 173, 51);
glVertex2f(-0.72f,0.56f);
glVertex2f(-0.75,0.56f);
glVertex2f(-0.75f,0.65f);
glVertex2f(-0.72f,0.65f);
glPopMatrix();
glEnd();

//left-pillar--1--part-3-design-box-1-upper-last-gombuj-------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.7355f, 0.655f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 173, 51);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.015;
float x = r * cos(A);
float y = 1.5*r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



//left-pillar--1--part-3-design-box-1-upper-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glPointSize(2.5);
glBegin(GL_POINTS);
glColor3ub(255, 173, 51);
glVertex2f(-0.735f, 0.678f);
glPopMatrix();
glEnd();






//left-pillar-1-part-1-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.89f,0.72f);
glVertex2f(-0.84,0.72f);
glVertex2f(-0.84f,0.75f);
glVertex2f(-0.89f,0.75f);
glPopMatrix();
glEnd();

//left-pillar-1-part-2-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 119, 51);
glVertex2f(-0.84f,0.72f);
glVertex2f(-0.76,0.72f);
glVertex2f(-0.76f,0.75f);
glVertex2f(-0.84f,0.75f);
glPopMatrix();
glEnd();

//left-pillar-1-part-3-upper-last---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 85, 0);
glVertex2f(-0.76f,0.72f);
glVertex2f(-0.71,0.72f);
glVertex2f(-0.71f,0.75f);
glVertex2f(-0.76f,0.75f);
glPopMatrix();
glEnd();


////------------------------------
//stair-------------
//left-pillar-line---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(102, 34, 0);
glVertex2f(-0.9f,0.205f);
glVertex2f(-0.91,0.19f);
glVertex2f(-0.69f,0.19f);
glVertex2f(-0.7f,0.205f);
glPopMatrix();
glEnd();

//right-pillar-line---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(102, 34, 0);
glVertex2f(0.9f,0.205f);
glVertex2f(0.91,0.19f);
glVertex2f(0.69f,0.19f);
glVertex2f(0.7f,0.205f);
glPopMatrix();
glEnd();


//center-line---------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(102, 34, 0);
glVertex2f(-0.7f,0.195f);
glVertex2f(0.7f,0.195f);
glPopMatrix();
glEnd();

//glColor3ub(255, 163, 102);glColor3ub(255, 179, 128);
//ground--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 92, 0);
glVertex2f(-0.91,0.19f);
glVertex2f(-1.0,0.16f);
glVertex2f(1.0,0.16f);
glVertex2f(0.91,0.19f);
glPopMatrix();
glEnd();


//middle-line-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_POLYGON);
glColor3ub(102, 34, 0);
glVertex2f(-0.2,0.185f);
glVertex2f(-0.21,0.175f);
glVertex2f(0.21,0.175f);
glVertex2f(0.2,0.185f);
glPopMatrix();
glEnd();







//center-line-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);
glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(102, 34, 0);
glVertex2f(-1.0,0.16f);
glVertex2f(1.0,0.16f);
glPopMatrix();
glEnd();


}


void field_night() //820
{
    //field-line-last--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//glRotatef(45, 0.0f, 1.0f,0.0f);

glBegin(GL_POLYGON);
glColor3ub(0, 153, 0);
glVertex2f(-1.0,0.16f);
glVertex2f(-1.0,-0.1f);
glVertex2f(1.0,-0.1f);
glVertex2f(1.0,0.16f);
glPopMatrix();
glEnd();
}

void footpath_night() //821
{

//upper------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 187, 51);


glVertex2f(-1.0,-0.11f);
glVertex2f(1.0,-0.11f);
glVertex2f(1.0f,-0.09f);
glVertex2f(-1.0f,-0.09f);


glPopMatrix();
glEnd();


   glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glLineWidth(2.0);
glBegin(GL_LINES);
glColor3ub(255, 255, 255);

glVertex2f(-1.0,-0.11f);
glVertex2f(1.0,-0.11f);

glPopMatrix();
glEnd();

//lower------------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 187, 51);


glVertex2f(-1.0,-0.35f);
glVertex2f(1.0,-0.35f);
glVertex2f(1.0f,-0.375f);
glVertex2f(-1.0f,-0.375f);


glPopMatrix();
glEnd();

}



void lamppost_night() //822
{
     glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(51, 51, 51);

glVertex2f(0.0,-0.10f);
glVertex2f(0.0,0.1f);

glPopMatrix();
glEnd();

//left-light-----
glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);


glVertex2f(-0.03,0.09f);
glVertex2f(-0.2,-0.1f);
glVertex2f(-0.02,-0.1f);

glPopMatrix();
glEnd();

//right-light-----
glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);


glVertex2f(0.03,0.09f);
glVertex2f(0.2,-0.1f);
glVertex2f(0.02,-0.1f);

glPopMatrix();
glEnd();


//left------
glBegin(GL_POLYGON);
glColor3ub(51, 51, 51);


glVertex2f(0.00,0.06f);
glVertex2f(-0.03,0.1f);
glVertex2f(-0.06,0.1f);

glPopMatrix();
glEnd();

//right------
glBegin(GL_POLYGON);
glColor3ub(51, 51, 51);


glVertex2f(0.00,0.06f);
glVertex2f(0.03,0.1f);
glVertex2f(0.06,0.1f);

glPopMatrix();
glEnd();



}

void trees_night() //823
{
//------------------tree1 start
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128,0,0);


glVertex2f(0.86f,0.0f);
glVertex2f(0.86f,-0.10f);
glVertex2f(0.82f,-0.10f);
glVertex2f(0.82f,0.0f);


glPopMatrix();
glEnd();
    //-------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(47,79,79);


glVertex2f(0.84f,0.18f);
glVertex2f(0.73f,0.02f);
glVertex2f(0.95f,0.02f);



glPopMatrix();
glEnd();
//--------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(47,79,79);


glVertex2f(0.84f,0.10f);
glVertex2f(0.72f,-0.02f);
glVertex2f(0.96f,-0.02f);



glPopMatrix();
glEnd();
//------------------- tree1 end
//-----------------tree2 start
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128,0,0);


glVertex2f(-0.86f,0.0f);
glVertex2f(-0.86f,-0.10f);
glVertex2f(-0.82f,-0.10f);
glVertex2f(-0.82f,0.0f);


glPopMatrix();
glEnd();
//-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(47,79,79);


glVertex2f(-0.84f,0.18f);
glVertex2f(-0.73f,0.02f);
glVertex2f(-0.95f,0.02f);



glPopMatrix();
glEnd();
//-----------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(47,79,79);


glVertex2f(-0.84f,0.10f);
glVertex2f(-0.72f,-0.02f);
glVertex2f(-0.96f,-0.02f);



glPopMatrix();
glEnd();
//---------------------tree2 end
//----------------------tree3 start
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128,0,0);


glVertex2f(0.40f,0.0f);
glVertex2f(0.40f,-0.10f);
glVertex2f(0.36f,-0.10f);
glVertex2f(0.36f,0.0f);


glPopMatrix();
glEnd();
//-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(47,79,79);


glVertex2f(0.38f,0.18f);
glVertex2f(0.265f,0.02f);
glVertex2f(0.49f,0.02f);



glPopMatrix();
glEnd();
//-----------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(47,79,79);


glVertex2f(0.38f,0.10f);
glVertex2f(0.255f,-0.02f);
glVertex2f(0.50f,-0.02f);



glPopMatrix();
glEnd();
//---------------------- tree3 end
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128,0,0);


glVertex2f(-0.40f,0.0f);
glVertex2f(-0.40f,-0.10f);
glVertex2f(-0.36f,-0.10f);
glVertex2f(-0.36f,0.0f);


glPopMatrix();
glEnd();
//-----------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(47,79,79);


glVertex2f(-0.38f,0.18f);
glVertex2f(-0.265f,0.02f);
glVertex2f(-0.49f,0.02f);



glPopMatrix();
glEnd();
//-----------------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(47,79,79);


glVertex2f(-0.38f,0.10f);
glVertex2f(-0.255f,-0.02f);
glVertex2f(-0.50f,-0.02f);



glPopMatrix();
glEnd();
}

void bench_night() //824
{
    //--------------1st bench
//----------------- bench upper side
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(165,42,42);


glVertex2f(-0.51f,-0.01f);
glVertex2f(-0.51f,-0.05f);
glVertex2f(-0.70f,-0.05f);
glVertex2f(-0.70f,-0.01f);


glPopMatrix();
glEnd();
//------------------- lower side
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128,0,0);


glVertex2f(-0.51f,-0.05f);
glVertex2f(-0.49f,-0.07f);
glVertex2f(-0.72f,-0.07f);
glVertex2f(-0.70f,-0.05f);


glPopMatrix();
glEnd();
//-------------------1st leg
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0);


glVertex2f(-0.68f,-0.07f);
glVertex2f(-0.68f,-0.10f);
glVertex2f(-0.69f,-0.10f);
glVertex2f(-0.69f,-0.07f);


glPopMatrix();
glEnd();
//---------------2nd leg
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0);


glVertex2f(-0.52f,-0.07f);
glVertex2f(-0.52f,-0.10f);
glVertex2f(-0.53f,-0.10f);
glVertex2f(-0.53f,-0.07f);


glPopMatrix();
glEnd();

//----------------------2nd bench
//----------------- bench upper side
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(165,42,42);


glVertex2f(0.51f,-0.01f);
glVertex2f(0.51f,-0.05f);
glVertex2f(0.70f,-0.05f);
glVertex2f(0.70f,-0.01f);


glPopMatrix();
glEnd();
//------------------- lower side
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128,0,0);


glVertex2f(0.51f,-0.05f);
glVertex2f(0.49f,-0.07f);
glVertex2f(0.72f,-0.07f);
glVertex2f(0.70f,-0.05f);


glPopMatrix();
glEnd();
//-------------------1st leg
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0);


glVertex2f(0.68f,-0.07f);
glVertex2f(0.68f,-0.10f);
glVertex2f(0.69f,-0.10f);
glVertex2f(0.69f,-0.07f);


glPopMatrix();
glEnd();
//---------------2nd leg
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0);


glVertex2f(0.52f,-0.07f);
glVertex2f(0.52f,-0.10f);
glVertex2f(0.53f,-0.10f);
glVertex2f(0.53f,-0.07f);


glPopMatrix();
glEnd();
}


void road_night() //825
{
  glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(72,72,72);


glVertex2f(1.0f,-0.10f);
glVertex2f(1.0f,-0.35f);
glVertex2f(-1.0f,-0.35f);
glVertex2f(-1.0f,-0.10f);


glPopMatrix();
glEnd();
//road lines
 //--------------1 right side
  glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.86f,-0.21f);
glVertex2f(.86f,-0.23f);
glVertex2f(1.0f,-0.23f);
glVertex2f(1.0f,-0.21f);


glPopMatrix();
glEnd();

//------------- 2
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.66f,-0.21f);
glVertex2f(.66f,-0.23f);
glVertex2f(.82f,-0.23f);
glVertex2f(.82f,-0.21f);


glPopMatrix();
glEnd();

//-----------3
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.46f,-0.21f);
glVertex2f(.46f,-0.23f);
glVertex2f(.62f,-0.23f);
glVertex2f(.62f,-0.21f);


glPopMatrix();
glEnd();

//-------- 4
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.26f,-0.21f);
glVertex2f(.26f,-0.23f);
glVertex2f(.42f,-0.23f);
glVertex2f(.42f,-0.21f);


glPopMatrix();
glEnd();
//----------5
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(.06f,-0.21f);
glVertex2f(.06f,-0.23f);
glVertex2f(.22f,-0.23f);
glVertex2f(.22f,-0.21f);


glPopMatrix();
glEnd();
//---------6
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.14f,-0.21f);
glVertex2f(-0.14f,-0.23f);
glVertex2f(.02f,-0.23f);
glVertex2f(.02f,-0.21f);


glPopMatrix();
glEnd();
//----------7
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.34f,-0.21f);
glVertex2f(-0.34f,-0.23f);
glVertex2f(-0.18f,-0.23f);
glVertex2f(-0.18f,-0.21f);


glPopMatrix();
glEnd();
//---------------8
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.35f,-0.21f);
glVertex2f(-0.35f,-0.23f);
glVertex2f(-0.30f,-0.23f);
glVertex2f(-0.30f,-0.21f);


glPopMatrix();
glEnd();
//------------8
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.56f,-0.21f);
glVertex2f(-0.56f,-0.23f);
glVertex2f(-0.39f,-0.23f);
glVertex2f(-0.39f,-0.21f);


glPopMatrix();
glEnd();
//-------------9
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.76f,-0.21f);
glVertex2f(-0.76f,-0.23f);
glVertex2f(-0.60f,-0.23f);
glVertex2f(-0.60f,-0.21f);


glPopMatrix();
glEnd();
//--------------10
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);


glVertex2f(-0.96f,-0.21f);
glVertex2f(-0.96f,-0.23f);
glVertex2f(-0.80f,-0.23f);
glVertex2f(-0.80f,-0.21f);


glPopMatrix();
glEnd();
}





void river_night() //826
{
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 51, 128);


glVertex2f(1.0f,-0.35f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(-1.0f,-0.35f);


glPopMatrix();
glEnd();
}




void disback(int val)
{
glutDisplayFunc(display);
}

void display3()
{
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//sky_night();
//moon();
//house_for_night();
//field_for_night();
sky_night();
moon();
field_night();
lalbaghFort_night();
plane();
road_night();
river_night();
footpath_night();
trees_night();
bench_night();
lamppost_night();
Cars();
stars();
plane();
ship_left();
ship_right();
//roadLines();
glPopMatrix();

//glutTimerFunc(2000,disback,0);
glFlush();
}

void display2(int val) {

glutDisplayFunc(display3);

}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);



    sky();
    sun();
    //field();
    cloud();
    field();
    lalbaghFort();
    plane();
    river();

    road();
    Cars();
    footpath();
    trees();
    bench();
    lamppost();
    ship_left();
    ship_right();
    //glutTimerFunc(2000,display2,0);
    glFlush();

}

void dis()
{
    glutDisplayFunc(display);
}


void handlekeypress(unsigned char key,int x,int y)
{
    switch (key)
    {
    case 'd':

    glutDisplayFunc(display);
    break;

    case 'n':

    glutDisplayFunc(display3);
    break;

    glutPostRedisplay();
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(780, 780);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Lalbagh fort view");
    glutDisplayFunc(dis);
    //init();

//    glutTimerFunc(20, update, 0);
 //   glutTimerFunc(20, update1, 0);

    //--------for red car
    glutTimerFunc(20, update_car_right, 0); //Add a timer
    glutTimerFunc(20, update_car_left, 0); //Add a timer





    glutTimerFunc(10, update_plane, 0); //timer for the plane

    glutTimerFunc(30, update_ship_left, 0); //Timer for ship left


    glutTimerFunc(40, update_ship_right, 0); ////Timer for ship right
//cloud-1-----------------

    glutTimerFunc(400, update_cloud_left_1, 0);
    glutTimerFunc(400, update_cloud_left_2, 0);
    glutTimerFunc(400, update_cloud_left_3, 0);
    glutTimerFunc(400, update_cloud_left_4, 0);
    glutTimerFunc(400, update_cloud_left_5, 0);
    glutTimerFunc(400, update_cloud_left_6, 0);
    glutTimerFunc(400, update_cloud_left_7, 0);
    glutTimerFunc(400, update_cloud_left_8, 0);
    glutTimerFunc(400, update_cloud_left_9, 0);
    glutTimerFunc(400, update_cloud_left_10, 0);
    glutTimerFunc(400, update_cloud_left_11, 0);
    glutTimerFunc(400, update_cloud_left_12, 0);
    glutTimerFunc(400, update_cloud_left_13, 0);
    //glutTimerFunc(90, updatec1, 0);
    //glutTimerFunc(90, updatec1, 0);

//cloud-2-----------------

    glutTimerFunc(400, update_cloud_right_1, 0);
    glutTimerFunc(400, update_cloud_right_2, 0);
    glutTimerFunc(400, update_cloud_right_3, 0);
    glutTimerFunc(400, update_cloud_right_4, 0);
    glutTimerFunc(400, update_cloud_right_5, 0);
    glutTimerFunc(400, update_cloud_right_6, 0);
    glutTimerFunc(400, update_cloud_right_7, 0);
    glutTimerFunc(400, update_cloud_right_8, 0);
    glutTimerFunc(400, update_cloud_right_9, 0);
    glutTimerFunc(400, update_cloud_right_10, 0);
    glutTimerFunc(400, update_cloud_right_11, 0);
    glutTimerFunc(400, update_cloud_right_12, 0);
    glutTimerFunc(400, update_cloud_right_13, 0);

    glutKeyboardFunc(handlekeypress);
    glutMainLoop();

    return 0;
}
