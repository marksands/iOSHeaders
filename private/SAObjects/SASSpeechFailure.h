//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand
{
}

+ (id)speechFailureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechFailure;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *reasonDescription;
@property(nonatomic) int reason;
@property(nonatomic) long long errorCode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

