//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSError, NSInputStream, NSMutableData, NSObject<OS_dispatch_queue>, NSString;

@interface _HKMessageStreamReader : NSObject <NSStreamDelegate>
{
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned int _headerValue;
    unsigned long long _headerOffset;
    unsigned int _streamVersion;
    NSMutableData *_messageData;
    unsigned long long _messageDataOffset;
    NSError *_error;
    long long _state;
    int _invalidated;
    CDUnknownBlockType _messageHandler;
}

@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_invokeMessageHandlerWithData:(id)arg1 finished:(_Bool)arg2 error:(id)arg3;
- (void)_streamQueue_close;
- (void)_streamQueue_finish;
- (void)_streamQueue_transistionToError:(id)arg1;
- (void)_streamQueue_transistionToReadingMessageBytesWithLength:(unsigned long long)arg1;
- (void)_streamQueue_transistionToReadingMessageLength;
- (long long)_streamQueue_readMessage;
- (long long)_streamQueue_readHeader;
- (void)_streamQueue_readBytes;
- (void)invalidate;
- (void)open;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

