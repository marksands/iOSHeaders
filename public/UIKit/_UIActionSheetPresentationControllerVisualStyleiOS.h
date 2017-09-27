//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetPresentationControllerVisualStyle.h"

@class NSString, UIActionSheetiOSDismissActionView, UIColor, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle>
{
    UITraitCollection *_traitCollection;
    UIActionSheetiOSDismissActionView *_dismissActionView;
}

@property(retain, nonatomic) UIActionSheetiOSDismissActionView *dismissActionView; // @synthesize dismissActionView=_dismissActionView;
@property(retain) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
@property(readonly) double cornerRadius;
@property(readonly) UIColor *dimmingViewColor;
@property(readonly) double dismissToContentSpacing;
- (struct UIEdgeInsets)_safeAreaScreenPeripheryInsets;
@property(readonly) struct UIEdgeInsets contentInsets;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

