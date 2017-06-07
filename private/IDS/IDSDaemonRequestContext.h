//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDaemonResponseHandler, IMTimer;

@interface IDSDaemonRequestContext : NSObject
{
    IDSDaemonResponseHandler *_responseHandler;
    CDUnknownBlockType _timeoutBlock;
    IMTimer *_systemTimer;
}

- (void).cxx_destruct;
- (void)killSystemTimer;
- (id)systemTimer;
- (CDUnknownBlockType)timeoutBlock;
- (id)responseHandler;
- (id)initWithResponseHandler:(id)arg1 timeoutBlock:(CDUnknownBlockType)arg2 systemTimer:(id)arg3;
- (void)dealloc;

@end

