void _strwrite(char* string)
{
  char* p_strdst = (char*)(0xb8000);//ָ���Դ�Ŀ�ʼ��ַ
  while (*string)
  {
    *p_strdst = *string++;
    p_strdst += 2;
  }
  return;
}

void printf(char* fmt, ...)
{
  _strwrite(fmt);
  return;
}