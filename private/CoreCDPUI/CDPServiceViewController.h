//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CDPServiceInterface.h"

@interface CDPServiceViewController : UIViewController <CDPServiceInterface>
{
    _Bool _inlineMode;
    UIViewController *_contentViewController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (void)offsetForCurrentKeyboard:(CDUnknownBlockType)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

