//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKCloudKitSyncProgressViewController, NSArray;

@protocol CKCloudKitSyncProgressViewControllerDelegate <NSObject>
- (void)cloudKitSyncProgressViewController:(CKCloudKitSyncProgressViewController *)arg1 actionButtonWasPressed:(long long)arg2 errors:(NSArray *)arg3;
- (void)cloudKitSyncProgressViewControllerDidChangeVisibility:(CKCloudKitSyncProgressViewController *)arg1;
@end

