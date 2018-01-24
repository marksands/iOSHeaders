//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "SXMailPresenter.h"

@class NSString;

@interface SXMailPresenter : NSObject <MFMailComposeViewControllerDelegate, SXMailPresenter>
{
    id <SXHost> _host;
    id <SXViewControllerPresenting> _viewControllerPresenting;
}

@property(readonly, nonatomic) id <SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)presentMail:(id)arg1;
- (_Bool)canComposeMail;
- (id)initWithViewControllerPresenting:(id)arg1 host:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

