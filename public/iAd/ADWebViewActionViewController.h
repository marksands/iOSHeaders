//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFSafariViewController.h"

@class ADHomeButtonHandler;

@interface ADWebViewActionViewController : SFSafariViewController
{
    ADHomeButtonHandler *_homeButtonHandler;
}

@property(retain, nonatomic) ADHomeButtonHandler *homeButtonHandler; // @synthesize homeButtonHandler=_homeButtonHandler;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dismissView;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <ADWebViewActionViewControllerDelegate> delegate; // @dynamic delegate;

@end

