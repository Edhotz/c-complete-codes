


void inp_handler(int i) 
{
  int flag;

  flag = -1;

  switch (i) {
  case 1:
  case 2:
  case 3:
    flag = 0;
    break;
  case 4:
    flag = 1;
    break;
  case 5:
    error(flag);
    break;
  default:
    process(i);
  }
  
}
