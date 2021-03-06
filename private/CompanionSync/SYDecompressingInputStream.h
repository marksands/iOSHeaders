//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

#import "NSStreamDelegate.h"
#import "SYCompressionBufferOptimization.h"
#import "SYStreamEventHandlerBlocks.h"
#import "SYStreamProgress.h"
#import "SYStreamThroughputCounter.h"
#import "_SYStreamRunLoopSourceHandler.h"

@class NSProgress, NSString, _SYStreamGuts, _SYZlibStreamInternal;

@interface SYDecompressingInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>
{
    NSInputStream *_stream;
    _SYZlibStreamInternal *_internal;
    CDUnknownBlockType _onOpenComplete;
    CDUnknownBlockType _onBytesAvailable;
    CDUnknownBlockType _onSpaceAvailable;
    CDUnknownBlockType _onEndOfFile;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onClose;
    NSProgress *_progress;
    unsigned long long _byteCount;
}

@property(readonly, nonatomic) unsigned long long bytesThroughput; // @synthesize bytesThroughput=_byteCount;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType onClose; // @synthesize onClose=_onClose;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onEndOfFile; // @synthesize onEndOfFile=_onEndOfFile;
@property(copy, nonatomic) CDUnknownBlockType onSpaceAvailable; // @synthesize onSpaceAvailable=_onSpaceAvailable;
@property(copy, nonatomic) CDUnknownBlockType onBytesAvailable; // @synthesize onBytesAvailable=_onBytesAvailable;
@property(copy, nonatomic) CDUnknownBlockType onOpenComplete; // @synthesize onOpenComplete=_onOpenComplete;
- (void).cxx_destruct;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)_handlePendingInput;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_dispatchMyEvent:(unsigned long long)arg1;
- (void)_postEventToDelegate:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
- (void)close;
- (void)open;
@property(nonatomic) unsigned long long outputBufferSize;
@property(nonatomic) unsigned long long inputBufferSize;
- (unsigned long long)streamStatus;
- (id)streamError;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithCompressedDataStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

