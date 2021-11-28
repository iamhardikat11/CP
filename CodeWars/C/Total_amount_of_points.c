int points(const char* const games[10]) {

    // <---- hajime!
  int points=0;
  for(int i=0;i<10;i++)
  {
    int diff=games[i][0]-games[i][2];
    if(diff>0)
      points+=3;
    if(diff==0)
      points+=1;
  }
  return points;

}
