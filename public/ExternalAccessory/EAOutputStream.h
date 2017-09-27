//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

@class EAAccessory, EASession, NSRecursiveLock;

@interface EAOutputStream : NSOutputStream
{
    id _delegate;
    int _sock;
    EAAccessory *_accessory;
    EASession *_session;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    _Bool _useSocket;
    struct __CFSocket *_cfSocket;
    _Bool _isOpenCompletedEventSent;
    _Bool _hasSpaceAvailableEventSent;
    _Bool _hasSpaceAvailable;
    _Bool _isAtEndEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
    struct __CFRunLoopSource *_socketRunLoopSource;
}

- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_streamWriteable;
- (void)_performAtEndOfStreamValidation;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)endStream;
- (void)openCompleted;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initWithAccessoryWithoutSocket:(id)arg1 forSession:(id)arg2;
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3;

@end

