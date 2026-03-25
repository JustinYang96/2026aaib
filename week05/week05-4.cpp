//week05-4
int[] a = {10,20,30,40};
size(401,101);
for (int i=0;i<4;i++){
  fill(#FFFFF2);
  rect(i*100,0,100,100);
  fill(0);
  textSize(30);
  text("a[i]:"+a[i],i*100,50);
}
