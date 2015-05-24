#include "GL/freeglut.h"
#include "GL/gl.h"
#include <stdlib.h>

typedef struct Vertex{
    float x;
    float y;
} Vertex_t;

typedef struct Speed{
    float x;
    float y;
} Speed_t;

typedef struct Rectangle{
    Vertex_t one;
    Vertex_t two;
    Vertex_t three;
    Vertex_t four;

    Vertex_t middle;

    Speed_t speed;

} Rectangle_t;

Rectangle_t asteroids[4];

void init(){

    for(int i = 0; i < sizeof(asteroids)/sizeof(Rectangle_t); i++){
        asteroids[i].speed.x = (int) (rand()%50);
        asteroids[i].speed.y = (int) (rand()%50);

        int r = (int) (rand()%250 + 1);
        r = (r%2==0) ? r *= -1 : r ;

        asteroids[i].one.x = 0 + r;
        asteroids[i].one.y = 0 + r;

        asteroids[i].two.x = 0 + r;
        asteroids[i].two.y = 20 + r;
        
        asteroids[i].three.x = 20 + r;
        asteroids[i].three.y = 20 + r;

        asteroids[i].four.x = 20 + r;
        asteroids[i].four.y = 0 + r;

        asteroids[i].middle.x = ( (asteroids[i].one.x + asteroids[i].four.x)/2 );
        asteroids[i].middle.y = ( (asteroids[i].one.y + asteroids[i].two.y)/2 );
    }

}

void update(){

 for(int i = 0; i < sizeof(asteroids)/sizeof(Rectangle_t); i++){

    if()

 }    

}

void renderFunction(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glEnd();
    
    glFlush();

}

/* Main method - main entry point of application
the freeglut library does the window creation work for us, 
regardless of the platform. */
int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Yeah");
    

    //call renderfunction here wei?
    


    return 0;
}