//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUPhotoEditToolbar, UIAccessibilityHUDItem, UIButton;

@protocol PUPhotoEditToolbarDelegate <NSObject>
- (void)dismissAccessibilityHUDForPhotoEditToolbar:(PUPhotoEditToolbar *)arg1;
- (void)photoEditToolbar:(PUPhotoEditToolbar *)arg1 showAccessibilityHUDForItem:(UIAccessibilityHUDItem *)arg2;
- (UIAccessibilityHUDItem *)photoEditToolbar:(PUPhotoEditToolbar *)arg1 accessibilityHUDItemForButton:(UIButton *)arg2;
@end

