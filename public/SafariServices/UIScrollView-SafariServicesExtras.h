//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@interface UIScrollView (SafariServicesExtras)
+ (_Bool)_sf_baseHorizontalScrollIndicatorInsetsExtendFullWidth:(struct UIEdgeInsets)arg1;
+ (_Bool)_sf_baseVerticalScrollIndicatorInsetsExtendFullHeight:(struct UIEdgeInsets)arg1;
+ (struct UIEdgeInsets)_sf_baseInsetsForHorizontalScrollIndicatorInScrollViewContainerView:(id)arg1;
+ (struct UIEdgeInsets)_sf_baseInsetsForVerticalScrollIndicatorInScrollViewContainerView:(id)arg1;
+ (_Bool)_sf_supportsPerAxisIndicatorInsets;
+ (double)_sf_additionalBottomInsetForKeyboard;
- (void)_sf_setContentInsetIgnoringAutoContentOffsetAdjustment:(struct UIEdgeInsets)arg1;
- (void)_sf_setContentInsetAdjustments:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) _Bool _sf_isScrolledPastTop;
@property(readonly, nonatomic) _Bool _sf_isScrolledToOrPastBottom;
@end

