//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SASmsGroupSearch : SADomainCommand
{
}

+ (id)groupSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)groupSearch;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *smsGroupName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

