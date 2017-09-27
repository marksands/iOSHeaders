//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIPress, UIPressesEvent;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedPress : NSObject <NSCopying>
{
    long long _delayCount;
    _Bool _cloneForSecondDelivery;
    UIPress *_press;
    UIPress *_stateWhenDelayed;
    UIPress *_stateWhenDelivered;
    UIPressesEvent *_event;
}

@property _Bool cloneForSecondDelivery; // @synthesize cloneForSecondDelivery=_cloneForSecondDelivery;
@property(retain, nonatomic) UIPressesEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) UIPress *stateWhenDelivered; // @synthesize stateWhenDelivered=_stateWhenDelivered;
@property(retain, nonatomic) UIPress *stateWhenDelayed; // @synthesize stateWhenDelayed=_stateWhenDelayed;
@property(retain, nonatomic) UIPress *press; // @synthesize press=_press;
- (void).cxx_destruct;
- (id)description;
- (double)timestampForDelivery;
- (long long)phaseForDelivery;
- (void)saveCurrentPressState;
- (long long)delayCount;
- (void)incrementDelayCount;
- (long long)decrementDelayCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

