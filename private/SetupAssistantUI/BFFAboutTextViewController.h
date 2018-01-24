//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SetupAssistantUI/BFFAboutViewController.h>

#import "UIWebViewDelegate.h"

@class NSString, UIViewController;

@interface BFFAboutTextViewController : BFFAboutViewController <UIWebViewDelegate>
{
    _Bool _includesAdditionalFormatting;
    _Bool _disableLinkNavigation;
    NSString *_titleString;
    NSString *_HTMLString;
    NSString *_linkString;
    UIViewController *_linkedController;
    CDUnknownBlockType _linkTappedBlock;
}

@property(nonatomic) _Bool disableLinkNavigation; // @synthesize disableLinkNavigation=_disableLinkNavigation;
@property(copy, nonatomic) CDUnknownBlockType linkTappedBlock; // @synthesize linkTappedBlock=_linkTappedBlock;
@property(retain, nonatomic) UIViewController *linkedController; // @synthesize linkedController=_linkedController;
@property(nonatomic) _Bool includesAdditionalFormatting; // @synthesize includesAdditionalFormatting=_includesAdditionalFormatting;
@property(retain, nonatomic) NSString *linkString; // @synthesize linkString=_linkString;
@property(retain, nonatomic) NSString *HTMLString; // @synthesize HTMLString=_HTMLString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

