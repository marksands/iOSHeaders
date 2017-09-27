//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "_MKPlaceActionButtonControllerProtocol.h"

@class NSLayoutConstraint, NSString, _MKPlaceActionButtonController;

__attribute__((visibility("hidden")))
@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionButtonControllerProtocol>
{
    unsigned long long _buttonType;
    _Bool _primary;
    NSLayoutConstraint *_heightConstraint;
    _MKPlaceActionButtonController *_buttonController;
}

@property(nonatomic) __weak _MKPlaceActionButtonController *buttonController; // @synthesize buttonController=_buttonController;
- (void).cxx_destruct;
- (void)placeActionbuttonControllerTextDidChanged:(id)arg1;
- (void)setAttributesWithTitle:(id)arg1 subTitle:(id)arg2;
- (void)_updateStyleNonPrimaryButton;
- (void)_updateStylePrimaryButton;
- (void)setPrimaryButtonTitle:(id)arg1;
- (id)_primaryButtonColor;
- (id)_primaryButtonTextColor;
- (void)_buttonStateChangedInSiri:(id)arg1;
- (void)buttonSelected:(id)arg1;
- (void)applyButtonDefaultConfiguration;
- (void)infoCardThemeChanged:(id)arg1;
- (void)_contentSizeDidChange;
- (id)initWithPrimaryType:(unsigned long long)arg1;
- (id)init;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

