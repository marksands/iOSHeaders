//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, PSCloudStorageOffersManager, UIViewController;

@protocol PSCloudStorageOffersManagerDelegate <NSObject>

@optional
- (void)manager:(PSCloudStorageOffersManager *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)managerDidCancel:(PSCloudStorageOffersManager *)arg1;
- (void)manager:(PSCloudStorageOffersManager *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)manager:(PSCloudStorageOffersManager *)arg1 willPresentViewController:(UIViewController *)arg2;
@end

