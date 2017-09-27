//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class NSMutableDictionary, NSString;

@interface ASAutodiscoverV2Task : ASTask
{
    NSString *_emailAddress;
    NSMutableDictionary *_accountInfo;
    _Bool _addEmptyBearer;
    _Bool _discoverOAuthEndpoint;
    NSString *_easEndPoint;
}

- (void).cxx_destruct;
- (_Bool)shouldLogIncomingData;
- (_Bool)requiresEASVersionInformaton;
- (void)finishWithError:(id)arg1;
- (_Bool)shouldStallAfterConnectionLost;
- (_Bool)shouldHandlePasswordErrors;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)didProcessContext:(id)arg1;
- (void)loadRequest:(id)arg1;
- (id)_OAuthURLFromResponseData:(id)arg1;
- (id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2;
- (_Bool)processContext:(id)arg1;
- (_Bool)_shouldRedirectToHTTPForRequest:(id)arg1;
- (_Bool)_shouldSendAuthForRequest:(id)arg1;
- (id)_HTTPMethodForRequest:(id)arg1;
- (id)contentType;
- (id)_policyKey;
- (id)_easVersion;
- (id)_url;
- (double)timeoutInterval;
- (id)initWithEmailAddress:(id)arg1;

@end

