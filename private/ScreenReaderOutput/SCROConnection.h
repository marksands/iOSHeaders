//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCROConnection : NSObject
{
    _Bool _isConnectionStarted;
    unsigned int _pingPort;
    struct __CFRunLoopSource *_pingSource;
    struct __CFRunLoopSource *_invalidationSource;
    unsigned int _identifier;
    int _handlerType;
    id _delegate;
}

+ (void)_addConnectionToRunLoop:(id)arg1;
+ (void)_unconfigServerAndRetry:(_Bool)arg1;
+ (void)_configServer;
+ (void)_createConnectionRunLoop;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_ping;
- (int)performHandlerActionForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1 withObject:(id)arg2;
- (id)handlerValueForKey:(int)arg1;
- (id)handlerArrayValueForKey:(int)arg1;
- (int)setHandlerValue:(id)arg1 forKey:(int)arg2;
- (int)registerHandlerCallbackForKey:(int)arg1;
- (int)sendEvent:(id)arg1;
- (void)_stopConnection;
- (void)_startConnection;
- (void)invalidate;
- (id)initWithHandlerType:(int)arg1 delegate:(id)arg2;

@end

