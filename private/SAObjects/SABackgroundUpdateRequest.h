//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@interface SABackgroundUpdateRequest : SAStartRequest
{
}

+ (id)backgroundUpdateRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)backgroundUpdateRequest;
- (_Bool)requiresResponse;
@property(retain, nonatomic) id <SAAceSerializable> attachment;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

