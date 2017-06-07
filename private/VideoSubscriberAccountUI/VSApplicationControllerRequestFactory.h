//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerRequestFactory : NSObject
{
}

+ (id)_logoutSAMLRequestStringWithError:(id *)arg1;
+ (id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id *)arg4;
+ (id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(_Bool)arg2 error:(id *)arg3;
+ (id)sharedFactory;
- (id)_applicationControllerRequestWithType:(long long)arg1 SAMLRequestString:(id)arg2 authenticationTokenBody:(id)arg3 requestorVerificationToken:(id)arg4 attributeNames:(id)arg5 userInfo:(id)arg6;
- (id)logoutApplicationControllerRequest;
- (id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2;
- (id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(_Bool)arg2;
- (id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(_Bool)arg2;

@end
