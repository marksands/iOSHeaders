//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXMaterialButton.h>

#import "SXVideoControlItem.h"

@class NSString;

@interface SXMediaSelectionButton : SXMaterialButton <SXVideoControlItem>
{
    _Bool hideable;
    double autoAppearanceTimeInterval;
}

@property(readonly, nonatomic) double autoAppearanceTimeInterval; // @synthesize autoAppearanceTimeInterval;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)isVisible;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
@property(readonly, nonatomic) _Bool hideable; // @synthesize hideable;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

