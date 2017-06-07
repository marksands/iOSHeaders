//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>
#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class NSString;

@interface CFSGSuggestContactMatchesWithTextSearch : SADomainCommand <CFLocalAceHandling, SAAceSerializable>
{
}

+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestContactMatchesWithTextSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestContactMatchesWithTextSearch;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *query;
@property(nonatomic) long long limit;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;
- (id)suggestedContactFromSuggestedContactMatches:(id)arg1 withService:(id)arg2 withOrigin:(_Bool)arg3;
- (id)aceLocationsFromSuggestedLocations:(id)arg1;
- (id)aceEmailsFromSuggestedEmails:(id)arg1;
- (id)acePhoneNumbersFromSuggestedPhoneNumbers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

