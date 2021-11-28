int nbYear(int p0, double percent, int aug, int p) {
  int i=1;  
  while(p0<p)
    {
      p0 = p0 + p0*(percent/100.0)+aug;
      i=i+1;
    }
    return (i-1);
}
