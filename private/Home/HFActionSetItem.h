//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

#import "HFHomeKitItemProtocol.h"
#import "NSCopying.h"

@class HMActionSet, NSString;

@interface HFActionSetItem : HFItem <HFHomeKitItemProtocol, NSCopying>
{
    HMActionSet *_actionSet;
    unsigned long long _actionSetItemStyle;
    id <HFCharacteristicValueSource> _valueSource;
}

+ (id)_primaryStateForActionSet:(id)arg1 valueSource:(id)arg2 logger:(id)arg3;
+ (_Bool)_value:(id)arg1 isApproximatelyEqualToValue:(id)arg2 characteristicMetadata:(id)arg3;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) unsigned long long actionSetItemStyle; // @synthesize actionSetItemStyle=_actionSetItemStyle;
@property(readonly, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
- (void).cxx_destruct;
- (id)turnOffActionSet;
- (id)executeActionSet;
- (id)rooms;
- (id)_mostCommonRoomForActionSet:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithActionSet:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 valueSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

