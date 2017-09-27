//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSUStreamWriteChannel.h"

@class NSObject<OS_dispatch_queue>, NSString, TSUZipFileWriter;

__attribute__((visibility("hidden")))
@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel>
{
    TSUZipFileWriter *_archiveWriter;
    NSObject<OS_dispatch_queue> *_writerQueue;
    _Bool _isClosed;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
- (void)writeData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithArchiveWriter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

