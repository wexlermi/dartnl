# 1 "./hello.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./hello.cil.c"
# 9 "hello.c"
void __globinit_hello(void) ;
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
# 9 "hello.c"
int main(int argc , char **argv )
{ int x ;
  int y ;
  int z ;
  int __retres6 ;

  {
  __globinit_hello();
  __CrestCall(2, 1);
  __CrestStore(1, (unsigned long )(& argc));
# 14 "hello.c"
  __CrestInt(& x);
# 15 "hello.c"
  __CrestInt(& y);
# 16 "hello.c"
  __CrestInt(& z);
  {
  __CrestLoad(11, (unsigned long )(& x), (long long )x);
  __CrestLoad(10, (unsigned long )(& y), (long long )y);
  __CrestApply2(9, 2, (long long )(x * y));
  __CrestLoad(8, (unsigned long )(& z), (long long )z);
  __CrestApply2(7, 0, (long long )(x * y + z));
  __CrestLoad(6, (unsigned long )0, (long long )1);
  __CrestApply2(5, 0, (long long )((x * y + z) + 1));
  __CrestLoad(4, (unsigned long )0, (long long )0);
  __CrestApply2(3, 12, (long long )((x * y + z) + 1 == 0));
# 17 "hello.c"
  if ((x * y + z) + 1 == 0) {
    __CrestBranch(12, 3, 1);
    {
    __CrestLoad(20, (unsigned long )(& x), (long long )x);
    __CrestLoad(19, (unsigned long )(& z), (long long )z);
    __CrestApply2(18, 2, (long long )(x * z));
    __CrestLoad(17, (unsigned long )0, (long long )1);
    __CrestApply2(16, 1, (long long )(x * z - 1));
    __CrestLoad(15, (unsigned long )0, (long long )0);
    __CrestApply2(14, 12, (long long )(x * z - 1 == 0));
# 17 "hello.c"
    if (x * z - 1 == 0) {
      __CrestBranch(21, 4, 1);
      {
      __CrestLoad(25, (unsigned long )(& x), (long long )x);
      __CrestLoad(24, (unsigned long )0, (long long )0);
      __CrestApply2(23, 14, (long long )(x > 0));
# 17 "hello.c"
      if (x > 0) {
        __CrestBranch(26, 5, 1);
        {
        __CrestLoad(30, (unsigned long )(& z), (long long )z);
        __CrestLoad(29, (unsigned long )0, (long long )0);
        __CrestApply2(28, 14, (long long )(z > 0));
# 17 "hello.c"
        if (z > 0) {
          __CrestBranch(31, 6, 1);
          __CrestLoad(33, (unsigned long )(& x), (long long )x);
          __CrestLoad(34, (unsigned long )(& y), (long long )y);
          __CrestLoad(35, (unsigned long )(& z), (long long )z);
# 18 "hello.c"
          printf((char const * __restrict )"GOAL %d %d %d\n", x, y, z);
          __CrestClearStack(36);
        } else {
          __CrestBranch(32, 7, 0);

        }
        }
      } else {
        __CrestBranch(27, 8, 0);

      }
      }
    } else {
      __CrestBranch(22, 9, 0);

    }
    }
  } else {
    __CrestBranch(13, 10, 0);

  }
  }
  __CrestLoad(37, (unsigned long )0, (long long )0);
  __CrestStore(38, (unsigned long )(& __retres6));
# 20 "hello.c"
  __retres6 = 0;
  {
  __CrestLoad(39, (unsigned long )(& __retres6), (long long )__retres6);
  __CrestReturn(40);
# 9 "hello.c"
  return (__retres6);
  }
}
}
void __globinit_hello(void)
{

  {
  __CrestInit();
}
}
