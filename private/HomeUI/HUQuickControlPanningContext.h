//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUQuickControlPanningContext : NSObject
{
    _Bool _requiresSomeMovementBeforeActivation;
    double _initialSliderValue;
    double _verticalDragCoefficient;
    struct CGRect _controlFrame;
}

@property(nonatomic) _Bool requiresSomeMovementBeforeActivation; // @synthesize requiresSomeMovementBeforeActivation=_requiresSomeMovementBeforeActivation;
@property(nonatomic) double verticalDragCoefficient; // @synthesize verticalDragCoefficient=_verticalDragCoefficient;
@property(nonatomic) double initialSliderValue; // @synthesize initialSliderValue=_initialSliderValue;
@property(nonatomic) struct CGRect controlFrame; // @synthesize controlFrame=_controlFrame;
- (void)assertConfigurationIsValid;
- (id)init;

@end
