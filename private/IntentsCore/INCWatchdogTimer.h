//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface INCWatchdogTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
}

- (void).cxx_destruct;
- (_Bool)cancelIfNotAlreadyCanceled;
- (void)cancel;
- (void)start;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;

@end

