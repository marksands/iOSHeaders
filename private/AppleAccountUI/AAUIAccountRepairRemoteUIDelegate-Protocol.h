//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAUIAccountRepairRemoteUI, ACAccount, NSDictionary, NSURLRequest, RUIObjectModel, UINavigationController;

@protocol AAUIAccountRepairRemoteUIDelegate <NSObject>
- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 account:(ACAccount *)arg2 didFinishWithSuccess:(_Bool)arg3;

@optional
- (NSDictionary *)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 headersForRequest:(NSURLRequest *)arg2;
- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 willPresentModalNavigationController:(UINavigationController *)arg2;
- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 didReceiveObjectModel:(RUIObjectModel *)arg2;
- (void)accountRepairRemoteUIWillDismiss:(AAUIAccountRepairRemoteUI *)arg1;
- (void)accountRepairRemoteUIWillAppear:(AAUIAccountRepairRemoteUI *)arg1;
@end

