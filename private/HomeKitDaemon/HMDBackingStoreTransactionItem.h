//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreModelObject, HMFMessage, NSSet;

@interface HMDBackingStoreTransactionItem : HMFObject
{
    HMDBackingStoreModelObject *_change;
    HMFMessage *_message;
    NSSet *_dependentUUIDs;
}

@property(readonly, nonatomic) NSSet *dependentUUIDs; // @synthesize dependentUUIDs=_dependentUUIDs;
@property(readonly, nonatomic) HMFMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) HMDBackingStoreModelObject *change; // @synthesize change=_change;
- (void).cxx_destruct;
- (id)initWithChange:(id)arg1 message:(id)arg2;

@end

