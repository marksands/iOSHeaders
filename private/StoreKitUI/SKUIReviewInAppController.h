//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUIComposeReviewDelegate.h"

@class NSString, SKUIComposeReviewViewController, SKUIProductReviewURLProvider, SKUIReviewInAppConfiguration, SKUIReviewInAppRatingViewController, SKUIStarRatingQueue, SKUIStoreDialogController;

@interface SKUIReviewInAppController : NSObject <SKUIComposeReviewDelegate>
{
    CDUnknownBlockType _completion;
    SKUIReviewInAppConfiguration *_configuration;
    SKUIReviewInAppRatingViewController *_ratingViewController;
    SKUIComposeReviewViewController *_composeViewController;
    SKUIStoreDialogController *_dialogController;
    SKUIProductReviewURLProvider *_reviewURLProvider;
    SKUIStarRatingQueue *_starRatingQueue;
}

@property(retain, nonatomic) SKUIStarRatingQueue *starRatingQueue; // @synthesize starRatingQueue=_starRatingQueue;
@property(retain, nonatomic) SKUIProductReviewURLProvider *reviewURLProvider; // @synthesize reviewURLProvider=_reviewURLProvider;
@property(retain, nonatomic) SKUIStoreDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(retain, nonatomic) SKUIComposeReviewViewController *composeViewController; // @synthesize composeViewController=_composeViewController;
@property(retain, nonatomic) SKUIReviewInAppRatingViewController *ratingViewController; // @synthesize ratingViewController=_ratingViewController;
@property(copy, nonatomic) SKUIReviewInAppConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)_promptForStarRatingDuringCompose:(id)arg1;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_presentWriteReview;
- (void)_submitRating:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentRatingPrompt;
- (void)_finishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 result:(unsigned long long)arg2;
- (void)composeReviewViewControllerDidSubmit:(id)arg1;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)start;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

