void setup() {
  size(500, 500);
}
float a=0;
void draw() {
  background(#FFFFF2);
  rectMode(CENTER);
  for (int i=0; i<6; i++) {
    float x = 250+200*cos(a+PI/3*i), y = 250+100*sin(a+PI/3*i);
    rect(x, y, 10, 10);
  }
  a +=0.9;
}
