//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSData, NSFileHandle, NSInputStream, NSMutableArray, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

__attribute__((visibility("hidden")))
@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate>
{
    NSMutableArray *_allObjects;
    NSData *_curData;
    unsigned long long _curDataPos;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    struct z_stream_s _zlibStream;
    _Bool _haveFlushedZlib;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _shouldCompress;
    _Bool _hasInitedCompression;
    _Bool _haveFinishedCompression;
    _Bool _haveFinishedStreaming;
    unsigned long long _bufferSize;
    id <CKDProtobufMessageSigningDelegate> _signingDelegate;
    CDUnknownBlockType _logRequestObjectBlock;
    NSFileHandle *_binaryLogFileHandle;
}

@property _Bool haveFinishedStreaming; // @synthesize haveFinishedStreaming=_haveFinishedStreaming;
@property(nonatomic) _Bool haveFinishedCompression; // @synthesize haveFinishedCompression=_haveFinishedCompression;
@property(nonatomic) _Bool hasInitedCompression; // @synthesize hasInitedCompression=_hasInitedCompression;
@property(retain, nonatomic) NSFileHandle *binaryLogFileHandle; // @synthesize binaryLogFileHandle=_binaryLogFileHandle;
@property(copy, nonatomic) CDUnknownBlockType logRequestObjectBlock; // @synthesize logRequestObjectBlock=_logRequestObjectBlock;
@property(nonatomic) __weak id <CKDProtobufMessageSigningDelegate> signingDelegate; // @synthesize signingDelegate=_signingDelegate;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) _Bool shouldCompress; // @synthesize shouldCompress=_shouldCompress;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (long long)_streamNextObject:(id)arg1;
- (void)_prepareObjectForStreaming:(id)arg1 shouldSign:(_Bool)arg2;
- (id)_dataForMessage:(id)arg1;
- (long long)_writeDataToStream:(id)arg1;
- (id)_prepareMescalSignature:(id)arg1;
- (_Bool)_finishStreaming:(id)arg1;
- (id)_compressBodyData:(id)arg1 shouldFlush:(_Bool)arg2;
- (id)open;
- (void)setStreamedObjects:(id)arg1;
- (void)tearDown;
- (void)dealloc;
- (void)_tearDownOutputStream;
- (id)initWithCompression:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

