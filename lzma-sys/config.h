// Configuration values for `liblzma`

// tell `liblzma` to look for standard C99 headers
#define HAVE_STDINT_H 1
#define HAVE_STDBOOL_H 1
#define HAVE_STRING_H 1

// enable encoders/decoders
#define HAVE_DECODER_LZMA1 1
#define HAVE_DECODER_LZMA2 1
#define HAVE_ENCODER_LZMA1 1
#define HAVE_ENCODER_LZMA2 1
#define HAVE_DECODER_LZ 1
#define HAVE_ENCODER_LZ 1
#define HAVE_DECODER_DELTA 1
#define HAVE_ENCODER_DELTA 1
#define HAVE_DECODER_SPARC 1
#define HAVE_ENCODER_SPARC 1
#define HAVE_DECODER_X86 1
#define HAVE_ENCODER_X86 1

// enable checksums
#define HAVE_CHECK_SHA256 1
#define HAVE_CHECK_CRC64 1
#define HAVE_CHECK_CRC32 1

// enable other liblzma stuff
#define HAVE_MF_BT2 1
#define HAVE_MF_BT3 1
#define HAVE_MF_BT4 1
#define HAVE_MF_HC3 1
#define HAVE_MF_HC4 1

#ifdef _MSC_VER
    // change to `MYTHREAD_WIN95` if targeting Windows XP or earlier
    #define MYTHREAD_VISTA 1
#else
    #define _POSIX_C_SOURCE 199506L
    #define MYTHREAD_POSIX 1
#endif
