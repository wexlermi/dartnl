/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 9 "hello3.c"
void __globinit_hello3(void) ;
extern void __CrestInit(void)  __attribute__((__crest_skip__)) ;
extern void __CrestHandleReturn(int id , long long val )  __attribute__((__crest_skip__)) ;
extern void __CrestReturn(int id )  __attribute__((__crest_skip__)) ;
extern void __CrestCall(int id , unsigned int fid )  __attribute__((__crest_skip__)) ;
extern void __CrestBranch(int id , int bid , unsigned char b )  __attribute__((__crest_skip__)) ;
extern void __CrestApply2(int id , int op , long long val )  __attribute__((__crest_skip__)) ;
extern void __CrestApply1(int id , int op , long long val )  __attribute__((__crest_skip__)) ;
extern void __CrestClearStack(int id )  __attribute__((__crest_skip__)) ;
extern void __CrestStore(int id , unsigned long addr )  __attribute__((__crest_skip__)) ;
extern void __CrestLoad(int id , unsigned long addr , long long val )  __attribute__((__crest_skip__)) ;
#line 202 "../bin/../include/crest.h"
extern void __CrestInt(int *x )  __attribute__((__crest_skip__)) ;
#line 363 "/usr/include/stdio.h"
extern int printf(char const   * __restrict  __format  , ...) ;
#line 9 "hello3.c"
int main(int argc , char **argv ) 
{ int w ;
  int x ;
  int y ;
  int z ;
  int __retres7 ;

  {
  __globinit_hello3();
  __CrestCall(2, 1);
  __CrestStore(1, (unsigned long )(& argc));
#line 16
  __CrestInt(& x);
#line 17
  __CrestInt(& y);
#line 18
  __CrestInt(& z);
#line 19
  __CrestInt(& w);
  {
  __CrestLoad(9, (unsigned long )(& x), (long long )x);
  __CrestLoad(8, (unsigned long )(& y), (long long )y);
  __CrestApply2(7, 2, (long long )(x * y));
  __CrestLoad(6, (unsigned long )(& z), (long long )z);
  __CrestApply2(5, 0, (long long )(x * y + z));
  __CrestLoad(4, (unsigned long )0, (long long )20);
  __CrestApply2(3, 12, (long long )(x * y + z == 20));
#line 20
  if (x * y + z == 20) {
    __CrestBranch(10, 3, 1);
    __CrestLoad(16, (unsigned long )(& x), (long long )x);
    __CrestLoad(15, (unsigned long )(& y), (long long )y);
    __CrestApply2(14, 2, (long long )(x * y));
    __CrestLoad(13, (unsigned long )(& z), (long long )z);
    __CrestApply2(12, 2, (long long )((x * y) * z));
    __CrestStore(17, (unsigned long )(& w));
#line 21
    w = (x * y) * z;
    {
    __CrestLoad(22, (unsigned long )(& w), (long long )w);
    __CrestLoad(21, (unsigned long )(& y), (long long )y);
    __CrestApply2(20, 2, (long long )(w * y));
    __CrestLoad(19, (unsigned long )0, (long long )192);
    __CrestApply2(18, 12, (long long )(w * y == 192));
#line 22
    if (w * y == 192) {
      __CrestBranch(23, 5, 1);
      __CrestLoad(25, (unsigned long )(& x), (long long )x);
      __CrestLoad(26, (unsigned long )(& y), (long long )y);
      __CrestLoad(27, (unsigned long )(& z), (long long )z);
      __CrestLoad(28, (unsigned long )(& w), (long long )w);
#line 23
      printf((char const   * __restrict  )"GOAL %d %d %d %d\n", x, y, z, w);
      __CrestClearStack(29);
      __CrestLoad(30, (unsigned long )0, (long long )1);
      __CrestStore(31, (unsigned long )(& __retres7));
#line 24
      __retres7 = 1;
      goto return_label;
    } else {
      __CrestBranch(24, 8, 0);
      __CrestLoad(32, (unsigned long )(& x), (long long )x);
      __CrestLoad(33, (unsigned long )(& y), (long long )y);
      __CrestLoad(34, (unsigned long )(& z), (long long )z);
      __CrestLoad(35, (unsigned long )(& w), (long long )w);
#line 27
      printf((char const   * __restrict  )"GOAL %d %d %d %d\n", x, y, z, w);
      __CrestClearStack(36);
      __CrestLoad(37, (unsigned long )0, (long long )1);
      __CrestStore(38, (unsigned long )(& __retres7));
#line 28
      __retres7 = 1;
      goto return_label;
    }
    }
  } else {
    __CrestBranch(11, 11, 0);
    __CrestLoad(39, (unsigned long )(& x), (long long )x);
    __CrestLoad(40, (unsigned long )(& y), (long long )y);
    __CrestLoad(41, (unsigned long )(& z), (long long )z);
    __CrestLoad(42, (unsigned long )(& w), (long long )w);
#line 32
    printf((char const   * __restrict  )"GOAL %d %d %d %d\n", x, y, z, w);
    __CrestClearStack(43);
    __CrestLoad(44, (unsigned long )0, (long long )1);
    __CrestStore(45, (unsigned long )(& __retres7));
#line 33
    __retres7 = 1;
    goto return_label;
  }
  }
  __CrestLoad(46, (unsigned long )0, (long long )0);
  __CrestStore(47, (unsigned long )(& __retres7));
#line 35
  __retres7 = 0;
  return_label: /* CIL Label */ 
  {
  __CrestLoad(48, (unsigned long )(& __retres7), (long long )__retres7);
  __CrestReturn(49);
#line 9
  return (__retres7);
  }
}
}
void __globinit_hello3(void) 
{ 

  {
  __CrestInit();
}
}
