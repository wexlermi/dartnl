# 1 "./hello1.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./hello1.cil.c"
# 9 "hello1.c"
void __globinit_hello1(void) ;
extern void __CrestInit(void) __attribute__((__crest_skip__)) ;
extern void __CrestHandleReturn(int id , long long val ) __attribute__((__crest_skip__)) ;
extern void __CrestReturn(int id ) __attribute__((__crest_skip__)) ;
extern void __CrestCall(int id , unsigned int fid ) __attribute__((__crest_skip__)) ;
extern void __CrestBranch(int id , int bid , unsigned char b ) __attribute__((__crest_skip__)) ;
extern void __CrestApply2(int id , int op , long long val ) __attribute__((__crest_skip__)) ;
extern void __CrestApply1(int id , int op , long long val ) __attribute__((__crest_skip__)) ;
extern void __CrestClearStack(int id ) __attribute__((__crest_skip__)) ;
extern void __CrestStore(int id , unsigned long addr ) __attribute__((__crest_skip__)) ;
extern void __CrestLoad(int id , unsigned long addr , long long val ) __attribute__((__crest_skip__)) ;
# 202 "../bin/../include/crest.h"
extern void __CrestInt(int *x ) __attribute__((__crest_skip__)) ;
# 363 "/usr/include/stdio.h"
extern int printf(char const * __restrict __format , ...) ;
# 9 "hello1.c"
int main(int argc , char **argv )
{ int w ;
  int x ;
  int y ;
  int z ;
  int __retres7 ;

  {
  __globinit_hello1();
  __CrestCall(2, 1);
  __CrestStore(1, (unsigned long )(& argc));
# 16 "hello1.c"
  __CrestInt(& x);
# 17 "hello1.c"
  __CrestInt(& y);
# 18 "hello1.c"
  __CrestInt(& z);
# 19 "hello1.c"
  __CrestInt(& w);
  {
  __CrestLoad(9, (unsigned long )(& x), (long long )x);
  __CrestLoad(8, (unsigned long )(& y), (long long )y);
  __CrestApply2(7, 2, (long long )(x * y));
  __CrestLoad(6, (unsigned long )(& z), (long long )z);
  __CrestApply2(5, 0, (long long )(x * y + z));
  __CrestLoad(4, (unsigned long )0, (long long )0);
  __CrestApply2(3, 12, (long long )(x * y + z == 0));
# 20 "hello1.c"
  if (x * y + z == 0) {
    __CrestBranch(10, 3, 1);
    __CrestLoad(16, (unsigned long )(& x), (long long )x);
    __CrestLoad(15, (unsigned long )(& y), (long long )y);
    __CrestApply2(14, 2, (long long )(x * y));
    __CrestLoad(13, (unsigned long )(& z), (long long )z);
    __CrestApply2(12, 2, (long long )((x * y) * z));
    __CrestStore(17, (unsigned long )(& w));
# 21 "hello1.c"
    w = (x * y) * z;
    {
    __CrestLoad(26, (unsigned long )(& w), (long long )w);
    __CrestLoad(25, (unsigned long )(& z), (long long )z);
    __CrestLoad(24, (unsigned long )(& x), (long long )x);
    __CrestLoad(23, (unsigned long )(& x), (long long )x);
    __CrestApply2(22, 2, (long long )(x * x));
    __CrestLoad(21, (unsigned long )(& y), (long long )y);
    __CrestApply2(20, 2, (long long )((x * x) * y));
    __CrestApply2(19, 0, (long long )(z + (x * x) * y));
    __CrestApply2(18, 12, (long long )(w == z + (x * x) * y));
# 22 "hello1.c"
    if (w == z + (x * x) * y) {
      __CrestBranch(27, 5, 1);
      __CrestLoad(29, (unsigned long )(& x), (long long )x);
      __CrestLoad(30, (unsigned long )(& y), (long long )y);
      __CrestLoad(31, (unsigned long )(& z), (long long )z);
      __CrestLoad(32, (unsigned long )(& w), (long long )w);
# 23 "hello1.c"
      printf((char const * __restrict )"GOAL %d %d %d %d\n", x, y, z, w);
      __CrestClearStack(33);
      __CrestLoad(34, (unsigned long )0, (long long )1);
      __CrestStore(35, (unsigned long )(& __retres7));
# 24 "hello1.c"
      __retres7 = 1;
      goto return_label;
    } else {
      __CrestBranch(28, 8, 0);

    }
    }
  } else {
    __CrestBranch(11, 9, 0);

  }
  }
  __CrestLoad(36, (unsigned long )0, (long long )0);
  __CrestStore(37, (unsigned long )(& __retres7));
# 27 "hello1.c"
  __retres7 = 0;
  return_label:
  {
  __CrestLoad(38, (unsigned long )(& __retres7), (long long )__retres7);
  __CrestReturn(39);
# 9 "hello1.c"
  return (__retres7);
  }
}
}
void __globinit_hello1(void)
{

  {
  __CrestInit();
}
}
