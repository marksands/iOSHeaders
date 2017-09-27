//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSPComponentWriteChannel.h"

@class NSObject<OS_dispatch_data>, NSObject<OS_dispatch_semaphore>, NSString;

__attribute__((visibility("hidden")))
@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    id <TSPComponentWriteChannel> _writeChannel;
    id <TSPMutableCryptoInfo> _encryptionInfo;
    unsigned long long _bufferSize;
    NSObject<OS_dispatch_semaphore> *_bufferSemaphore;
    char *_buffer;
    NSObject<OS_dispatch_data> *_bufferDispatchData;
    unsigned long long _bufferPosition;
    unsigned long long _remainingBufferSize;
    struct _CCCryptor *_cryptor;
    struct {
        unsigned int ctx[96];
    } _ccHmacContext;
    unsigned long long _encodedBlockLength;
    unsigned long long _decryptedBlockLength;
}

- (void).cxx_destruct;
- (_Bool)_finalizeBlockForClosing:(_Bool)arg1;
- (void)close;
- (void)_writeData:(id)arg1 isDecryptedData:(_Bool)arg2;
- (void)writeData:(id)arg1;
- (void)dealloc;
- (_Bool)_initializeBlock;
- (_Bool)_resetBuffer;
- (id)initWithWriteChannel:(id)arg1 encryptionInfo:(id)arg2 bufferSize:(unsigned long long)arg3;
- (id)initWithWriteChannel:(id)arg1 encryptionInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

