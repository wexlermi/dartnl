# 1 "./real.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./real.cil.c"
# 15 "real.c"
void __globinit_real(void) ;
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
# 204 "../bin/../include/crest.h"
extern void __CrestDouble(double *x ) __attribute__((__crest_skip__)) ;
# 363 "/usr/include/stdio.h"
extern int printf(char const * __restrict __format , ...) ;
# 15 "real.c"
int main(void)
{ double x ;
  int __retres2 ;

  {
  __globinit_real();
  __CrestCall(1, 1);
# 17 "real.c"
  __CrestDouble(& x);
  {
  __CrestLoad(8, (unsigned long )(& x), (long long )x);
  __CrestLoad(7, (unsigned long )0, (long long )3.0);
  __CrestApply2(6, 2, (long long )(x * 3.0));
  __CrestLoad(5, (unsigned long )0, (long long )27.0);
  __CrestApply2(4, 0, (long long )(x * 3.0 + 27.0));
  __CrestLoad(3, (unsigned long )0, (long long )153.0);
  __CrestApply2(2, 12, (long long )(x * 3.0 + 27.0 == 153.0));
# 19 "real.c"
  if (x * 3.0 + 27.0 == 153.0) {
    __CrestBranch(9, 3, 1);
    __CrestLoad(11, (unsigned long )(& x), (long long )x);
# 20 "real.c"
    printf((char const * __restrict )"solved%f\n", x);
    __CrestClearStack(12);
  } else {
    __CrestBranch(10, 4, 0);
# 22 "real.c"
    printf((char const * __restrict )"not solved\n");
    __CrestClearStack(13);
  }
  }
  __CrestLoad(14, (unsigned long )0, (long long )0);
  __CrestStore(15, (unsigned long )(& __retres2));
# 24 "real.c"
  __retres2 = 0;
  {
  __CrestLoad(16, (unsigned long )(& __retres2), (long long )__retres2);
  __CrestReturn(17);
# 15 "real.c"
  return (__retres2);
  }
}
}
void __globinit_real(void)
{

  {
  __CrestInit();
}
}