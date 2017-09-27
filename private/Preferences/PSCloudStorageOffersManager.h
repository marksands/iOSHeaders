//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CommerceRemoteUIDelegateDelegate.h"

@class CommerceRemoteUIDelegate, NSString;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate>
{
    CommerceRemoteUIDelegate *_commerceDelegate;
    _Bool _shouldOfferFamilySharePlansOnly;
    _Bool _skipRetryWithoutToken;
    _Bool _skipCompletionAlert;
    _Bool _supportsModernAlerts;
    id <PSCloudStorageOffersManagerDelegate> _delegate;
    unsigned long long _requiredStorageThreshold;
}

@property(nonatomic) _Bool supportsModernAlerts; // @synthesize supportsModernAlerts=_supportsModernAlerts;
@property(nonatomic) _Bool skipCompletionAlert; // @synthesize skipCompletionAlert=_skipCompletionAlert;
@property(nonatomic) _Bool skipRetryWithoutToken; // @synthesize skipRetryWithoutToken=_skipRetryWithoutToken;
@property(nonatomic) _Bool shouldOfferFamilySharePlansOnly; // @synthesize shouldOfferFamilySharePlansOnly=_shouldOfferFamilySharePlansOnly;
@property(nonatomic) unsigned long long requiredStorageThreshold; // @synthesize requiredStorageThreshold=_requiredStorageThreshold;
@property(nonatomic) __weak id <PSCloudStorageOffersManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commerceDelegate:(id)arg1 didCompleteWithError:(id)arg2;
- (void)commerceDelegateDidCancel:(id)arg1;
- (void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3;
- (void)dealloc;
- (void)cancelLoad;
- (void)beginFlowWithNavigationController:(id)arg1 purchaseToken:(id)arg2 buyParameters:(id)arg3 requestHeaders:(id)arg4 modally:(_Bool)arg5;
- (void)beginFlowWithNavigationController:(id)arg1 modally:(_Bool)arg2;
- (void)_setupFlowWithNavigationController:(id)arg1 modally:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

