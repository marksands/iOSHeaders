//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>

@class NSString;

@interface CFBCGetNumberFormattedString : SABaseClientBoundCommand <CFLocalAceHandling>
{
}

+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNumberFormattedStringWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNumberFormattedString;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *variant;
@property(copy, nonatomic) NSString *style;
@property(copy, nonatomic) NSString *number;
@property(copy, nonatomic) NSString *locale;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

