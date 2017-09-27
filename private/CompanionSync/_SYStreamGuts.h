//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface _SYStreamGuts : NSObject
{
    struct __CFRunLoopSource *_runloopSource;
    unsigned int _port;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    id <NSStreamDelegate> _delegate;
    NSError *_error;
    unsigned long long _status;
    NSMutableDictionary *_propertyStore;
}

- (void).cxx_destruct;
- (id)propertyForKey:(id)arg1;
- (void)storeProperty:(id)arg1 forKey:(id)arg2;
- (void)postStreamEvent:(unsigned long long)arg1 forStream:(id)arg2;
- (void)createRunloopSourceForStream:(id)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)dealloc;

@end

