//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "SKUIClientReviewViewController.h"

@class NSString, SKStoreReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController>
{
    id <SKRemoteReviewViewControllerDelegate> _delegate;
    SKStoreReviewViewController *_reviewViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKStoreReviewViewController *reviewViewController; // @synthesize reviewViewController=_reviewViewController;
@property(nonatomic) __weak id <SKRemoteReviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

