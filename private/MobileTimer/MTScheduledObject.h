//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>

@class MTTrigger, NSString;
@protocol MTScheduleable;

@interface MTScheduledObject : NSObject <NAEquatable, NSCopying>
{
    id <MTScheduleable> _scheduleable;
    MTTrigger *_trigger;
}

+ (_Bool)triggerTypeRepresentsNotification:(unsigned long long)arg1;
+ (id)scheduledObjectForScheduleable:(id)arg1 trigger:(id)arg2;
@property(copy, nonatomic) MTTrigger *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) id <MTScheduleable> scheduleable; // @synthesize scheduleable=_scheduleable;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToScheduledObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isNotification;
- (id)initWithScheduleable:(id)arg1 trigger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

