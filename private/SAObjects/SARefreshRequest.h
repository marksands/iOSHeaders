//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class NSData, NSString;

@interface SARefreshRequest : SAStartRequest
{
}

+ (id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)refreshRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSData *serializedIntent;
@property(copy, nonatomic) NSData *nlResultState;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

