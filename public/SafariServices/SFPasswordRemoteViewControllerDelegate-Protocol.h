//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SFPasswordRemoteViewController;

@protocol SFPasswordRemoteViewControllerDelegate <NSObject>
- (void)remoteViewController:(SFPasswordRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)remoteViewControllerWillDismiss:(SFPasswordRemoteViewController *)arg1;
@end

