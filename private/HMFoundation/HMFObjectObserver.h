//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMFObjectObserver : HMFObject
{
    id _observedObject;
    CDUnknownBlockType _deallocationBlock;
    NSUUID *_identifier;
}

@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType deallocationBlock; // @synthesize deallocationBlock=_deallocationBlock;
@property(readonly) __weak id observedObject; // @synthesize observedObject=_observedObject;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_startObserving;
- (id)observerKey;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1;
- (id)init;

@end

