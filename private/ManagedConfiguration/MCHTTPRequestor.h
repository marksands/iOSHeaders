//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSArray, NSString;

@interface MCHTTPRequestor : NSObject <NSURLSessionDataDelegate>
{
    _Bool _didFailDueToMissingCredentials;
    NSString *_username;
    NSString *_password;
    NSArray *_anchorCertificates;
    id _selfReference;
}

@property(nonatomic) _Bool didFailDueToMissingCredentials; // @synthesize didFailDueToMissingCredentials=_didFailDueToMissingCredentials;
@property(retain, nonatomic) id selfReference; // @synthesize selfReference=_selfReference;
@property(retain, nonatomic) NSArray *anchorCertificates; // @synthesize anchorCertificates=_anchorCertificates;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

