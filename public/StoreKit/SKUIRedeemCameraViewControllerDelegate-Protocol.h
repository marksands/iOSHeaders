//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SKUIRedeem, SKUIRedeemCameraViewController;

@protocol SKUIRedeemCameraViewControllerDelegate <NSObject>
- (void)redeemCameraViewController:(SKUIRedeemCameraViewController *)arg1 didFinishWithRedeem:(SKUIRedeem *)arg2;

@optional
- (void)overrideRedeemOperationWithCode:(NSString *)arg1 cameraRecognized:(_Bool)arg2 completion:(void (^)(SKUIRedeem *, NSError *))arg3;
@end

