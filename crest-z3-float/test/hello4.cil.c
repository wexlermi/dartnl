/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 9 "hello4.c"
void __globinit_hello4(void) ;
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
#line 9 "hello4.c"
int main(int argc , char **argv ) 
{ int w ;
  int x ;
  int y ;
  int z ;
  int __retres7 ;

  {
  __globinit_hello4();
  __CrestCall(2, 1);
  __CrestStore(1, (unsigned long )(& argc));
#line 16
  __CrestInt(& w);
#line 17
  __CrestInt(& x);
#line 18
  __CrestInt(& y);
#line 19
  __CrestInt(& z);
  {
  __CrestLoad(17, (unsigned long )(& x), (long long )x);
  __CrestLoad(16, (unsigned long )(& x), (long long )x);
  __CrestApply2(15, 2, (long long )(x * x));
  __CrestLoad(14, (unsigned long )(& y), (long long )y);
  __CrestApply2(13, 2, (long long )((x * x) * y));
  __CrestLoad(12, (unsigned long )(& y), (long long )y);
  __CrestApply2(11, 2, (long long )(((x * x) * y) * y));
  __CrestLoad(10, (unsigned long )(& y), (long long )y);
  __CrestApply2(9, 2, (long long )((((x * x) * y) * y) * y));
  __CrestLoad(8, (unsigned long )(& z), (long long )z);
  __CrestApply2(7, 2, (long long )(((((x * x) * y) * y) * y) * z));
  __CrestLoad(6, (unsigned long )(& z), (long long )z);
  __CrestApply2(5, 2, (long long )((((((x * x) * y) * y) * y) * z) * z));
  __CrestLoad(4, (unsigned long )0, (long long )2700);
  __CrestApply2(3, 12, (long long )((((((x * x) * y) * y) * y) * z) * z == 2700));
#line 24
  if ((((((x * x) * y) * y) * y) * z) * z == 2700) {
    __CrestBranch(18, 3, 1);
    {
    __CrestLoad(36, (unsigned long )(& x), (long long )x);
    __CrestLoad(35, (unsigned long )(& x), (long long )x);
    __CrestApply2(34, 2, (long long )(x * x));
    __CrestLoad(33, (unsigned long )(& y), (long long )y);
    __CrestApply2(32, 2, (long long )((x * x) * y));
    __CrestLoad(31, (unsigned long )(& w), (long long )w);
    __CrestApply2(30, 2, (long long )(((x * x) * y) * w));
    __CrestLoad(29, (unsigned long )(& y), (long long )y);
    __CrestLoad(28, (unsigned long )(& y), (long long )y);
    __CrestApply2(27, 2, (long long )(y * y));
    __CrestLoad(26, (unsigned long )(& w), (long long )w);
    __CrestApply2(25, 2, (long long )((y * y) * w));
    __CrestLoad(24, (unsigned long )(& w), (long long )w);
    __CrestApply2(23, 2, (long long )(((y * y) * w) * w));
    __CrestApply2(22, 0, (long long )(((x * x) * y) * w + ((y * y) * w) * w));
    __CrestLoad(21, (unsigned long )0, (long long )525);
    __CrestApply2(20, 12, (long long )(((x * x) * y) * w + ((y * y) * w) * w == 525));
#line 25
    if (((x * x) * y) * w + ((y * y) * w) * w == 525) {
      __CrestBranch(37, 4, 1);
      {
      __CrestLoad(55, (unsigned long )(& x), (long long )x);
      __CrestLoad(54, (unsigned long )(& y), (long long )y);
      __CrestApply2(53, 2, (long long )(x * y));
      __CrestLoad(52, (unsigned long )(& w), (long long )w);
      __CrestApply2(51, 2, (long long )((x * y) * w));
      __CrestLoad(50, (unsigned long )(& y), (long long )y);
      __CrestLoad(49, (unsigned long )(& y), (long long )y);
      __CrestApply2(48, 2, (long long )(y * y));
      __CrestLoad(47, (unsigned long )(& y), (long long )y);
      __CrestApply2(46, 2, (long long )((y * y) * y));
      __CrestLoad(45, (unsigned long )(& w), (long long )w);
      __CrestApply2(44, 2, (long long )(((y * y) * y) * w));
      __CrestLoad(43, (unsigned long )(& w), (long long )w);
      __CrestApply2(42, 2, (long long )((((y * y) * y) * w) * w));
      __CrestApply2(41, 0, (long long )((x * y) * w + (((y * y) * y) * w) * w));
      __CrestLoad(40, (unsigned long )0, (long long )1365);
      __CrestApply2(39, 12, (long long )((x * y) * w + (((y * y) * y) * w) * w == 1365));
#line 26
      if ((x * y) * w + (((y * y) * y) * w) * w == 1365) {
        __CrestBranch(56, 5, 1);
        __CrestLoad(58, (unsigned long )(& x), (long long )x);
        __CrestLoad(59, (unsigned long )(& y), (long long )y);
        __CrestLoad(60, (unsigned long )(& z), (long long )z);
        __CrestLoad(61, (unsigned long )(& w), (long long )w);
#line 27
        printf((char const   * __restrict  )"GOAL %d %d %d %d\n", x, y, z, w);
        __CrestClearStack(62);
        __CrestLoad(63, (unsigned long )0, (long long )1);
        __CrestStore(64, (unsigned long )(& __retres7));
#line 28
        __retres7 = 1;
        goto return_label;
      } else {
        __CrestBranch(57, 8, 0);

      }
      }
    } else {
      __CrestBranch(38, 9, 0);

    }
    }
  } else {
    __CrestBranch(19, 10, 0);

  }
  }
  __CrestLoad(65, (unsigned long )0, (long long )0);
  __CrestStore(66, (unsigned long )(& __retres7));
#line 33
  __retres7 = 0;
  return_label: /* CIL Label */ 
  {
  __CrestLoad(67, (unsigned long )(& __retres7), (long long )__retres7);
  __CrestReturn(68);
#line 9
  return (__retres7);
  }
}
}
void __globinit_hello4(void) 
{ 

  {
  __CrestInit();
}
}
