void setup(){
  size(620, 620);
}
int[][]board = new int[10][10];
void mousePressed(){
  int i = (mouseY-10) / 60, j = (mouseX-10) / 60;
  if(mouseButton==LEFT){
    board[i][j]=1;
  }else if(mouseButton==RIGHT)board[i][j]=2;
  else if(mouseButton==CENTER)board[i][j]=0;
}
void draw(){
  background(245, 216, 142);
  for(int i=0; i<10; i++){
    for(int j=0;j<10;j++){
      int x =10+j*60,y=10+i*60;
      fill(245,216,142);
      strokeWeight(2);
      rect(x,y,60,60);
      if(board[i][j]==1){
        fill(0);
        ellipse(40+j*60,40+i*60,50,50);
      }else if (board[i][j]==2){
       fill(255);
       ellipse(40+j*60,40+i*60,50,50);
      }
    }
  }
}
