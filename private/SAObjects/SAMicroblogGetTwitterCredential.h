//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAMicroblogGetSocialCredential.h>

@class NSString;

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential
{
}

+ (id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getTwitterCredential;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *consumerSecret;
@property(copy, nonatomic) NSString *consumerKey;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

