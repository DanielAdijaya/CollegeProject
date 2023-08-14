#include<gl/glut.h>

float xrot,yrot,zrot,xdiff,ydiff,zdiff = 0;
bool mouseDown = false;
int is_depth;

void jendelakiri(){
	glBegin(GL_LINE_LOOP); //1
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-105.2,-8,20);
    glVertex3f(-105.2,-25,20);
    glVertex3f(-105.2,-25,10);
    glVertex3f(-105.2,-8,10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-105.2,-8,20);
    glVertex3f(-105.2,-25,20);
    glVertex3f(-105.2,-25,10);
    glVertex3f(-105.2,-8,10);
    glEnd();
}

void gambarkiri(){
	glBegin(GL_POLYGON);//1
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-105.1,-8,30);
    glVertex3f(-105.1,-28,30);
    glVertex3f(-105.1,-28,20);
    glVertex3f(-105.1,-8,20);
    glEnd();
}

void pagarkiri(){
	glBegin(GL_POLYGON);
    glColor3f(0.92, 0.78, 0.57);
    glVertex3f(-107,-26,22);
    glVertex3f(-107,-28,22);
    glVertex3f(-107,-28,8);
    glVertex3f(-107,-26,8);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-107,-28,22);
    glVertex3f(-107,-28,8);
    glVertex3f(-105,-28,8);
    glVertex3f(-105,-28,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-107,-26,22);
    glVertex3f(-107,-26,8);
    glVertex3f(-105,-26,8);
    glVertex3f(-105,-26,22);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-107,-24,22);
    glVertex3f(-107,-24,8);
    glVertex3f(-107,-22,22);
    glVertex3f(-107,-22,8);
    glVertex3f(-107,-24,22);
    glVertex3f(-105,-24,22);
    glVertex3f(-107,-22,22);
    glVertex3f(-105,-22,22);
    glEnd();
}

void jendelakiridalam(){
	glBegin(GL_LINES); //1
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-80.2,-35,-20);
    glVertex3f(-80.2,-55,-20);
    glVertex3f(-80.2,-55,-10);
    glVertex3f(-80.2,-35,-10);
    glVertex3f(-80.2,-35,-30);
    glVertex3f(-80.2,-55,-30);
    glVertex3f(-80.2,-35,-30);
    glVertex3f(-80.2,-35,-10);
    glVertex3f(-80.2,-55,-30);
    glVertex3f(-80.2,-55,-10);
    glVertex3f(-80.2,-48,-20);
    glVertex3f(-80.2,-48,-10);
    glEnd();
}

void gariskiri(){
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,92,-78);
    glVertex3f(-105.1,92,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,91,-78);
    glVertex3f(-105.1,91,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,90,-78);
    glVertex3f(-105.1,90,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,89,-78);
    glVertex3f(-105.1,89,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,88,-78);
    glVertex3f(-105.1,88,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,87,-78);
    glVertex3f(-105.1,87,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,86,-78);
    glVertex3f(-105.1,86,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,85,-78);
    glVertex3f(-105.1,85,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,84,-78);
    glVertex3f(-105.1,84,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,83,-78);
    glVertex3f(-105.1,83,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,82,-78);
    glVertex3f(-105.1,82,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,81,-78);
    glVertex3f(-105.1,81,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,80,-78);
    glVertex3f(-105.1,80,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,79,-78);
    glVertex3f(-105.1,79,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,78,-78);
    glVertex3f(-105.1,78,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,77,-78);
    glVertex3f(-105.1,77,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105,91,-100);
    glVertex3f(-105.1,77,-100);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-105.1,92,-78);
    glVertex3f(-105.1,77,-78);
    glEnd();
}

