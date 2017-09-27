//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIActionSheetPresentationControllerDismissActionView.h"

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIActionSheetiOSDismissActionView : UIView <UIActionSheetPresentationControllerDismissActionView>
{
    _Bool _usesShortCompactVerticalLayout;
    UIButton *_dismissButton;
}

@property(nonatomic) _Bool usesShortCompactVerticalLayout; // @synthesize usesShortCompactVerticalLayout=_usesShortCompactVerticalLayout;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_heightForTraitCollection:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)setHighlighted:(_Bool)arg1;
- (void)_applyContinuousCornerRadius:(double)arg1;
- (void)_setupDismissButton;
- (id)initWithContinuousCornerRadius:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

