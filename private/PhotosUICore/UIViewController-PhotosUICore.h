//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (PhotosUICore)
@property(copy, nonatomic, setter=px_setSubtitle:) NSString *px_subtitle;
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)px_isDescendantOfViewController:(id)arg1;
- (_Bool)px_canPresentViewControllerAnimated:(_Bool)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets px_safeAreaInsets;
@property(readonly, nonatomic, getter=px_isVisible) _Bool px_visible;
@end

