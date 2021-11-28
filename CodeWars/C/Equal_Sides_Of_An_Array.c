int left_sum(const int *values,int i){
  int sum=0;
  for(int j=0;j<i;j++)
  {
    sum+=values[j];
  }
  return sum;
}
int right_sum(const int *values,int i,int length){
  int sum=0;
  for(int j=i+1;j<length;j++){
    sum+=values[j];
  }
  return sum;
}
int find_even_index(const int *values, int length) {
  for(int i=0;i<length;i++)
  {
    if(left_sum(values,i)==right_sum(values,i,length))
    {
      return i;
    }
  }
  return -1;
}
