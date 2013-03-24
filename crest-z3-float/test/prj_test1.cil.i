# 1 "./prj_test1.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./prj_test1.cil.c"
# 5 "prj_test1.c"
void __globinit_prj_test1(void) ;
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
# 5 "prj_test1.c"
int main(void)
{ int x ;
  int __retres2 ;

  {
  __globinit_prj_test1();
  __CrestCall(1, 1);
# 7 "prj_test1.c"
  __CrestInt(& x);
  {
  __CrestLoad(4, (unsigned long )(& x), (long long )x);
  __CrestLoad(3, (unsigned long )0, (long long )10);
  __CrestApply2(2, 16, (long long )(x < 10));
# 9 "prj_test1.c"
  if (x < 10) {
    __CrestBranch(5, 3, 1);
# 10 "prj_test1.c"
    printf((char const * __restrict )"GOAL\n");
    __CrestClearStack(7);
  } else {
    __CrestBranch(6, 4, 0);
# 12 "prj_test1.c"
    printf((char const * __restrict )"GOAL1\n");
    __CrestClearStack(8);
  }
  }
  __CrestLoad(9, (unsigned long )0, (long long )0);
  __CrestStore(10, (unsigned long )(& __retres2));
# 14 "prj_test1.c"
  __retres2 = 0;
  {
  __CrestLoad(11, (unsigned long )(& __retres2), (long long )__retres2);
  __CrestReturn(12);
# 5 "prj_test1.c"
  return (__retres2);
  }
}
}
void __globinit_prj_test1(void)
{

  {
  __CrestInit();
}
}
