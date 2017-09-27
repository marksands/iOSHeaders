//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"

@class NSString;

@interface _UIFocusMovementInfo : NSObject <NSCopying, BSXPCCoding>
{
    _Bool _isInitialMovement;
    _Bool _isVelocityBased;
    _UIFocusMovementInfo *_primaryMovementInfo;
    _UIFocusMovementInfo *_secondaryMovementInfo;
    unsigned long long _heading;
    unsigned long long _secondaryHeading;
    struct CGVector _velocity;
}

+ (_Bool)supportsSecureCoding;
+ (id)_movementWithHeading:(unsigned long long)arg1 secondaryHeading:(unsigned long long)arg2 velocity:(struct CGVector)arg3 isInitial:(_Bool)arg4;
+ (id)_movementWithHeading:(unsigned long long)arg1 velocity:(struct CGVector)arg2 isInitial:(_Bool)arg3;
+ (id)_movementWithVelocity:(struct CGVector)arg1 isInitial:(_Bool)arg2;
+ (id)_movementWithHeading:(unsigned long long)arg1 isInitial:(_Bool)arg2;
@property(nonatomic, getter=_isVelocityBased, setter=_setIsVelocityBased:) _Bool isVelocityBased; // @synthesize isVelocityBased=_isVelocityBased;
@property(nonatomic, getter=_isInitialMovement, setter=_setIsInitialMovement:) _Bool isInitialMovement; // @synthesize isInitialMovement=_isInitialMovement;
@property(nonatomic, getter=_velocity, setter=_setVelocity:) struct CGVector velocity; // @synthesize velocity=_velocity;
@property(nonatomic, getter=_secondaryHeading, setter=_setSecondaryHeading:) unsigned long long secondaryHeading; // @synthesize secondaryHeading=_secondaryHeading;
@property(nonatomic, setter=_setHeading:) unsigned long long heading; // @synthesize heading=_heading;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, nonatomic) _UIFocusMovementInfo *secondaryMovementInfo; // @synthesize secondaryMovementInfo=_secondaryMovementInfo;
@property(readonly, nonatomic) _UIFocusMovementInfo *primaryMovementInfo; // @synthesize primaryMovementInfo=_primaryMovementInfo;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

