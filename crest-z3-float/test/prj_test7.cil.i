# 1 "./prj_test7.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./prj_test7.cil.c"
# 9 "prj_test7.c"
void __globinit_prj_test7(void) ;
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
# 9 "prj_test7.c"
int main(int argc , char **argv )
{ int x ;
  int y ;
  int __retres5 ;

  {
  __globinit_prj_test7();
  __CrestCall(2, 1);
  __CrestStore(1, (unsigned long )(& argc));
# 13 "prj_test7.c"
  __CrestInt(& x);
# 14 "prj_test7.c"
  __CrestInt(& y);
  {
  __CrestLoad(9, (unsigned long )(& x), (long long )x);
  __CrestLoad(8, (unsigned long )(& x), (long long )x);
  __CrestApply2(7, 2, (long long )(x * x));
  __CrestLoad(6, (unsigned long )(& y), (long long )y);
  __CrestApply2(5, 2, (long long )((x * x) * y));
  __CrestLoad(4, (unsigned long )0, (long long )12);
  __CrestApply2(3, 12, (long long )((x * x) * y == 12));
# 15 "prj_test7.c"
  if ((x * x) * y == 12) {
    __CrestBranch(10, 3, 1);
    __CrestLoad(12, (unsigned long )(& x), (long long )x);
    __CrestLoad(13, (unsigned long )(& y), (long long )y);
# 16 "prj_test7.c"
    printf((char const * __restrict )"GOAL %d %d\n", x, y);
    __CrestClearStack(14);
  } else {
    __CrestBranch(11, 4, 0);

  }
  }
  __CrestLoad(15, (unsigned long )0, (long long )0);
  __CrestStore(16, (unsigned long )(& __retres5));
# 18 "prj_test7.c"
  __retres5 = 0;
  {
  __CrestLoad(17, (unsigned long )(& __retres5), (long long )__retres5);
  __CrestReturn(18);
# 9 "prj_test7.c"
  return (__retres5);
  }
}
}
void __globinit_prj_test7(void)
{

  {
  __CrestInit();
}
}
