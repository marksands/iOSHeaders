//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_UIStatusBarDisplayable.h"

@class NSString, UIColor;

@interface _UIStatusBarSignalView : UIView <_UIStatusBarDisplayable>
{
    _Bool _smallSize;
    _Bool _visible;
    long long _numberOfBars;
    long long _numberOfActiveBars;
    long long _signalMode;
    UIColor *_inactiveColor;
    UIColor *_activeColor;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool smallSize; // @synthesize smallSize=_smallSize;
@property(copy, nonatomic) UIColor *activeColor; // @synthesize activeColor=_activeColor;
@property(copy, nonatomic) UIColor *inactiveColor; // @synthesize inactiveColor=_inactiveColor;
@property(nonatomic) long long signalMode; // @synthesize signalMode=_signalMode;
@property(nonatomic) long long numberOfActiveBars; // @synthesize numberOfActiveBars=_numberOfActiveBars;
@property(nonatomic) long long numberOfBars; // @synthesize numberOfBars=_numberOfBars;
- (void).cxx_destruct;
- (void)_updateFromMode:(long long)arg1;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_visibilityDidChange;
- (void)_colorsDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

