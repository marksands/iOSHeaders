//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "DDParsecHostVCInterface.h"

__attribute__((visibility("hidden")))
@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface>
{
    _Bool _receivedInteractionDidFinish;
    id <DDParsecHostVCInterface> _hostSideDelegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property __weak id <DDParsecHostVCInterface> hostSideDelegate; // @synthesize hostSideDelegate=_hostSideDelegate;
- (void).cxx_destruct;
- (void)openTrailerPunchout:(id)arg1;
- (void)getStatusBarHidden:(CDUnknownBlockType)arg1;
- (void)openParsecURL:(id)arg1;
- (void)showingFTE:(_Bool)arg1;
- (void)showingErrorView:(_Bool)arg1;
- (void)interactionEndedWithPunchout:(_Bool)arg1;
- (void)interactionEnded;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)canBecomeFirstResponder;

@end

