//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "SKProductPageExtensionClientInterface.h"
#import "ServiceProductPage.h"

@class NSString;

@interface SKProductPageRemoteViewController : _UIRemoteViewController <SKProductPageExtensionClientInterface, ServiceProductPage>
{
    id <SKProductPageRemoteViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak id <SKProductPageRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)extensionProxy;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setProductPageStyle:(id)arg1;
- (void)finishStarRatingPromptWithRating:(id)arg1;
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;
- (void)setPreview:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)loadProductWithURL:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadProductWithPageDictionary:(id)arg1;
- (void)finishImmediately;
- (void)setAskToBuy:(_Bool)arg1;
- (void)setPromptString:(id)arg1;
- (void)setShowsRightBarButton:(_Bool)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setShowsStoreButton:(_Bool)arg1;
- (void)loadDidFinish;
- (void)finishWithResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

