# 1 "./uniform_test.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./uniform_test.cil.c"
# 15 "uniform_test.c"
void __globinit_uniform_test(void) ;
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
# 212 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h"
typedef unsigned int size_t;
# 56 "/usr/include/i386-linux-gnu/bits/types.h"
typedef long long __quad_t;
# 141 "/usr/include/i386-linux-gnu/bits/types.h"
typedef long __off_t;
# 142 "/usr/include/i386-linux-gnu/bits/types.h"
typedef __quad_t __off64_t;
# 45 "/usr/include/stdio.h"
struct _IO_FILE;
# 45 "/usr/include/stdio.h"
struct _IO_FILE;
# 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
# 172 "/usr/include/libio.h"
struct _IO_FILE;
# 182 "/usr/include/libio.h"
typedef void _IO_lock_t;
# 188 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
# 273 "/usr/include/libio.h"
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
};
# 202 "../bin/../include/crest.h"
extern void __CrestInt(int *x ) __attribute__((__crest_skip__)) ;
# 171 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr ;
# 357 "/usr/include/stdio.h"
extern int fprintf(FILE * __restrict __stream , char const * __restrict __format
                   , ...) ;
# 363 "/usr/include/stdio.h"
extern int printf(char const * __restrict __format , ...) ;
# 15 "uniform_test.c"
int main(void)
{ int a ;
  int b ;
  int c ;
  int d ;
  int __retres5 ;

  {
  __globinit_uniform_test();
  __CrestCall(1, 1);
# 17 "uniform_test.c"
  __CrestInt(& a);
# 18 "uniform_test.c"
  __CrestInt(& b);
# 19 "uniform_test.c"
  __CrestInt(& c);
# 20 "uniform_test.c"
  __CrestInt(& d);
  {
  __CrestLoad(4, (unsigned long )(& a), (long long )a);
  __CrestLoad(3, (unsigned long )0, (long long )5);
  __CrestApply2(2, 14, (long long )(a > 5));
# 22 "uniform_test.c"
  if (a > 5) {
    __CrestBranch(5, 3, 1);
    {
    __CrestLoad(9, (unsigned long )(& a), (long long )a);
    __CrestLoad(8, (unsigned long )0, (long long )10);
    __CrestApply2(7, 16, (long long )(a < 10));
# 22 "uniform_test.c"
    if (a < 10) {
      __CrestBranch(10, 4, 1);
      {
      __CrestLoad(14, (unsigned long )(& b), (long long )b);
      __CrestLoad(13, (unsigned long )0, (long long )19);
      __CrestApply2(12, 12, (long long )(b == 19));
# 23 "uniform_test.c"
      if (b == 19) {
        __CrestBranch(15, 5, 1);
        {
        __CrestLoad(19, (unsigned long )(& c), (long long )c);
        __CrestLoad(18, (unsigned long )0, (long long )7);
        __CrestApply2(17, 12, (long long )(c == 7));
# 24 "uniform_test.c"
        if (c == 7) {
          __CrestBranch(20, 6, 1);
          {
          __CrestLoad(24, (unsigned long )(& d), (long long )d);
          __CrestLoad(23, (unsigned long )0, (long long )4);
          __CrestApply2(22, 12, (long long )(d == 4));
# 25 "uniform_test.c"
          if (d == 4) {
            __CrestBranch(25, 7, 1);
# 26 "uniform_test.c"
            fprintf((FILE * __restrict )stderr, (char const * __restrict )"GOAL!\n");
            __CrestClearStack(27);
          } else {
            __CrestBranch(26, 8, 0);

          }
          }
        } else {
          __CrestBranch(21, 9, 0);

        }
        }
      } else {
        __CrestBranch(16, 10, 0);

      }
      }
    } else {
      __CrestBranch(11, 11, 0);

    }
    }
  } else {
    __CrestBranch(6, 12, 0);

  }
  }
  {
  __CrestLoad(30, (unsigned long )(& a), (long long )a);
  __CrestLoad(29, (unsigned long )0, (long long )9);
  __CrestApply2(28, 16, (long long )(a < 9));
# 32 "uniform_test.c"
  if (a < 9) {
    __CrestBranch(31, 14, 1);
# 33 "uniform_test.c"
    printf((char const * __restrict )"well\n");
    __CrestClearStack(33);
  } else {
    __CrestBranch(32, 15, 0);

  }
  }
  __CrestLoad(34, (unsigned long )0, (long long )0);
  __CrestStore(35, (unsigned long )(& __retres5));
# 35 "uniform_test.c"
  __retres5 = 0;
  {
  __CrestLoad(36, (unsigned long )(& __retres5), (long long )__retres5);
  __CrestReturn(37);
# 15 "uniform_test.c"
  return (__retres5);
  }
}
}
void __globinit_uniform_test(void)
{

  {
  __CrestInit();
}
}