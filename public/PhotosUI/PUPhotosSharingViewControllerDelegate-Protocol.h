//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PHAsset, PUPhotosSharingViewController;

@protocol PUPhotosSharingViewControllerDelegate <NSObject>
- (void)photosSharingViewController:(PUPhotosSharingViewController *)arg1 didCompleteWithActivityType:(NSString *)arg2 success:(_Bool)arg3 withAsset:(PHAsset *)arg4;
- (void)photosSharingViewControllerDidCancel:(PUPhotosSharingViewController *)arg1 needsDismiss:(_Bool)arg2;
- (void)photosSharingViewControllerWillCancel:(PUPhotosSharingViewController *)arg1 withAsset:(PHAsset *)arg2;
@end

