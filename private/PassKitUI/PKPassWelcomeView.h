//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKWelcomeView.h>

@class UIButton;

@interface PKPassWelcomeView : PKWelcomeView
{
    _Bool _currentRearCameraIsAllowed;
    UIButton *_buttonScanCode;
}

+ (id)messageAttributedString;
+ (double)bottomMargin;
+ (struct CGSize)headerImageSize;
+ (struct UIEdgeInsets)headerImageMargins;
+ (double)defaultHeight;
@property(retain, nonatomic) UIButton *buttonScanCode; // @synthesize buttonScanCode=_buttonScanCode;
@property(nonatomic) _Bool currentRearCameraIsAllowed; // @synthesize currentRearCameraIsAllowed=_currentRearCameraIsAllowed;
- (void).cxx_destruct;
- (void)_appStorePressed;
- (void)_scanCodePressed;
- (void)dealloc;
- (void)removeScanCodeButton;
- (void)addScanCodeButton;
- (id)init;
- (_Bool)needsUpdate;

@end

