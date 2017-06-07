//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSString, XCTNSNotificationExpectation;
@protocol OS_dispatch_queue;

@interface _XCTNSNotificationExpectationImplementation : NSObject
{
    XCTNSNotificationExpectation *_expectation;
    id _observedObject;
    NSString *_notificationName;
    NSNotificationCenter *_notificationCenter;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasCleanedUp;
}

@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly) id observedObject; // @synthesize observedObject=_observedObject;
- (void)cleanup;
- (void)_observeExpectedNotification:(id)arg1;
@property(copy) CDUnknownBlockType handler;
- (id)initWithName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 expectation:(id)arg4;
- (void)dealloc;

@end

