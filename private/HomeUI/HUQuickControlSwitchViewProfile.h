//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

#import "HUQuickControlIncrementalConvertibleProfile.h"

@class NSString;

@interface HUQuickControlSwitchViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)percentageValueForViewValue:(id)arg1;
- (id)viewValueForPercentageValue:(double)arg1 round:(_Bool)arg2;
- (double)gestureDragCoefficient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSecondaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

