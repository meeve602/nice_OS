#include "vgastr.h"
//#include "bug.h"
void main()
{
  printf("Hello OS!");
  return;
} 
//而且，比方说 我在aaa.h里定义了一个函数的声明，然后我在aaa.h的    !!!同一个目录!!!    下建立aaa.c ，
//aaa.c里定义了这个函数的实现，然后是在main函数所在.c文件里#include这个aaa.h 然后我就可以使用这个函数了。 
//main在运行时就会找到这个定义了这个函数的aaa.c文件