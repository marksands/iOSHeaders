//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SFUCryptor : NSObject
{
    int mOperation;
    struct _CCCryptor *mCryptor;
    unsigned long long mBlockSize;
    _Bool mFinished;
    char *mDecryptionInputBuffer;
    char *mOutputBuffer;
    char *mOutputBufferPos;
    unsigned long long mOutputBufferAvailable;
}

- (_Bool)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(_Bool)arg4 crc32:(unsigned int *)arg5 error:(id *)arg6;
- (_Bool)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(_Bool)arg4 error:(id *)arg5;
- (void)dealloc;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long long)arg4 usePKCS7Padding:(_Bool)arg5;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long long)arg4;

@end

