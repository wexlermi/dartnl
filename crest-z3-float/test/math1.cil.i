# 1 "./math1.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./math1.cil.c"
# 14 "math1.c"
void __globinit_math1(void) ;
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
# 14 "math1.c"
int main(void)
{ int a ;
  int b ;
  int __retres3 ;

  {
  __globinit_math1();
  __CrestCall(1, 1);
# 16 "math1.c"
  __CrestInt(& a);
# 17 "math1.c"
  __CrestInt(& b);
  {
  __CrestLoad(8, (unsigned long )(& a), (long long )a);
  __CrestLoad(7, (unsigned long )(& a), (long long )a);
  __CrestApply2(6, 2, (long long )(a * a));
  __CrestLoad(5, (unsigned long )(& b), (long long )b);
  __CrestApply2(4, 2, (long long )((a * a) * b));
  __CrestLoad(3, (unsigned long )0, (long long )36);
  __CrestApply2(2, 12, (long long )((a * a) * b == 36));
# 18 "math1.c"
  if ((a * a) * b == 36) {
    __CrestBranch(9, 3, 1);
    {
    __CrestLoad(15, (unsigned long )(& b), (long long )b);
    __CrestLoad(14, (unsigned long )(& b), (long long )b);
    __CrestApply2(13, 2, (long long )(b * b));
    __CrestLoad(12, (unsigned long )0, (long long )16);
    __CrestApply2(11, 12, (long long )(b * b == 16));
# 18 "math1.c"
    if (b * b == 16) {
      __CrestBranch(16, 4, 1);
      {
      __CrestLoad(20, (unsigned long )(& a), (long long )a);
      __CrestLoad(19, (unsigned long )0, (long long )0);
      __CrestApply2(18, 14, (long long )(a > 0));
# 18 "math1.c"
      if (a > 0) {
        __CrestBranch(21, 5, 1);
        __CrestLoad(23, (unsigned long )(& a), (long long )a);
        __CrestLoad(24, (unsigned long )(& b), (long long )b);
# 19 "math1.c"
        printf((char const * __restrict )"%d %d", a, b);
        __CrestClearStack(25);
        __CrestLoad(26, (unsigned long )0, (long long )1);
        __CrestStore(27, (unsigned long )(& __retres3));
# 20 "math1.c"
        __retres3 = 1;
        goto return_label;
      } else {
        __CrestBranch(22, 8, 0);
        __CrestLoad(28, (unsigned long )(& a), (long long )a);
        __CrestLoad(29, (unsigned long )(& b), (long long )b);
# 22 "math1.c"
        printf((char const * __restrict )"%d %d", a, b);
        __CrestClearStack(30);
        __CrestLoad(31, (unsigned long )0, (long long )0);
        __CrestStore(32, (unsigned long )(& __retres3));
# 23 "math1.c"
        __retres3 = 0;
        goto return_label;
      }
      }
    } else {
      __CrestBranch(17, 11, 0);
      __CrestLoad(33, (unsigned long )(& a), (long long )a);
      __CrestLoad(34, (unsigned long )(& b), (long long )b);
# 22 "math1.c"
      printf((char const * __restrict )"%d %d", a, b);
      __CrestClearStack(35);
      __CrestLoad(36, (unsigned long )0, (long long )0);
      __CrestStore(37, (unsigned long )(& __retres3));
# 23 "math1.c"
      __retres3 = 0;
      goto return_label;
    }
    }
  } else {
    __CrestBranch(10, 14, 0);
    __CrestLoad(38, (unsigned long )(& a), (long long )a);
    __CrestLoad(39, (unsigned long )(& b), (long long )b);
# 22 "math1.c"
    printf((char const * __restrict )"%d %d", a, b);
    __CrestClearStack(40);
    __CrestLoad(41, (unsigned long )0, (long long )0);
    __CrestStore(42, (unsigned long )(& __retres3));
# 23 "math1.c"
    __retres3 = 0;
    goto return_label;
  }
  }
  return_label:
  {
  __CrestLoad(43, (unsigned long )(& __retres3), (long long )__retres3);
  __CrestReturn(44);
# 14 "math1.c"
  return (__retres3);
  }
}
}
void __globinit_math1(void)
{

  {
  __CrestInit();
}
}