void gedung(){

	// depan dalam
    glBegin(GL_POLYGON); // kiri 1
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-60,0);
    glVertex3f(-75,-60,0);
    glVertex3f(-75,-30,0);
    glVertex3f(-80,-30,0);
    glEnd();
    glBegin(GL_POLYGON); // kiri 2
    glVertex3f(-80,-30,0);
    glVertex3f(-15,-30,0);
    glVertex3f(-15,-32,0);
    glVertex3f(-80,-32,0);
    glEnd();
    glBegin(GL_POLYGON); // kiri 3
    glVertex3f(-20,-60,0);
    glVertex3f(-15,-60,0);
    glVertex3f(-15,-30,0);
    glVertex3f(-20,-30,0);
    glEnd();
    glBegin(GL_POLYGON); // kiri 4
    glVertex3f(-80,-60,0);
    glVertex3f(-15,-60,0);
    glVertex3f(-15,-58,0);
    glVertex3f(-80,-58,0);
    glEnd();

    // jendela depan dalam kiri
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);//1 kiri
    glVertex3f(-75,-32,0.2);
    glVertex3f(-20,-32,0.2);
    glVertex3f(-20,-57,0.2);
    glVertex3f(-75,-57,0.2);
    glVertex3f(-45,-32,0.2);
    glVertex3f(-45,-57,0.2);
    glVertex3f(-75,-32,0.2);
    glVertex3f(-75,-57,0.2);
    glVertex3f(-20,-32,0.2);
    glVertex3f(-20,-57,0.2);
    glEnd();

    // Pintu
    glBegin(GL_POLYGON); // garis kiri
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-15,-60,0);
    glVertex3f(-12,-60,0);
    glVertex3f(-12,-30,0);
    glVertex3f(-15,-30,0);
    glEnd();
    glBegin(GL_POLYGON); //garis atas
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-15,-30,0);
    glVertex3f(25,-30,0);
    glVertex3f(25,-32,0);
    glVertex3f(-15,-32,0);
    glEnd();
    glBegin(GL_LINES); // garis tengah
    glColor3f(0.0,0.0,0.0);
    glVertex3f(5,-60,0);
    glVertex3f(5,-30,0);
    glEnd();
    glBegin(GL_POLYGON); // garis kanan
    glColor3f(0.0,0.0,0.0);
    glVertex3f(22,-60,0);
    glVertex3f(25,-60,0);
    glVertex3f(25,-30,0);
    glVertex3f(22,-30,0);
    glEnd();

    glBegin(GL_POLYGON); //kanan
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(25,-60,0);
    glVertex3f(65,-60,0);
    glVertex3f(65,-30,0);
    glVertex3f(25,-30,0);
    glEnd();

    glBegin(GL_POLYGON); // atap
    glColor3f(0.18, 0.17, 0.16);
    glVertex3f(-65,-30,20);
    glVertex3f(-65,-30,0);
    glVertex3f(70,-30,0);
    glVertex3f(70,-30,20);
    glEnd();

    // kiri dalam
    glBegin(GL_POLYGON); // 1
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-30,-130);
    glVertex3f(-80,-60,-130);
    glVertex3f(-80,-60,-150);
    glVertex3f(-80,-30,-150);
    glEnd();
    glBegin(GL_POLYGON); // 2
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-30,-10);
    glVertex3f(-80,-35,-10);
    glVertex3f(-80,-35,-150);
    glVertex3f(-80,-30,-150);
    glEnd();
    glBegin(GL_POLYGON); // 3
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-30,0);
    glVertex3f(-80,-60,0);
    glVertex3f(-80,-60,-10);
    glVertex3f(-80,-30,-10);
    glEnd();
    glBegin(GL_POLYGON); // 4
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-55,-10);
    glVertex3f(-80,-60,-10);
    glVertex3f(-80,-60,-150);
    glVertex3f(-80,-55,-150);
    glEnd();
    glBegin(GL_POLYGON); // tengah 1
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-30,-30);
    glVertex3f(-80,-60,-30);
    glVertex3f(-80,-60,-35);
    glVertex3f(-80,-30,-35);
    glEnd();
    glBegin(GL_POLYGON); // tengah 2
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-30,-55);
    glVertex3f(-80,-60,-55);
    glVertex3f(-80,-60,-60);
    glVertex3f(-80,-30,-60);
    glEnd();
    glBegin(GL_POLYGON); // tengah 3
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-30,-80);
    glVertex3f(-80,-60,-80);
    glVertex3f(-80,-60,-85);
    glVertex3f(-80,-30,-85);
    glEnd();
    glBegin(GL_POLYGON); // tengah 4
    glColor3f(0.82, 0.64, 0.38);
    glVertex3f(-80,-30,-105);
    glVertex3f(-80,-60,-105);
    glVertex3f(-80,-60,-110);
    glVertex3f(-80,-30,-110);
    glEnd();

    glPushMatrix();
    glTranslatef(0,0,0);
    jendelakiridalam();
    glTranslatef(0,0,-25);
    jendelakiridalam();
    glTranslatef(0,0,-25);
    jendelakiridalam();
    glTranslatef(0,0,-25);
    jendelakiridalam();
    glTranslatef(0,0,-25);
    jendelakiridalam();
    glPopMatrix();

    glBegin(GL_POLYGON); // atap
    glColor3f(0.18, 0.17, 0.16);
    glVertex3f(-105,-30,30);
    glVertex3f(-105,-30,-150);
    glVertex3f(-65,-30,-150);
    glVertex3f(-65,-30,30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-105,-60,-150);
    glVertex3f(-105,-30,-150);
    glVertex3f(-80,-30,-150);
    glVertex3f(-80,-60,-150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(-105,-30,-150);
    glVertex3f(-105,-60,-150);
    glVertex3f(-105,-60,-200);
    glVertex3f(-105,-30,-200);
    glEnd();

	// DEPAN
    glBegin(GL_POLYGON);
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-65,-30,20);
    glVertex3f(65,-30,20);
    glVertex3f(65,110,20);
    glVertex3f(-65,110,20);
    glEnd();

    // depan kanan
    glBegin(GL_POLYGON);
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(65,-60,25);
    glVertex3f(115,-60,25);
    glVertex3f(115,110,25);
    glVertex3f(65,110,25);
    glEnd();
    // depan patahan kanan
    glBegin(GL_POLYGON);
    glColor3f(0.18, 0.17, 0.16);
    glVertex3f(65,110,25);
    glVertex3f(65,-30,25);
    glVertex3f(65,-30,20);
    glVertex3f(65,110,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(65,-30,25);
    glVertex3f(65,-60,25);
    glVertex3f(65,-60,0);
    glVertex3f(65,-30,0);
    glEnd();

    // depan kanan jendela
    glBegin(GL_POLYGON);
    glColor3f(0.46, 0.62, 0.77);
    glVertex3f(70,-40,25.1);
    glVertex3f(87,-40,25.1);
    glVertex3f(87,105,25.1);
    glVertex3f(70,105,25.1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(93,-40,25.1);
    glVertex3f(110,-40,25.1);
    glVertex3f(110,105,25.1);
    glVertex3f(93,105,25.1);
    glEnd();

    // depan kiri menjorok
    glBegin(GL_POLYGON);
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(-105,-30,30);
    glVertex3f(-65,-30,30);
    glVertex3f(-65,110,30);
    glVertex3f(-105,110,30);
    glEnd();

    // depan kiri tembok menjorok
    glBegin(GL_POLYGON); // 1
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-90,-28,32);
    glVertex3f(-65,-28,32);
    glVertex3f(-65,-26,32);
    glVertex3f(-90,-26,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-92,-28,32);
    glVertex3f(-92,-28,30);
    glVertex3f(-65,-28,30);
    glVertex3f(-65,-28,32);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-90,-26,32);
    glVertex3f(-90,-26,30);
    glVertex3f(-65,-26,30);
    glVertex3f(-65,-26,32);
    glEnd();

    glBegin(GL_POLYGON); // 5
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-90,97,32);
    glVertex3f(-65,97,32);
    glVertex3f(-65,95,32);
    glVertex3f(-90,95,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-92,97,32);
    glVertex3f(-92,97,30);
    glVertex3f(-65,97,30);
    glVertex3f(-65,97,32);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-90,95,32);
    glVertex3f(-90,95,30);
    glVertex3f(-65,95,30);
    glVertex3f(-65,95,32);
    glEnd();

    glBegin(GL_POLYGON); // berdiri
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-92,97,32);
    glVertex3f(-90,97,32);
    glVertex3f(-90,-28,32);
    glVertex3f(-92,-28,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-92,97,32);
    glVertex3f(-92,-28,32);
    glVertex3f(-92,-28,30);
    glVertex3f(-92,97,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-90,95,32);
    glVertex3f(-90,-26,32);
    glVertex3f(-90,-26,30);
    glVertex3f(-90,95,30);
    glEnd();

    // jendela depan kiri menjorok
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//1 kiri
    glVertex3f(-87,-8,30.2);
    glVertex3f(-77,-8,30.2);
    glVertex3f(-77,-25,30.2);
    glVertex3f(-87,-25,30.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-87,-8,30.2);
    glVertex3f(-77,-8,30.2);
    glVertex3f(-77,-25,30.2);
    glVertex3f(-87,-25,30.2);
    glEnd();
    glBegin(GL_POLYGON); // 1
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-90,-5,32);
    glVertex3f(-72,-5,32);
    glVertex3f(-72,-3,32);
    glVertex3f(-90,-3,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-92,-5,32);
    glVertex3f(-92,-5,30);
    glVertex3f(-70,-5,30);
    glVertex3f(-70,-5,32);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-90,-3,32);
    glVertex3f(-90,-3,30);
    glVertex3f(-72,-3,30);
    glVertex3f(-72,-3,32);
    glEnd();
    glBegin(GL_POLYGON); // berdiri 1
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-72,-20,32);
    glVertex3f(-70,-20,32);
    glVertex3f(-70,-28,32);
    glVertex3f(-72,-28,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-72,-20,32);
    glVertex3f(-72,-26,32);
    glVertex3f(-72,-26,30);
    glVertex3f(-72,-20,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-70,-20,32);
    glVertex3f(-70,-26,32);
    glVertex3f(-70,-26,30);
    glVertex3f(-70,-20,30);
    glEnd();
    glBegin(GL_LINES); // pagar 1
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-90,-24,31);
    glVertex3f(-70,-24,31);
    glVertex3f(-90,-22,31);
    glVertex3f(-70,-22,31);
    glVertex3f(-90,-20,31);
    glVertex3f(-70,-20,31);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//2 kiri
    glVertex3f(-87,18,30.2);
    glVertex3f(-77,18,30.2);
    glVertex3f(-77,1,30.2);
    glVertex3f(-87,1,30.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-87,18,30.2);
    glVertex3f(-77,18,30.2);
    glVertex3f(-77,1,30.2);
    glVertex3f(-87,1,30.2);
    glEnd();
    glBegin(GL_POLYGON); // 2
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-90,22,32);
    glVertex3f(-72,22,32);
    glVertex3f(-72,20,32);
    glVertex3f(-90,20,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-92,22,32);
    glVertex3f(-92,22,30);
    glVertex3f(-72,22,30);
    glVertex3f(-72,22,32);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-90,20,32);
    glVertex3f(-90,20,30);
    glVertex3f(-70,20,30);
    glVertex3f(-70,20,32);
    glEnd();
    glBegin(GL_POLYGON); // berdiri 2
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-72,-5,32);
    glVertex3f(-70,-5,32);
    glVertex3f(-70,3,32);
    glVertex3f(-72,3,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-72,3,32);
    glVertex3f(-72,-5,32);
    glVertex3f(-72,-5,30);
    glVertex3f(-72,3,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-70,3,32);
    glVertex3f(-70,-5,32);
    glVertex3f(-70,-5,30);
    glVertex3f(-70,3,30);
    glEnd();
    glBegin(GL_LINES); // pagar 2
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-90,-1,31);
    glVertex3f(-70,-1,31);
    glVertex3f(-90,1,31);
    glVertex3f(-70,1,31);
    glVertex3f(-90,3,31);
    glVertex3f(-70,3,31);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//3 kiri
    glVertex3f(-87,43,30.2);
    glVertex3f(-77,43,30.2);
    glVertex3f(-77,26,30.2);
    glVertex3f(-87,26,30.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-87,43,30.2);
    glVertex3f(-77,43,30.2);
    glVertex3f(-77,26,30.2);
    glVertex3f(-87,26,30.2);
    glEnd();
    glBegin(GL_POLYGON); // 3
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-90,47,32);
    glVertex3f(-72,47,32);
    glVertex3f(-72,45,32);
    glVertex3f(-90,45,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-92,47,32);
    glVertex3f(-92,47,30);
    glVertex3f(-72,47,30);
    glVertex3f(-72,47,32);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-90,45,32);
    glVertex3f(-90,45,30);
    glVertex3f(-70,45,30);
    glVertex3f(-70,45,32);
    glEnd();
    glBegin(GL_POLYGON); // berdiri 3
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-72,20,32);
    glVertex3f(-70,20,32);
    glVertex3f(-70,28,32);
    glVertex3f(-72,28,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-72,20,32);
    glVertex3f(-72,28,32);
    glVertex3f(-72,28,30);
    glVertex3f(-72,20,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-70,20,32);
    glVertex3f(-70,28,32);
    glVertex3f(-70,28,30);
    glVertex3f(-70,20,30);
    glEnd();
    glBegin(GL_LINES); // pagar 3
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-90,24,31);
    glVertex3f(-70,24,31);
    glVertex3f(-90,26,31);
    glVertex3f(-70,26,31);
    glVertex3f(-90,28,31);
    glVertex3f(-70,28,31);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//4 kiri
    glVertex3f(-87,68,30.2);
    glVertex3f(-77,68,30.2);
    glVertex3f(-77,51,30.2);
    glVertex3f(-87,51,30.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-87,68,30.2);
    glVertex3f(-77,68,30.2);
    glVertex3f(-77,51,30.2);
    glVertex3f(-87,51,30.2);
    glEnd();
    glBegin(GL_POLYGON); // berdiri 4
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-72,45,32);
    glVertex3f(-70,45,32);
    glVertex3f(-70,53,32);
    glVertex3f(-72,53,32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-72,45,32);
    glVertex3f(-72,53,32);
    glVertex3f(-72,53,30);
    glVertex3f(-72,45,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-70,45,32);
    glVertex3f(-70,53,32);
    glVertex3f(-70,53,30);
    glVertex3f(-70,45,30);
    glEnd();
    glBegin(GL_LINES); // pagar 4
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-90,49,31);
    glVertex3f(-70,49,31);
    glVertex3f(-90,51,31);
    glVertex3f(-70,51,31);
    glVertex3f(-90,53,31);
    glVertex3f(-70,53,31);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//5 kiri
    glVertex3f(-87,93,30.2);
    glVertex3f(-77,93,30.2);
    glVertex3f(-77,75,30.2);
    glVertex3f(-87,75,30.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-87,93,30.2);
    glVertex3f(-77,93,30.2);
    glVertex3f(-77,75,30.2);
    glVertex3f(-87,75,30.2);
    glEnd();

    // depan patahan kiri
    glBegin(GL_POLYGON);
    glColor3f(0.18, 0.17, 0.16);
    glVertex3f(-65,110,30);
    glVertex3f(-65,-30,30);
    glVertex3f(-65,-30,20);
    glVertex3f(-65,110,20);
    glEnd();

    // depan kanopi lobby
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.29, 0.31);
    glVertex3f(-25,-30,60);
    glVertex3f(-25,-30,20);
    glVertex3f(35,-30,20);
    glVertex3f(35,-30,60);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.44, 0.47);
    glVertex3f(-25,-27,60);
    glVertex3f(-25,-27,20);
    glVertex3f(35,-27,20);
    glVertex3f(35,-27,60);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.29, 0.31);
    glVertex3f(-25,-30,60);
    glVertex3f(35,-30,60);
    glVertex3f(35,-27,60);
    glVertex3f(-25,-27,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-25,-27,60);
    glVertex3f(-25,-30,60);
    glVertex3f(-25,-30,20);
    glVertex3f(-25,-27,20);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(35,-27,60);
    glVertex3f(35,-30,60);
    glVertex3f(35,-30,20);
    glVertex3f(35,-27,20);
    glEnd();

    //palang kanopi kiri
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.44, 0.47);
    glVertex3f(-25,-60,60);
    glVertex3f(-22,-60,60);
    glVertex3f(-22,-30,60);
    glVertex3f(-25,-30,60);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.29, 0.31);
    glVertex3f(-25,-30,57);
    glVertex3f(-25,-60,57);
    glVertex3f(-25,-60,60);
    glVertex3f(-25,-30,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-22,-30,57);
    glVertex3f(-22,-60,57);
    glVertex3f(-22,-60,60);
    glVertex3f(-22,-30,60);
    glEnd();

    //palang kanopi kanan
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.44, 0.47);
    glVertex3f(32,-60,60);
    glVertex3f(35,-60,60);
    glVertex3f(35,-30,60);
    glVertex3f(32,-30,60);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.29, 0.31);
    glVertex3f(32,-30,57);
    glVertex3f(32,-60,57);
    glVertex3f(32,-60,60);
    glVertex3f(32,-30,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(35,-30,57);
    glVertex3f(35,-60,57);
    glVertex3f(35,-60,60);
    glVertex3f(35,-30,60);
    glEnd();

    // ornamen depan kiri
    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.24, 0.24); // panjang
    glVertex3f(-10,130,25);
    glVertex3f(-10,-28,25);
    glVertex3f(-10,-28,20);
    glVertex3f(-10,130,20);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-5,130,25);
    glVertex3f(-5,-28,25);
    glVertex3f(-5,-28,20);
    glVertex3f(-5,130,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.38, 0.24);
    glVertex3f(-10,-28,25);
    glVertex3f(-5,-28,25);
    glVertex3f(-5,130,25);
    glVertex3f(-10,130,25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.24, 0.24); // atas kiri
    glVertex3f(-10,130,25);
    glVertex3f(-10,110,25);
    glVertex3f(-10,110,0);
    glVertex3f(-10,130,0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-5,130,25);
    glVertex3f(-5,110,25);
    glVertex3f(-5,110,0);
    glVertex3f(-5,130,0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-10,110,0);
    glVertex3f(-5,110,0);
    glVertex3f(-5,130,0);
    glVertex3f(-10,130,0);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(-10,130,25);
    glVertex3f(-10,130,0);
    glVertex3f(-5,130,0);
    glVertex3f(-5,130,25);
    glEnd();

    glBegin(GL_POLYGON); //tengah atas ornamen
    glColor3f(0.06, 0.38, 0.24);
	glVertex3f(-5,110,17);
    glVertex3f(15,110,17);
    glVertex3f(15,130,17);
    glVertex3f(-5,130,17);
    glEnd();

    // ornamen depan kanan
    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.24, 0.24); // panjang
    glVertex3f(15,130,25);
    glVertex3f(15,-28,25);
    glVertex3f(15,-28,20);
    glVertex3f(15,130,20);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(20,130,25);
    glVertex3f(20,-28,25);
    glVertex3f(20,-28,20);
    glVertex3f(20,130,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.38, 0.24);
    glVertex3f(15,-28,25);
    glVertex3f(20,-28,25);
    glVertex3f(20,130,25);
    glVertex3f(15,130,25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.24, 0.24); // atas kanan
    glVertex3f(15,130,25);
    glVertex3f(15,110,25);
    glVertex3f(15,110,0);
    glVertex3f(15,130,0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(20,130,25);
    glVertex3f(20,110,25);
    glVertex3f(20,110,0);
    glVertex3f(20,130,0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(15,110,0);
    glVertex3f(20,110,0);
    glVertex3f(20,130,0);
    glVertex3f(15,130,0);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(15,130,25);
    glVertex3f(15,130,0);
    glVertex3f(20,130,0);
    glVertex3f(20,130,25);
    glEnd();

    // depan ormanem warna biru
    glBegin(GL_POLYGON);
    glColor3f(0.17, 0.22, 0.58);
    glVertex3f(-5,-30,20.1);
    glVertex3f(15,-30,20.1);
    glVertex3f(15,110,20.1);
    glVertex3f(-5,110,20.1);
    glEnd();

    //jendela tengah ornamen
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-2,-25,20.2);
    glVertex3f(12,-25,20.2);
    glVertex3f(12,-5,20.2);
    glVertex3f(-2,-5,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-2,-25,20.2);
    glVertex3f(12,-25,20.2);
    glVertex3f(12,-5,20.2);
    glVertex3f(-2,-5,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-2,0,20.2);
    glVertex3f(12,0,20.2);
    glVertex3f(12,20,20.2);
    glVertex3f(-2,20,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-2,0,20.2);
    glVertex3f(12,0,20.2);
    glVertex3f(12,20,20.2);
    glVertex3f(-2,20,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-2,25,20.2);
    glVertex3f(12,25,20.2);
    glVertex3f(12,45,20.2);
    glVertex3f(-2,45,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-2,25,20.2);
    glVertex3f(12,25,20.2);
    glVertex3f(12,45,20.2);
    glVertex3f(-2,45,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-2,50,20.2);
    glVertex3f(12,50,20.2);
    glVertex3f(12,70,20.2);
    glVertex3f(-2,70,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-2,50,20.2);
    glVertex3f(12,50,20.2);
    glVertex3f(12,70,20.2);
    glVertex3f(-2,70,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-2,75,20.2);
    glVertex3f(12,75,20.2);
    glVertex3f(12,95,20.2);
    glVertex3f(-2,95,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-2,75,20.2);
    glVertex3f(12,75,20.2);
    glVertex3f(12,95,20.2);
    glVertex3f(-2,95,20.2);
    glEnd();
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-2,100,20.2);
    glVertex3f(12,100,20.2);
    glVertex3f(12,105,20.2);
    glVertex3f(-2,105,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-2,100,20.2);
    glVertex3f(12,100,20.2);
    glVertex3f(12,105,20.2);
    glVertex3f(-2,105,20.2);
    glEnd();
    glBegin(GL_POLYGON); // tembok menjorok
    glColor3f(0.11, 0.15, 0.38);
    glVertex3f(15,110,22);
    glVertex3f(-5,110,22);
    glVertex3f(-5,108,22);
    glVertex3f(15,108,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(15,108,22);
    glVertex3f(15,108,20);
    glVertex3f(-5,108,20);
    glVertex3f(-5,108,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(15,110,22);
    glVertex3f(15,110,20);
    glVertex3f(-5,110,20);
    glVertex3f(-5,110,22);
    glEnd();

    // jendela depan kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//1 kiri
    glVertex3f(-60,-8,20.2);
    glVertex3f(-50,-8,20.2);
    glVertex3f(-50,-25,20.2);
    glVertex3f(-60,-25,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-60,-8,20.2);
    glVertex3f(-50,-8,20.2);
    glVertex3f(-50,-25,20.2);
    glVertex3f(-60,-25,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);//1 kanan
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-42,-8,20.2);
    glVertex3f(-32,-8,20.2);
    glVertex3f(-32,-25,20.2);
    glVertex3f(-42,-25,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-42,-8,20.2);
    glVertex3f(-32,-8,20.2);
    glVertex3f(-32,-25,20.2);
    glVertex3f(-42,-25,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//2 kiri
    glVertex3f(-60,18,20.2);
    glVertex3f(-50,18,20.2);
    glVertex3f(-50,1,20.2);
    glVertex3f(-60,1,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-60,18,20.2);
    glVertex3f(-50,18,20.2);
    glVertex3f(-50,1,20.2);
    glVertex3f(-60,1,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);//2 kanan
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-42,18,20.2);
    glVertex3f(-32,18,20.2);
    glVertex3f(-32,1,20.2);
    glVertex3f(-42,1,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-42,18,20.2);
    glVertex3f(-32,18,20.2);
    glVertex3f(-32,1,20.2);
    glVertex3f(-42,1,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//3 kiri
    glVertex3f(-60,43,20.2);
    glVertex3f(-50,43,20.2);
    glVertex3f(-50,26,20.2);
    glVertex3f(-60,26,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-60,43,20.2);
    glVertex3f(-50,43,20.2);
    glVertex3f(-50,26,20.2);
    glVertex3f(-60,26,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);//3 kanan
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-42,43,20.2);
    glVertex3f(-32,43,20.2);
    glVertex3f(-32,26,20.2);
    glVertex3f(-42,26,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-42,43,20.2);
    glVertex3f(-32,43,20.2);
    glVertex3f(-32,26,20.2);
    glVertex3f(-42,26,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//4 kiri
    glVertex3f(-60,68,20.2);
    glVertex3f(-50,68,20.2);
    glVertex3f(-50,51,20.2);
    glVertex3f(-60,51,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-60,68,20.2);
    glVertex3f(-50,68,20.2);
    glVertex3f(-50,51,20.2);
    glVertex3f(-60,51,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);//4 kanan
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-42,68,20.2);
    glVertex3f(-32,68,20.2);
    glVertex3f(-32,51,20.2);
    glVertex3f(-42,51,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-42,68,20.2);
    glVertex3f(-32,68,20.2);
    glVertex3f(-32,51,20.2);
    glVertex3f(-42,51,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//5 kiri
    glVertex3f(-60,93,20.2);
    glVertex3f(-50,93,20.2);
    glVertex3f(-50,75,20.2);
    glVertex3f(-60,75,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-60,93,20.2);
    glVertex3f(-50,93,20.2);
    glVertex3f(-50,75,20.2);
    glVertex3f(-60,75,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);//5 tengah
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-42,93,20.2);
    glVertex3f(-32,93,20.2);
    glVertex3f(-32,75,20.2);
    glVertex3f(-42,75,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-42,93,20.2);
    glVertex3f(-32,93,20.2);
    glVertex3f(-32,75,20.2);
    glVertex3f(-42,75,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);//5 kanan
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25,93,20.2);
    glVertex3f(-15,93,20.2);
    glVertex3f(-15,75,20.2);
    glVertex3f(-25,75,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(-25,93,20.2);
    glVertex3f(-15,93,20.2);
    glVertex3f(-15,75,20.2);
    glVertex3f(-25,75,20.2);
    glEnd();

    // jendela depan kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//1 kiri
    glVertex3f(50,-8,20.2);
    glVertex3f(40,-8,20.2);
    glVertex3f(40,-25,20.2);
    glVertex3f(50,-25,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(50,-8,20.2);
    glVertex3f(40,-8,20.2);
    glVertex3f(40,-25,20.2);
    glVertex3f(50,-25,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//2 kiri
    glVertex3f(50,18,20.2);
    glVertex3f(40,18,20.2);
    glVertex3f(40,1,20.2);
    glVertex3f(50,1,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(50,18,20.2);
    glVertex3f(40,18,20.2);
    glVertex3f(40,1,20.2);
    glVertex3f(50,1,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//3 kiri
    glVertex3f(50,43,20.2);
    glVertex3f(40,43,20.2);
    glVertex3f(40,26,20.2);
    glVertex3f(50,26,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(50,43,20.2);
    glVertex3f(40,43,20.2);
    glVertex3f(40,26,20.2);
    glVertex3f(50,26,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//4 kiri
    glVertex3f(50,68,20.2);
    glVertex3f(40,68,20.2);
    glVertex3f(40,51,20.2);
    glVertex3f(50,51,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(50,68,20.2);
    glVertex3f(40,68,20.2);
    glVertex3f(40,51,20.2);
    glVertex3f(50,51,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);//5 kiri
    glVertex3f(40,93,20.2);
    glVertex3f(30,93,20.2);
    glVertex3f(30,75,20.2);
    glVertex3f(40,75,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(40,93,20.2);
    glVertex3f(30,93,20.2);
    glVertex3f(30,75,20.2);
    glVertex3f(40,75,20.2);
    glEnd();
    glBegin(GL_LINE_LOOP);//5 tengah
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(58,93,20.2);
    glVertex3f(48,93,20.2);
    glVertex3f(48,75,20.2);
    glVertex3f(58,75,20.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.84, 0.57, 0.24);
    glVertex3f(58,93,20.2);
    glVertex3f(48,93,20.2);
    glVertex3f(48,75,20.2);
    glVertex3f(58,75,20.2);
    glEnd();

    // depan tengah tembok menjorok kiri
    glBegin(GL_POLYGON); // 1 kiri
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(-65,-5,22);
    glVertex3f(-10,-5,22);
    glVertex3f(-10,-3,22);
    glVertex3f(-65,-3,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-65,-5,22);
    glVertex3f(-65,-5,20);
    glVertex3f(-10,-5,20);
    glVertex3f(-10,-5,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-65,-3,22);
    glVertex3f(-65,-3,20);
    glVertex3f(-10,-3,20);
    glVertex3f(-10,-3,22);
    glEnd();

    glBegin(GL_POLYGON); // 2 kiri
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(-65,22,22);
    glVertex3f(-10,22,22);
    glVertex3f(-10,20,22);
    glVertex3f(-65,20,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-65,20,22);
    glVertex3f(-65,20,20);
    glVertex3f(-10,20,20);
    glVertex3f(-10,20,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-65,22,22);
    glVertex3f(-65,22,20);
    glVertex3f(-10,22,20);
    glVertex3f(-10,22,22);
    glEnd();

    glBegin(GL_POLYGON); // 3 kiri
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(-65,47,22);
    glVertex3f(-10,47,22);
    glVertex3f(-10,45,22);
    glVertex3f(-65,45,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-65,45,22);
    glVertex3f(-65,45,20);
    glVertex3f(-10,45,20);
    glVertex3f(-10,45,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-65,47,22);
    glVertex3f(-65,47,20);
    glVertex3f(-10,47,20);
    glVertex3f(-10,47,22);
    glEnd();

    glBegin(GL_POLYGON); // 4 kiri
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(-65,72,22);
    glVertex3f(-10,72,22);
    glVertex3f(-10,70,22);
    glVertex3f(-65,70,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-65,70,22);
    glVertex3f(-65,70,20);
    glVertex3f(-10,70,20);
    glVertex3f(-10,70,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-65,72,22);
    glVertex3f(-65,72,20);
    glVertex3f(-10,72,20);
    glVertex3f(-10,72,22);
    glEnd();

    glBegin(GL_POLYGON); // 5 kiri
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(-65,97,22);
    glVertex3f(-10,97,22);
    glVertex3f(-10,95,22);
    glVertex3f(-65,95,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-65,95,22);
    glVertex3f(-65,95,20);
    glVertex3f(-10,95,20);
    glVertex3f(-10,95,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-65,97,22);
    glVertex3f(-65,97,20);
    glVertex3f(-10,97,20);
    glVertex3f(-10,97,22);
    glEnd();

    glBegin(GL_POLYGON); // 6 kiri
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(-65,110,22);
    glVertex3f(-10,110,22);
    glVertex3f(-10,108,22);
    glVertex3f(-65,108,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-65,108,22);
    glVertex3f(-65,108,20);
    glVertex3f(-10,108,20);
    glVertex3f(-10,108,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-65,110,22);
    glVertex3f(-65,110,20);
    glVertex3f(-10,110,20);
    glVertex3f(-10,110,22);
    glEnd();

    // depan tengah tembok menjorok kanan
    glBegin(GL_POLYGON); // 1
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(20,-5,22);
    glVertex3f(65,-5,22);
    glVertex3f(65,-3,22);
    glVertex3f(20,-3,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(65,-5,22);
    glVertex3f(65,-5,20);
    glVertex3f(20,-5,20);
    glVertex3f(20,-5,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(65,-3,22);
    glVertex3f(65,-3,20);
    glVertex3f(20,-3,20);
    glVertex3f(20,-3,22);
    glEnd();

    glBegin(GL_POLYGON); // 2
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(65,22,22);
    glVertex3f(20,22,22);
    glVertex3f(20,20,22);
    glVertex3f(65,20,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(65,20,22);
    glVertex3f(65,20,20);
    glVertex3f(20,20,20);
    glVertex3f(20,20,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(65,22,22);
    glVertex3f(65,22,20);
    glVertex3f(20,22,20);
    glVertex3f(20,22,22);
    glEnd();

    glBegin(GL_POLYGON); // 3
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(65,47,22);
    glVertex3f(20,47,22);
    glVertex3f(20,45,22);
    glVertex3f(65,45,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(65,45,22);
    glVertex3f(65,45,20);
    glVertex3f(20,45,20);
    glVertex3f(20,45,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(65,47,22);
    glVertex3f(65,47,20);
    glVertex3f(20,47,20);
    glVertex3f(20,47,22);
    glEnd();

    glBegin(GL_POLYGON); // 4
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(65,72,22);
    glVertex3f(20,72,22);
    glVertex3f(20,70,22);
    glVertex3f(65,70,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(65,70,22);
    glVertex3f(65,70,20);
    glVertex3f(20,70,20);
    glVertex3f(20,70,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(65,72,22);
    glVertex3f(65,72,20);
    glVertex3f(20,72,20);
    glVertex3f(20,72,22);
    glEnd();

    glBegin(GL_POLYGON); // 5
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(65,97,22);
    glVertex3f(20,97,22);
    glVertex3f(20,95,22);
    glVertex3f(65,95,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(65,95,22);
    glVertex3f(65,95,20);
    glVertex3f(20,95,20);
    glVertex3f(20,95,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(65,97,22);
    glVertex3f(65,97,20);
    glVertex3f(20,97,20);
    glVertex3f(20,97,22);
    glEnd();

    glBegin(GL_POLYGON); // 6
    glColor3f(0.54, 0.36, 0.26);
    glVertex3f(65,110,22);
    glVertex3f(20,110,22);
    glVertex3f(20,108,22);
    glVertex3f(65,108,22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(65,108,22);
    glVertex3f(65,108,20);
    glVertex3f(20,108,20);
    glVertex3f(20,108,22);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(65,110,22);
    glVertex3f(65,110,20);
    glVertex3f(20,110,20);
    glVertex3f(20,110,22);
    glEnd();

    //palang depan kiri
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.44, 0.47);
    glVertex3f(-100,-60,30);
    glVertex3f(-90,-60,30);
    glVertex3f(-90,-30,30);
    glVertex3f(-100,-30,30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.29, 0.31);
    glVertex3f(-100,-30,10);
    glVertex3f(-100,-60,10);
    glVertex3f(-100,-60,30);
    glVertex3f(-100,-30,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-90,-30,10);
    glVertex3f(-90,-60,10);
    glVertex3f(-90,-60,30);
    glVertex3f(-90,-30,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-100,-60,10);
    glVertex3f(-90,-60,10);
    glVertex3f(-90,-30,10);
    glVertex3f(-100,-30,10);
    glEnd();
    //palang depan kiri2
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.44, 0.47);
    glVertex3f(-80,-60,30);
    glVertex3f(-70,-60,30);
    glVertex3f(-70,-30,30);
    glVertex3f(-80,-30,30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.29, 0.31);
    glVertex3f(-80,-30,20);
    glVertex3f(-80,-60,20);
    glVertex3f(-80,-60,30);
    glVertex3f(-80,-30,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-70,-30,20);
    glVertex3f(-70,-60,20);
    glVertex3f(-70,-60,30);
    glVertex3f(-70,-30,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-80,-60,20);
    glVertex3f(-70,-60,20);
    glVertex3f(-70,-30,20);
    glVertex3f(-80,-30,20);
    glEnd();
    //palang tengah lobby
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.44, 0.47);
    glVertex3f(-20,-60,20);
    glVertex3f(-10,-60,20);
    glVertex3f(-10,-30,20);
    glVertex3f(-20,-30,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.29, 0.31);
    glVertex3f(-20,-30,10);
    glVertex3f(-20,-60,10);
    glVertex3f(-20,-60,20);
    glVertex3f(-20,-30,20);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-10,-30,10);
    glVertex3f(-10,-60,10);
    glVertex3f(-10,-60,20);
    glVertex3f(-10,-30,20);
    glEnd();
    //palang tengah lobby2
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.44, 0.47);
    glVertex3f(20,-60,20);
    glVertex3f(30,-60,20);
    glVertex3f(30,-30,20);
    glVertex3f(20,-30,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.29, 0.31);
    glVertex3f(20,-30,10);
    glVertex3f(20,-60,10);
    glVertex3f(20,-60,20);
    glVertex3f(20,-30,20);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(30,-30,10);
    glVertex3f(30,-60,10);
    glVertex3f(30,-60,20);
    glVertex3f(30,-30,20);
    glEnd();

    // KIRI
    glBegin(GL_POLYGON);//1
    glColor3f(0.53, 0.35, 0.26);
    glVertex3f(-105,110,30);
    glVertex3f(-105,-30,30);
    glVertex3f(-105,-30,-75);
    glVertex3f(-105,110,-75);
    glEnd();
    glBegin(GL_POLYGON);//2
    glColor3f(0.53, 0.35, 0.26);
    glVertex3f(-105,75,-75);
    glVertex3f(-105,-30,-75);
    glVertex3f(-105,-30,-170);
    glVertex3f(-105,75,-170);
    glEnd();
    glBegin(GL_POLYGON);//3
    glColor3f(0.82, 0.82, 0.82);
    glVertex3f(-105,95,-75);
    glVertex3f(-105,95,-200);
    glVertex3f(-105,75,-200);
    glVertex3f(-105,75,-75);
    glEnd();

    //atas kiri
    glPushMatrix();
    glTranslatef(0,0,0); //1
    gariskiri();
    glTranslatef(0,0,-30); //2
    gariskiri();
    glTranslatef(0,0,-30); //3
    gariskiri();
    glPopMatrix();

    //rod kiri
    glBegin(GL_POLYGON);
    glColor3f(0.52, 0.52, 0.52);
    glVertex3f(-105,95,-170);
    glVertex3f(-105,-30,-170);
    glVertex3f(-108,-30,-170);
    glVertex3f(-108,95,-170);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.82, 0.82, 0.82);
    glVertex3f(-108,-30,-170);
    glVertex3f(-108,95,-170);
    glVertex3f(-108,95,-173);
    glVertex3f(-108,-30,-173);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.52, 0.52, 0.52);
    glVertex3f(-108,95,-173);
    glVertex3f(-108,-30,-173);
    glVertex3f(-105,-30,-173);
    glVertex3f(-105,95,-173);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.52, 0.52, 0.52);
    glVertex3f(-105,95,-197);
    glVertex3f(-105,-30,-197);
    glVertex3f(-108,-30,-197);
    glVertex3f(-108,95,-197);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.82, 0.82, 0.82);
    glVertex3f(-108,-30,-197);
    glVertex3f(-108,95,-197);
    glVertex3f(-108,95,-200);
    glVertex3f(-108,-30,-200);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.52, 0.52, 0.52);
    glVertex3f(-108,95,-200);
    glVertex3f(-108,-30,-200);
    glVertex3f(-105,-30,-200);
    glVertex3f(-105,95,-200);
    glEnd();

    // jendela putih
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.95);
     glVertex3f(-105.1,-30,-173);
    glVertex3f(-105.1,75,-173);
    glVertex3f(-105.1,75,-200);
    glVertex3f(-105.1,-30,-200);
    glEnd();

    // jendela kiri
    glPushMatrix();
    glTranslatef(0,0,0); //1
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,-75,-25); //2
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,-75,-25); //3
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,-75,-25);//4
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,-75,-25); //5
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,-75,-25); //6
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,-75,-25);//7
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,-75,-25);//8
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glTranslatef(0,25,0);
    jendelakiri();
    glPopMatrix();

    // gambar kiri gelap
    glPushMatrix();
    glTranslatef(0,0,0); //1
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,-75,-25); //2
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,-75,-25); //3
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,-75,-25);//4
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,-75,-25); //5
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,-75,-25); //6
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,-75,-25);//7
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,-75,-25);//8
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glTranslatef(0,25,0);
    gambarkiri();
    glPopMatrix();
    glBegin(GL_POLYGON); //1
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-105.1,100,30);
    glVertex3f(-105.1,72,30);
    glVertex3f(-105.1,72,20);
    glVertex3f(-105.1,100,20);
    glEnd();
    glBegin(GL_POLYGON); //2
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-105.1,100,5);
    glVertex3f(-105.1,72,5);
    glVertex3f(-105.1,72,-5);
    glVertex3f(-105.1,100,-5);
    glEnd();
    glBegin(GL_POLYGON); //3
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-105.1,100,-20);
    glVertex3f(-105.1,72,-20);
    glVertex3f(-105.1,72,-30);
    glVertex3f(-105.1,100,-30);
    glEnd();
    glBegin(GL_POLYGON); //4
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-105.1,100,-45);
    glVertex3f(-105.1,72,-45);
    glVertex3f(-105.1,72,-55);
    glVertex3f(-105.1,100,-55);
    glEnd();

    // kiri tembok kecil menjorok
    glPushMatrix();
    glTranslatef(0,0,0); //1
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,-75,-25); //2
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,-75,-25); //3
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,-75,-25);//4
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,-75,-25); //5
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,-75,-25); //6
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,-75,-25);//7
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,-75,-25);//8
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glTranslatef(0,25,0);
    pagarkiri();
    glPopMatrix();

    // ATAS
    glBegin(GL_QUADS); // tengah
    glColor3f(0.42, 0.22, 0.18);
    glVertex3f(-65,110,20);
    glVertex3f(-65,110,-75);
    glVertex3f(65,110,-75);
    glVertex3f(65,110,20);
    glEnd();
    glBegin(GL_QUADS); // kiri
    glVertex3f(-105,110,30);
    glVertex3f(-105,110,-75);
    glVertex3f(-65,110,-75);
    glVertex3f(-65,110,30);
    glEnd();
    glBegin(GL_QUADS); // kanan
    glVertex3f(65,110,25);
    glVertex3f(65,110,-200);
    glVertex3f(115,110,-200);
    glVertex3f(115,110,25);
    glEnd();
    glBegin(GL_QUADS); // kiri bawah
    glColor3f(0.82, 0.82, 0.82);
    glVertex3f(-105,95,-75);
    glVertex3f(-105,95,-200);
    glVertex3f(65,95,-200);
    glVertex3f(65,95,-75);
    glEnd();
    glBegin(GL_POLYGON); //bidang 1
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(-105,95,-75);
    glVertex3f(-105,110,-75);
    glVertex3f(65,110,-75);
    glVertex3f(65,95,-75);
    glEnd();
    glBegin(GL_POLYGON); //bidang 2
    glVertex3f(65,110,-75);
    glVertex3f(65,95,-75);
    glVertex3f(65,95,-200);
    glVertex3f(65,110,-200);
    glEnd();
    glBegin(GL_POLYGON); //bidang 3
    glColor3f(0.26, 0.20, 0.19);
    glVertex3f(65,95,-200);
    glVertex3f(65,110,-200);
    glVertex3f(115,110,-200);
    glVertex3f(115,95,-200);
    glEnd();

    // KANAN
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.35, 0.26);
    glVertex3f(115,110,25);
    glVertex3f(115,-60,25);
    glVertex3f(115,-60,-200);
    glVertex3f(115,110,-200);
    glEnd();

    // BELAKANG
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.35, 0.26);
    glVertex3f(-105,-60,-200);
    glVertex3f(-105,95,-200);
    glVertex3f(115,95,-200);
    glVertex3f(115,-60,-200);
    glEnd();

    // BAWAH
    glBegin(GL_QUADS);
    glColor3f(0.65, 0.51, 0.40);
    glVertex3f(-120,-60,60);
    glVertex3f(-120,-60,-220);
    glVertex3f(140,-60,-220);
    glVertex3f(140,-60,60);
    glEnd();


    //----------------------------------------------------------------------

    //TULISAN ROYAL PALM YANG DI ATAS

    //KATA PALM
    //HURUF M
    //kanan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, 27.5);
    glVertex3f(-105, 110, 30);
    glVertex3f(-105, 120, 30);
    glVertex3f(-105, 120, 27.5);
    glEnd();
    //kanan miring
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, 22.5);
    glVertex3f(-105, 110, 25);
    glVertex3f(-105, 120, 30);
    glVertex3f(-105, 120, 27.5);
    glEnd();
    //kiri miring
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, 22.5);
    glVertex3f(-105, 110, 25);
    glVertex3f(-105, 120, 30-10);
    glVertex3f(-105, 120, 27.5-10);
    glEnd();
    //kiri
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, 27.5-10);
    glVertex3f(-105, 110, 30-10);
    glVertex3f(-105, 120, 30-10);
    glVertex3f(-105, 120, 27.5-10);
    glEnd();

    //HURUF L
    //tegak
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, 7.5);
    glVertex3f(-105, 110, 10);
    glVertex3f(-105, 120, 10);
    glVertex3f(-105, 120, 7.5);
    glEnd();
    //tidur
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, 10);
    glVertex3f(-105, 110, 15);
    glVertex3f(-105, 112.5, 15);
    glVertex3f(-105, 112.5, 10);
    glEnd();

    //HURUF A
    //kanan miring
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, 2.5);
    glVertex3f(-105, 110, 5);
    glVertex3f(-105, 120, 2.5);
    glVertex3f(-105, 120, 0);
    glEnd();
    //kiri miring
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -2.5);
    glVertex3f(-105, 110, 0);
    glVertex3f(-105, 120, 2.5);
    glVertex3f(-105, 120, 0);
    glEnd();
    //tengah
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 111.5, -1.25);
    glVertex3f(-105, 111.5, 3.75);
    glVertex3f(-105, 112.5, 3.75);
    glVertex3f(-105, 112.5, -1.25);
    glEnd();

    //HURUF P
    //setegah lingkaran tengah
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 115, -7.5);
    glVertex3f(-105, 115, -5);
    glVertex3f(-105, 117.5, -5);
    glVertex3f(-105, 117.5, -7.5);
    glEnd();
    //setegah lingkaran atas
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 117.5, -10);
    glVertex3f(-105, 117.5, -5);
    glVertex3f(-105, 120, -5);
    glVertex3f(-105, 120, -10);
    glEnd();
    //setegah lingkaran bawah
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 112.5, -10);
    glVertex3f(-105, 112.5, -5);
    glVertex3f(-105, 115, -5);
    glVertex3f(-105, 115, -10);
    glEnd();
    //tegak
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -12.5);
    glVertex3f(-105, 110, -10);
    glVertex3f(-105, 120, -10);
    glVertex3f(-105, 120, -12.5);
    glEnd();

    //KATA ROYAL
    //HURUF L
    //tegak
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -30);
    glVertex3f(-105, 110, -27.5);
    glVertex3f(-105, 120, -27.5);
    glVertex3f(-105, 120, -30);
    glEnd();
    //tidur
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -27.5);
    glVertex3f(-105, 110, -22.5);
    glVertex3f(-105, 112.5, -22.5);
    glVertex3f(-105, 112.5, -27.5);
    glEnd();

    //HURUF A
    int b = 37.5;
    //kanan miring
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, 2.5-b);
    glVertex3f(-105, 110, 5-b);
    glVertex3f(-105, 120, 2.5-b);
    glVertex3f(-105, 120, 0-b);
    glEnd();
    //kiri miring
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -2.5-b);
    glVertex3f(-105, 110, 0-b);
    glVertex3f(-105, 120, 2.5-b);
    glVertex3f(-105, 120, 0-b);
    glEnd();
    //tengah
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 111.5, -1.25-b);
    glVertex3f(-105, 111.5, 3.75-b);
    glVertex3f(-105, 112.5, 3.75-b);
    glVertex3f(-105, 112.5, -1.25-b);
    glEnd();

    //HURUF Y
    int c = 17.5;
    int d = 2.5;
    //tegak
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -30-c+d);
    glVertex3f(-105, 110, -27.5-c+d);
    glVertex3f(-105, 115, -27.5-c+d);
    glVertex3f(-105, 115, -30-c+d);
    glEnd();

    //miring ke kiri
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 115, -30-c+d);
    glVertex3f(-105, 115, -27.5-c+d);
    glVertex3f(-105, 120, -27.5-c-2.5+d);
    glVertex3f(-105, 120, -30-c-2.5+d);
    glEnd();

    //miring ke kanan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 115, -30-c+d);
    glVertex3f(-105, 115, -27.5-c+d);
    glVertex3f(-105, 120, -27.5-c+2.5+d);
    glVertex3f(-105, 120, -30-c+2.5+d);
    glEnd();

    //HURUF O
    int a = 17.5;
    //tegak kanan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -32.5-a);
    glVertex3f(-105, 110, -35-a);
    glVertex3f(-105, 120, -35-a);
    glVertex3f(-105, 120, -32.5-a);
    glEnd();
    //bawah
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -37.5-a);
    glVertex3f(-105, 110, -32.5-a);
    glVertex3f(-105, 112.5, -32.5-a);
    glVertex3f(-105, 112.5, -37.5-a);
    glEnd();
    //atas
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 117.5, -37.5-a);
    glVertex3f(-105, 117.5, -32.5-a);
    glVertex3f(-105, 120, -32.5-a);
    glVertex3f(-105, 120, -37.5-a);
    glEnd();
    //tegak kiri
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -37.5-a);
    glVertex3f(-105, 110, -40-a);
    glVertex3f(-105, 120, -40-a);
    glVertex3f(-105, 120, -37.5-a);
    glEnd();

    //HURUF P
    int e = 55;
    //setegah lingkaran tengah
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 115, -7.5-e);
    glVertex3f(-105, 115, -5-e);
    glVertex3f(-105, 117.5, -5-e);
    glVertex3f(-105, 117.5, -7.5-e);
    glEnd();
    //setegah lingkaran atas
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 117.5, -10-e);
    glVertex3f(-105, 117.5, -5-e);
    glVertex3f(-105, 120, -5-e);
    glVertex3f(-105, 120, -10-e);
    glEnd();
    //setegah lingkaran bawah
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 112.5, -10-e);
    glVertex3f(-105, 112.5, -5-e);
    glVertex3f(-105, 115, -5-e);
    glVertex3f(-105, 115, -10-e);
    glEnd();
    //tegak
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -12.5-e);
    glVertex3f(-105, 110, -10-e);
    glVertex3f(-105, 120, -10-e);
    glVertex3f(-105, 120, -12.5-e);
    glEnd();
    //kaki miring
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-105, 110, -13.5-e+5);
    glVertex3f(-105, 110, -10-e+5);
    glVertex3f(-105, 115, -10-e);
    glVertex3f(-105, 115, -12.5-e);
    glEnd();

}


