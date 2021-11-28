int bouncingBall(double h, double bounce, double window) {
  if(h>0 && bounce>0.0 && bounce<1.0 && window<h)
  {
    int count=1;
    double raised_height=bounce*h;
    while(1)
    {
      if(raised_height>window)
        count+=2;
      else
        break;
      raised_height*=bounce;
    }
    return count;
  }
  else
    return -1;
    // your code;
}
