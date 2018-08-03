//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "INUIVoiceShortcutRemoteViewControllerEditDelegate.h"

@class INUIVoiceShortcutHostViewController, NSString;

@interface INUIEditVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerEditDelegate>
{
    id <INUIEditVoiceShortcutViewControllerDelegate> _delegate;
    INUIVoiceShortcutHostViewController *_remoteHostViewController;
}

+ (void)initialize;
@property(retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController; // @synthesize remoteHostViewController=_remoteHostViewController;
@property(nonatomic) __weak id <INUIEditVoiceShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)remoteViewControllerEditDidCancel;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidEditVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)loadView;
- (id)initWithVoiceShortcut:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

