# 1 "./hello5.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./hello5.cil.c"
# 9 "hello5.c"
void __globinit_hello5(void) ;
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
# 9 "hello5.c"
int main(int argc , char **argv )
{ int x ;
  int y ;
  int z ;
  int __retres6 ;

  {
  __globinit_hello5();
  __CrestCall(2, 1);
  __CrestStore(1, (unsigned long )(& argc));
# 17 "hello5.c"
  __CrestInt(& x);
# 18 "hello5.c"
  __CrestInt(& y);
# 19 "hello5.c"
  __CrestInt(& z);
  {
  __CrestLoad(9, (unsigned long )(& x), (long long )x);
  __CrestLoad(8, (unsigned long )(& y), (long long )y);
  __CrestApply2(7, 2, (long long )(x * y));
  __CrestLoad(6, (unsigned long )(& z), (long long )z);
  __CrestApply2(5, 2, (long long )((x * y) * z));
  __CrestLoad(4, (unsigned long )0, (long long )30);
  __CrestApply2(3, 12, (long long )((x * y) * z == 30));
# 24 "hello5.c"
  if ((x * y) * z == 30) {
    __CrestBranch(10, 3, 1);
    {
    __CrestLoad(22, (unsigned long )(& x), (long long )x);
    __CrestLoad(21, (unsigned long )(& y), (long long )y);
    __CrestApply2(20, 2, (long long )(x * y));
    __CrestLoad(19, (unsigned long )(& y), (long long )y);
    __CrestApply2(18, 2, (long long )((x * y) * y));
    __CrestLoad(17, (unsigned long )(& z), (long long )z);
    __CrestApply2(16, 2, (long long )(((x * y) * y) * z));
    __CrestLoad(15, (unsigned long )(& z), (long long )z);
    __CrestApply2(14, 2, (long long )((((x * y) * y) * z) * z));
    __CrestLoad(13, (unsigned long )0, (long long )450);
    __CrestApply2(12, 12, (long long )((((x * y) * y) * z) * z == 450));
# 25 "hello5.c"
    if ((((x * y) * y) * z) * z == 450) {
      __CrestBranch(23, 4, 1);
      {
      __CrestLoad(33, (unsigned long )(& x), (long long )x);
      __CrestLoad(32, (unsigned long )(& x), (long long )x);
      __CrestApply2(31, 2, (long long )(x * x));
      __CrestLoad(30, (unsigned long )(& y), (long long )y);
      __CrestApply2(29, 2, (long long )((x * x) * y));
      __CrestLoad(28, (unsigned long )(& z), (long long )z);
      __CrestApply2(27, 2, (long long )(((x * x) * y) * z));
      __CrestLoad(26, (unsigned long )0, (long long )60);
      __CrestApply2(25, 12, (long long )(((x * x) * y) * z == 60));
# 26 "hello5.c"
      if (((x * x) * y) * z == 60) {
        __CrestBranch(34, 5, 1);
        __CrestLoad(36, (unsigned long )(& x), (long long )x);
        __CrestLoad(37, (unsigned long )(& y), (long long )y);
        __CrestLoad(38, (unsigned long )(& z), (long long )z);
# 27 "hello5.c"
        printf((char const * __restrict )"GOAL %d %d %d\n", x, y, z);
        __CrestClearStack(39);
        __CrestLoad(40, (unsigned long )0, (long long )1);
        __CrestStore(41, (unsigned long )(& __retres6));
# 28 "hello5.c"
        __retres6 = 1;
        goto return_label;
      } else {
        __CrestBranch(35, 8, 0);

      }
      }
    } else {
      __CrestBranch(24, 9, 0);

    }
    }
  } else {
    __CrestBranch(11, 10, 0);

  }
  }
  __CrestLoad(42, (unsigned long )0, (long long )0);
  __CrestStore(43, (unsigned long )(& __retres6));
# 33 "hello5.c"
  __retres6 = 0;
  return_label:
  {
  __CrestLoad(44, (unsigned long )(& __retres6), (long long )__retres6);
  __CrestReturn(45);
# 9 "hello5.c"
  return (__retres6);
  }
}
}
void __globinit_hello5(void)
{

  {
  __CrestInit();
}
}
