FImage img:
void setup(){
    size(300,300);
    img = loadImage("gopher.png");
}
float a = 0;
void draw(){
    a+= 0.03;
    background(128);
    float x =100+0*cos(a),y=250+50*sin(a);
    image(img, x, y,100,100;);
}
