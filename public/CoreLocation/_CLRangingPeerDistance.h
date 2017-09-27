//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSNumber, _CLRangingPeer;

@interface _CLRangingPeerDistance : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
    _Bool _initiator;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isInitiator) _Bool initiator; // @synthesize initiator=_initiator;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)initiator;
@property(readonly, nonatomic) _Bool shouldUnlock;
@property(readonly, copy, nonatomic) NSNumber *accuracyMeters;
@property(readonly, copy, nonatomic) NSNumber *distanceMeters;
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, copy, nonatomic) _CLRangingPeer *peer;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5 shouldUnlock:(_Bool)arg6;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5;
- (id)initWithPeer:(id)arg1 timestamp:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5;
- (id)init;

@end

