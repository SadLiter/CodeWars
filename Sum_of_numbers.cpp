int get_sum(int a, int b)
{
  int sum = 0;
  
  if (a <= b) {
    for (a; a <= b; ++a) {
      sum += a;
    }    
  }
  else if (b < a) {
    for (b; b <= a; ++b) {
      sum += b;
    }
  }
  return sum;
}