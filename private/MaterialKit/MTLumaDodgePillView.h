//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTLumaDodgePillSettings;

@interface MTLumaDodgePillView : UIView
{
    long long _style;
    MTLumaDodgePillSettings *_settings;
    id <MTLumaDodgePillBackgroundLuminanceObserver> _backgroundLumninanceObserver;
    long long _backgroundLuminance;
}

+ (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
+ (double)suggestedEdgeSpacing;
+ (_Bool)supportsBackgroundLuminanceObserving;
+ (Class)layerClass;
@property(readonly, nonatomic) long long backgroundLuminance; // @synthesize backgroundLuminance=_backgroundLuminance;
@property(nonatomic) __weak id <MTLumaDodgePillBackgroundLuminanceObserver> backgroundLumninanceObserver; // @synthesize backgroundLumninanceObserver=_backgroundLumninanceObserver;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_shouldAnimatePropertyAdditivelyWithKey:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateStyle;
- (id)_styleSettings;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

