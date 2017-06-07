//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXReplayableGesture, NSString, NSUUID;

@interface AXSwitchRecipeMapping : NSObject
{
    _Bool _optional;
    NSString *_action;
    NSString *_longPressAction;
    AXReplayableGesture *_gesture;
    AXReplayableGesture *_longPressGesture;
    NSUUID *_switchUUID;
    long long _switchOriginalAction;
    struct CGPoint _holdPoint;
}

+ (id)recipeMappingWithDictionaryRepresentation:(id)arg1;
@property(nonatomic) long long switchOriginalAction; // @synthesize switchOriginalAction=_switchOriginalAction;
@property(copy, nonatomic) NSUUID *switchUUID; // @synthesize switchUUID=_switchUUID;
@property(nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(nonatomic) struct CGPoint holdPoint; // @synthesize holdPoint=_holdPoint;
@property(retain, nonatomic) AXReplayableGesture *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) AXReplayableGesture *gesture; // @synthesize gesture=_gesture;
@property(copy, nonatomic) NSString *longPressAction; // @synthesize longPressAction=_longPressAction;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;

@end

