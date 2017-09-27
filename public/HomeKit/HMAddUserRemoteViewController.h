//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "HMUserManagementRemoteHost.h"

@interface HMAddUserRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost>
{
    id <HMUserManagementRemoteHost> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <HMUserManagementRemoteHost> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userManagementDidFinishWithError:(id)arg1;
- (void)userManagementDidLoad;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

