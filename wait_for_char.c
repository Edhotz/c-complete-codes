


wait_for_char(void) 
{
  char ch;
  ch = '\0';

  while(ch != 'A') {
    ch = getchar();
  }
  return ch
}
