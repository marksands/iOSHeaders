//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStore/SSAuthenticateRequestDelegate-Protocol.h>

@class NSString, SSAuthenticateResponse, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate>
{
    SSMutableAuthenticationContext *_authenticationContext;
    SSAuthenticateResponse *_authenticateResponse;
}

- (void)_handleAuthenticateResponse:(id)arg1;
- (id)uniqueKey;
- (void)run;
- (id)authenticatedAccountDSID;
@property(readonly) SSAuthenticationContext *authenticationContext;
@property(readonly) SSAuthenticateResponse *authenticateResponse;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