void ukur (int lebar, int tinggi){
	if(tinggi==0) tinggi=1;
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, lebar/tinggi, 5, 1000);
	glTranslatef(0,0,-600); // glTranslatef(0,0,0); lihat bagian dalam
	glMatrixMode(GL_MODELVIEW);
}

void myInit(void){
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glEnable (GL_DEPTH_TEST);

	glMatrixMode (GL_MODELVIEW);
}

void tampilan(void){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0,0,3,0,0,0,0,1,0);
	glRotatef (xrot, 1,0,0);
	glRotatef (yrot, 0,1,0);
	glTranslatef(0,0,zrot);
	glPushMatrix();
    gedung();
	glPopMatrix();
	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y){
	if (key == 'a' or key == 'A')
		yrot -= 5;
	else if (key == 'd' or key == 'D')
		yrot += 5;
	else if (key == 'w' or key == 'W')
		zrot += 5;
	else if (key == 's' or key == 'S')
		zrot -= 5;
    else if (key == 'r' or key == 'R')
        xrot += 5;
    else if (key == 't' or key == 'T')
        xrot -= 5;
    else if (key == 'x'){
        exit(1);
    }
   switch(key)
   {
       case 'g':
        if (is_depth)
        {
            is_depth=0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth=1;
            glEnable(GL_DEPTH_TEST);
        }
    }

}
/*
tombol pada keyboard:
"a": ke kiri
"d": ke kanan
"w": ke depan
"s": ke belakang
"t" : ke atas
"r" : ke bawah
"g" : transparankan rumah
*/


void idle (){
	if (!mouseDown){
	xrot += 0;
	yrot += 0;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else
	mouseDown = false;
}

void mouseMotion (int x, int y){
	if(mouseDown){
		yrot = x - xdiff;
		xrot = y + ydiff;
		glutPostRedisplay;
	}
}

void timer (int value){
	glutPostRedisplay();
	glutTimerFunc(100,timer,0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(900, 750);
    glutCreateWindow("TAS-672016018");
    myInit();
    glutDisplayFunc(tampilan);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukur);
    glutIdleFunc(idle);
    glutTimerFunc(100,timer,0);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}

