//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand
{
}

+ (id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)changePrimaryUtterance;
- (_Bool)requiresResponse;
@property(nonatomic) long long utteranceIndex;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

