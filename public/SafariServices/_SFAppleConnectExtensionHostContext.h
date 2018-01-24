//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "_SFAppleConnectExtensionHostProtocol.h"

@class UIViewController;

__attribute__((visibility("hidden")))
@interface _SFAppleConnectExtensionHostContext : NSExtensionContext <_SFAppleConnectExtensionHostProtocol>
{
    id <_SFAppleConnectExtensionPageDelegate> _delegate;
    UIViewController *_remoteViewController;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(retain, nonatomic) UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <_SFAppleConnectExtensionPageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissExtensionUI;
- (void)presentExtensionUI;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;

@end

